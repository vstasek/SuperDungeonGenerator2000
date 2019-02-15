package ;

import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Sprite;
import flash.geom.ColorTransform;
import flash.geom.Point;
import flash.geom.Rectangle;
import openfl.Assets;
 
class Tile extends Sprite {
	public static var WIDTH:Int = 32;
	public static var HEIGHT:Int = 32;
	
	// use these to define tile types at creation
	public inline static var DARK_GROUND = 0;
	public inline static var DARK_WALL = 2;
	
	private var id:Int;
	public var blocked:Bool;
	public var blockSight:Bool;
	private var image:Bitmap;
	private var rect:Rectangle;
	private var colorTransform:ColorTransform;

	public function new(id:Int, blocked:Bool, blockSight:Bool) {
		super();
		
		// set parameters to variables
		// if a tile is blocked it also blocks sight by default
		this.id = id;
		this.blocked = blocked;
		this.blockSight = blockSight;
		if (id == DARK_GROUND) image = new Bitmap(Assets.getBitmapData("img/darkGround.png"));
		if(id == DARK_WALL) image = new Bitmap(Assets.getBitmapData("img/darkWall.png"));
		image.scaleX = 0.5;
		image.scaleY = 0.5;
		addChild(image);
	}
	
	public function setLoc(x:Int, y:Int) {
		image.x = x * Main.TILE_WIDTH;
		image.y = y * Main.TILE_HEIGHT;
	}

	public function getId():Int{
		return id;
	}

	public function getLoc():Point{
		return new Point(image.x / Main.TILE_WIDTH, image.y / Main.TILE_HEIGHT);
	}
	
	public function getCenter() {
		return new Point(image.x + image.width / 2, image.y + image.height / 2);
	}
}