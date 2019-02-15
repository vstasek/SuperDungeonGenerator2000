#ifndef INCLUDED_Tile
#define INCLUDED_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Tile)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)


class HXCPP_CLASS_ATTRIBUTES  Tile_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Tile_obj OBJ_;
		Tile_obj();
		Void __construct(int id,bool blocked,bool blockSight);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Tile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tile_obj > __new(int id,bool blocked,bool blockSight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tile","\x4e","\xf7","\xd5","\x37"); }

		static void __boot();
		static int WIDTH;
		static int HEIGHT;
		static int DARK_GROUND;
		static int LIGHT_GROUND;
		static int DARK_WALL;
		static int LIGHT_WALL;
		int id;
		bool blocked;
		bool blockSight;
		::openfl::display::Bitmap image;
		::openfl::geom::Rectangle rect;
		::openfl::geom::ColorTransform colorTransform;
		virtual Void setLoc( int x,int y);
		Dynamic setLoc_dyn();

		virtual int getId( );
		Dynamic getId_dyn();

		virtual ::openfl::geom::Point getLoc( );
		Dynamic getLoc_dyn();

		virtual ::openfl::geom::Point getCenter( );
		Dynamic getCenter_dyn();

};


#endif /* INCLUDED_Tile */ 
