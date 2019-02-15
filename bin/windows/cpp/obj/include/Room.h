#ifndef INCLUDED_Room
#define INCLUDED_Room

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Room)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)


class HXCPP_CLASS_ATTRIBUTES  Room_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Room_obj OBJ_;
		Room_obj();
		Void __construct(int x,int y,int w,int h);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Room")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Room_obj > __new(int x,int y,int w,int h);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Room_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"); }

		int x1;
		int x2;
		int y1;
		int y2;
		int w;
		int h;
		::openfl::geom::Point center;
		virtual bool intersects( ::Room room);
		Dynamic intersects_dyn();

};


#endif /* INCLUDED_Room */ 
