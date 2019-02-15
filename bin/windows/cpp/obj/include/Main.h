#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS0(Room)
HX_DECLARE_CLASS0(Tile)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Main")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"); }

		static void __boot();
		static int MAP_WIDTH;
		static int MAP_HEIGHT;
		static int TILE_WIDTH;
		static int TILE_HEIGHT;
		static Void main( );
		static Dynamic main_dyn();

		Array< ::Dynamic > map;
		Array< ::Dynamic > rooms;
		int maxRooms;
		int minRoomSize;
		int maxRoomSize;
		virtual Void makeMap( );
		Dynamic makeMap_dyn();

		virtual Void placeRooms( );
		Dynamic placeRooms_dyn();

		virtual Void createRoom( ::Room room);
		Dynamic createRoom_dyn();

		virtual Void hCorridor( int x1,int x2,int y);
		Dynamic hCorridor_dyn();

		virtual Void vCorridor( int y1,int y2,int x);
		Dynamic vCorridor_dyn();

		virtual Void click( ::openfl::events::MouseEvent me);
		Dynamic click_dyn();

};


#endif /* INCLUDED_Main */ 
