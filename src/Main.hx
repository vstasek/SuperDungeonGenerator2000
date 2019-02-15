package ;

import flash.display.Sprite;
import flash.events.MouseEvent;
import flash.Lib;

class Main extends Sprite {
	// global variables for easy access
	public static var MAP_WIDTH = 25;
	public static var MAP_HEIGHT = 24;
	public static var TILE_WIDTH = 24;
	public static var TILE_HEIGHT = 24;
	
	// map will hold all tiles that make up our game map
	private var map:Array<Array<Tile>>;
	
	// rooms will hold all rooms created for the dungeon level
	private var rooms:Array<Room>;
	
	// values to cap our random generation
	private var maxRooms = 20;
	private var minRoomSize = 2;
	private var maxRoomSize = 7;

	public function new() {
		super();
		
		// initialize map array and run function to
		// create our game map
		map = new Array<Array<Tile>>();
		makeMap();
		
		// event listener for mouse click
		addEventListener(MouseEvent.CLICK, click);
	}
	
	// fill map array with appropriate tiles
	private function makeMap() {
		// this for loop iterates through map, placing only wall tiles
		for (x in 0...Main.MAP_WIDTH) {
			map[x] = new Array<Tile>();
			for (y in 0...Main.MAP_HEIGHT) {
				// initialize a new tile
				map[x][y] = new Tile(Tile.DARK_WALL, true, true);
				
				// set location of tile based on array values
				map[x][y].setLoc(x, y);
				
				// add tile as a child so it will display
				addChild(map[x][y]);
			}
		}
		
		// call place rooms to... place... rooms
		placeRooms();
	}
	
	private function placeRooms() {
		// store rooms in an array for easy access
		rooms = new Array<Room>();

		// variable for tracking center of each room
		var newCenter = null;

		// randomize values for each room
		for (r in 0...maxRooms) {
			var w = minRoomSize + Std.random(maxRoomSize - minRoomSize + 1);
			var h = minRoomSize + Std.random(maxRoomSize - minRoomSize + 1);
			var x = Std.random(MAP_WIDTH - w - 1) + 1;
			var y = Std.random(MAP_HEIGHT - h - 1) + 1;

			// create room with randomized values
			var newRoom = new Room(x, y, w, h);

			var failed = false;
			for (otherRoom in rooms) {
				if (newRoom.intersects(otherRoom)) {
					failed = true;
					break;
				}
			}
			if (!failed) {
				// local function to carve out new room
				createRoom(newRoom);

				// store center for new room
				newCenter = newRoom.center;

				if(rooms.length != 0){
					// store center of previous room
					var prevCenter = rooms[rooms.length - 1].center;

					// carve out corridors between rooms based on centers
					// randomly start with horizontal or vertical corridors
					if (Std.random(2) == 1) {
						hCorridor(Std.int(prevCenter.x), Std.int(newCenter.x),
							Std.int(prevCenter.y));
						vCorridor(Std.int(prevCenter.y), Std.int(newCenter.y),
							Std.int(newCenter.x));
					} else {
						vCorridor(Std.int(prevCenter.y), Std.int(newCenter.y),
							Std.int(prevCenter.x));
						hCorridor(Std.int(prevCenter.x), Std.int(newCenter.x),
							Std.int(newCenter.y));
						}
					}
				}
			if(!failed) rooms.push(newRoom);
			}
	}

	// carves out a room based on size and dimensions of a room
	private function createRoom(room:Room){
		for(x in room.x1...room.x2){
			for (y in room.y1...room.y2) {
				if (map[x][y].parent != null) {
					map[x][y].parent.removeChild(map[x][y]);
				}
				map[x][y] = new Tile(Tile.DARK_GROUND, false, false);
				map[x][y].setLoc(x, y);
				addChild(map[x][y]);
			}
		}
	}

	private function hCorridor(x1:Int, x2:Int, y) {
		for (x in Std.int(Math.min(x1, x2))...Std.int(Math.max(x1, x2)) + 1) {
			// destory the tiles to "carve" out corridor
			if (map[x][y].parent != null) {
					map[x][y].parent.removeChild(map[x][y]);
				}

			// place a new unblocked tile
			map[x][y] = new Tile(Tile.DARK_GROUND, false, false);

			// add tile as a new game object
			addChild(map[x][y]);

			// set the location of the tile approprately
			map[x][y].setLoc(x, y);
		}
	}

	// create vertical corridor to connect rooms
	private function vCorridor(y1:Int, y2:Int, x) {
		for (y in Std.int(Math.min(y1, y2))...Std.int(Math.max(y1, y2)) + 1) {
			// destroy the tiles to "carve" out corridor
			if (map[x][y].parent != null) {
					map[x][y].parent.removeChild(map[x][y]);
				}

			// place a new unblocked tile
			map[x][y] = new Tile(Tile.DARK_GROUND, false, false);

			// add tile as a new game object
			addChild(map[x][y]);

			// set the location of the tile appropriately
			map[x][y].setLoc(x, y);
		}
	}
	
	// handle mouse clicks by generating a new level
	private function click(me:MouseEvent) {
		// clear out current map and the rooms array
		for (x in 0...MAP_WIDTH) {
			for (y in 0...MAP_HEIGHT) {
				if (map[x][y].parent != null) {
					map[x][y].parent.removeChild(map[x][y]);
				}
			}
		}
		for (r in rooms) {
			rooms.remove(r);
		}
		
		// rebuild map
		makeMap();
	}
	
	public static function main() {
		// static entry point
		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		
		Lib.current.addChild(new Main());
	}
}
