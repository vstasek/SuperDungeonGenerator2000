#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Room
#include <Room.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

Void Room_obj::__construct(int x,int y,int w,int h)
{
HX_STACK_FRAME("Room","new",0x9cfcf4ad,"Room.new","Room.hx",25,0xe526ff63)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(w,"w")
HX_STACK_ARG(h,"h")
{
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(28)
	this->x1 = x;
	HX_STACK_LINE(29)
	int tmp = (x + w);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	this->x2 = tmp;
	HX_STACK_LINE(30)
	this->y1 = y;
	HX_STACK_LINE(31)
	int tmp1 = (y + h);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	this->y2 = tmp1;
	HX_STACK_LINE(32)
	int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	int tmp3 = ::Main_obj::TILE_WIDTH;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	this->set_x(tmp4);
	HX_STACK_LINE(33)
	int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	int tmp6 = ::Main_obj::TILE_HEIGHT;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(33)
	this->set_y(tmp7);
	HX_STACK_LINE(34)
	this->w = w;
	HX_STACK_LINE(35)
	this->h = h;
	HX_STACK_LINE(36)
	int tmp8 = this->x1;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(36)
	int tmp9 = this->x2;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(36)
	int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(36)
	Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(36)
	int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(37)
	int tmp13 = this->y1;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(37)
	int tmp14 = this->y2;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(37)
	int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(37)
	Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(37)
	int tmp17 = ::Math_obj::floor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(36)
	::openfl::geom::Point tmp18 = ::openfl::geom::Point_obj::__new(tmp12,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(36)
	this->center = tmp18;
}
;
	return null();
}

//Room_obj::~Room_obj() { }

Dynamic Room_obj::__CreateEmpty() { return  new Room_obj; }
hx::ObjectPtr< Room_obj > Room_obj::__new(int x,int y,int w,int h)
{  hx::ObjectPtr< Room_obj > _result_ = new Room_obj();
	_result_->__construct(x,y,w,h);
	return _result_;}

Dynamic Room_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Room_obj > _result_ = new Room_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

bool Room_obj::intersects( ::Room room){
	HX_STACK_FRAME("Room","intersects",0x6a9b7207,"Room.intersects","Room.hx",41,0xe526ff63)
	HX_STACK_THIS(this)
	HX_STACK_ARG(room,"room")
	HX_STACK_LINE(42)
	int tmp = this->x1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	int tmp1 = room->x2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	if ((tmp3)){
		HX_STACK_LINE(42)
		int tmp5 = this->x2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		int tmp8 = room->x1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		tmp4 = (tmp7 >= tmp8);
	}
	else{
		HX_STACK_LINE(42)
		tmp4 = false;
	}
	HX_STACK_LINE(42)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	if ((tmp5)){
		HX_STACK_LINE(43)
		int tmp7 = this->y1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		int tmp10 = room->y2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(43)
		tmp6 = (tmp9 <= tmp10);
	}
	else{
		HX_STACK_LINE(42)
		tmp6 = false;
	}
	HX_STACK_LINE(42)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(42)
	if ((tmp6)){
		HX_STACK_LINE(43)
		tmp7 = (room->y2 >= room->y1);
	}
	else{
		HX_STACK_LINE(42)
		tmp7 = false;
	}
	HX_STACK_LINE(42)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Room_obj,intersects,return )


Room_obj::Room_obj()
{
}

void Room_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Room);
	HX_MARK_MEMBER_NAME(x1,"x1");
	HX_MARK_MEMBER_NAME(x2,"x2");
	HX_MARK_MEMBER_NAME(y1,"y1");
	HX_MARK_MEMBER_NAME(y2,"y2");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(center,"center");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Room_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x1,"x1");
	HX_VISIT_MEMBER_NAME(x2,"x2");
	HX_VISIT_MEMBER_NAME(y1,"y1");
	HX_VISIT_MEMBER_NAME(y2,"y2");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(center,"center");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Room_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"x1") ) { return x1; }
		if (HX_FIELD_EQ(inName,"x2") ) { return x2; }
		if (HX_FIELD_EQ(inName,"y1") ) { return y1; }
		if (HX_FIELD_EQ(inName,"y2") ) { return y2; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { return center; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Room_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x2") ) { x2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y2") ) { y2=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Room_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("x2","\xba","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y1","\x98","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("y2","\x99","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Room_obj,x1),HX_HCSTRING("x1","\xb9","\x68","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Room_obj,x2),HX_HCSTRING("x2","\xba","\x68","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Room_obj,y1),HX_HCSTRING("y1","\x98","\x69","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Room_obj,y2),HX_HCSTRING("y2","\x99","\x69","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Room_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Room_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Room_obj,center),HX_HCSTRING("center","\xd5","\x25","\xdb","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"),
	HX_HCSTRING("x2","\xba","\x68","\x00","\x00"),
	HX_HCSTRING("y1","\x98","\x69","\x00","\x00"),
	HX_HCSTRING("y2","\x99","\x69","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),
	HX_HCSTRING("intersects","\xb4","\xc2","\xeb","\xe3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Room_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Room_obj::__mClass,"__mClass");
};

#endif

hx::Class Room_obj::__mClass;

void Room_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Room_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

