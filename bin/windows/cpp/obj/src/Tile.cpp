#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Tile
#include <Tile.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

Void Tile_obj::__construct(int id,bool blocked,bool blockSight)
{
HX_STACK_FRAME("Tile","new",0x479a5740,"Tile.new","Tile.hx",33,0x12b05030)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
HX_STACK_ARG(blocked,"blocked")
HX_STACK_ARG(blockSight,"blockSight")
{
	HX_STACK_LINE(34)
	super::__construct();
	HX_STACK_LINE(38)
	this->id = id;
	HX_STACK_LINE(39)
	this->blocked = blocked;
	HX_STACK_LINE(40)
	this->blockSight = blockSight;
	HX_STACK_LINE(41)
	bool tmp = (id == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	if ((tmp)){
		HX_STACK_LINE(41)
		::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/darkGround.png","\xa4","\x7e","\x06","\xe1"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		this->image = tmp2;
	}
	HX_STACK_LINE(42)
	bool tmp1 = (id == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	if ((tmp1)){
		HX_STACK_LINE(42)
		::openfl::display::BitmapData tmp2 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/darkWall.png","\x27","\xba","\x0b","\x58"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		::openfl::display::Bitmap tmp3 = ::openfl::display::Bitmap_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		this->image = tmp3;
	}
	HX_STACK_LINE(43)
	::openfl::display::Bitmap tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	tmp2->set_scaleX(((Float)0.5));
	HX_STACK_LINE(44)
	::openfl::display::Bitmap tmp3 = this->image;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	tmp3->set_scaleY(((Float)0.5));
	HX_STACK_LINE(45)
	::openfl::display::Bitmap tmp4 = this->image;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	this->addChild(tmp4);
}
;
	return null();
}

//Tile_obj::~Tile_obj() { }

Dynamic Tile_obj::__CreateEmpty() { return  new Tile_obj; }
hx::ObjectPtr< Tile_obj > Tile_obj::__new(int id,bool blocked,bool blockSight)
{  hx::ObjectPtr< Tile_obj > _result_ = new Tile_obj();
	_result_->__construct(id,blocked,blockSight);
	return _result_;}

Dynamic Tile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tile_obj > _result_ = new Tile_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Tile_obj::setLoc( int x,int y){
{
		HX_STACK_FRAME("Tile","setLoc",0x9e8ae71e,"Tile.setLoc","Tile.hx",48,0x12b05030)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(49)
		::openfl::display::Bitmap tmp = this->image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		int tmp2 = ::Main_obj::TILE_WIDTH;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		tmp->set_x(tmp3);
		HX_STACK_LINE(50)
		::openfl::display::Bitmap tmp4 = this->image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		int tmp6 = ::Main_obj::TILE_HEIGHT;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		tmp4->set_y(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Tile_obj,setLoc,(void))

int Tile_obj::getId( ){
	HX_STACK_FRAME("Tile","getId",0x1c7e90f1,"Tile.getId","Tile.hx",53,0x12b05030)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,getId,return )

::openfl::geom::Point Tile_obj::getLoc( ){
	HX_STACK_FRAME("Tile","getLoc",0xd24292aa,"Tile.getLoc","Tile.hx",57,0x12b05030)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	::openfl::display::Bitmap tmp = this->image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	Float tmp1 = tmp->get_x();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	int tmp2 = ::Main_obj::TILE_WIDTH;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	::openfl::display::Bitmap tmp4 = this->image;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	Float tmp5 = tmp4->get_y();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(58)
	int tmp6 = ::Main_obj::TILE_HEIGHT;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(58)
	::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new(tmp3,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(58)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,getLoc,return )

::openfl::geom::Point Tile_obj::getCenter( ){
	HX_STACK_FRAME("Tile","getCenter",0x20e89deb,"Tile.getCenter","Tile.hx",61,0x12b05030)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::openfl::display::Bitmap tmp = this->image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1 = tmp->get_x();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	::openfl::display::Bitmap tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	Float tmp3 = tmp2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	Float tmp5 = (tmp1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	::openfl::display::Bitmap tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	Float tmp7 = tmp6->get_y();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	::openfl::display::Bitmap tmp8 = this->image;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(62)
	Float tmp9 = tmp8->get_height();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(62)
	Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(62)
	Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(62)
	::openfl::geom::Point tmp12 = ::openfl::geom::Point_obj::__new(tmp5,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(62)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,getCenter,return )

int Tile_obj::WIDTH;

int Tile_obj::HEIGHT;

int Tile_obj::DARK_GROUND;

int Tile_obj::LIGHT_GROUND;

int Tile_obj::DARK_WALL;

int Tile_obj::LIGHT_WALL;


Tile_obj::Tile_obj()
{
}

void Tile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tile);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(blocked,"blocked");
	HX_MARK_MEMBER_NAME(blockSight,"blockSight");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(blocked,"blocked");
	HX_VISIT_MEMBER_NAME(blockSight,"blockSight");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setLoc") ) { return setLoc_dyn(); }
		if (HX_FIELD_EQ(inName,"getLoc") ) { return getLoc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"blocked") ) { return blocked; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getCenter") ) { return getCenter_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blockSight") ) { return blockSight; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

bool Tile_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"WIDTH") ) { outValue = WIDTH; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"HEIGHT") ) { outValue = HEIGHT; return true;  }
	}
	return false;
}

Dynamic Tile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"blocked") ) { blocked=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blockSight") ) { blockSight=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tile_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"WIDTH") ) { WIDTH=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"HEIGHT") ) { HEIGHT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Tile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("blocked","\xec","\x7a","\xfe","\x44"));
	outFields->push(HX_HCSTRING("blockSight","\xd0","\x43","\x2e","\x54"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Tile_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Tile_obj,blocked),HX_HCSTRING("blocked","\xec","\x7a","\xfe","\x44")},
	{hx::fsBool,(int)offsetof(Tile_obj,blockSight),HX_HCSTRING("blockSight","\xd0","\x43","\x2e","\x54")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Tile_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Tile_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Tile_obj,colorTransform),HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Tile_obj::WIDTH,HX_HCSTRING("WIDTH","\xe6","\xed","\x50","\x48")},
	{hx::fsInt,(void *) &Tile_obj::HEIGHT,HX_HCSTRING("HEIGHT","\xe7","\xb3","\xce","\xb4")},
	{hx::fsInt,(void *) &Tile_obj::DARK_GROUND,HX_HCSTRING("DARK_GROUND","\x70","\xde","\x39","\x9e")},
	{hx::fsInt,(void *) &Tile_obj::LIGHT_GROUND,HX_HCSTRING("LIGHT_GROUND","\x30","\x3a","\x7d","\xee")},
	{hx::fsInt,(void *) &Tile_obj::DARK_WALL,HX_HCSTRING("DARK_WALL","\xb3","\x38","\x57","\xc9")},
	{hx::fsInt,(void *) &Tile_obj::LIGHT_WALL,HX_HCSTRING("LIGHT_WALL","\x73","\x24","\xb8","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("blocked","\xec","\x7a","\xfe","\x44"),
	HX_HCSTRING("blockSight","\xd0","\x43","\x2e","\x54"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("setLoc","\xfe","\xe1","\x69","\x6f"),
	HX_HCSTRING("getId","\x11","\x92","\x60","\x91"),
	HX_HCSTRING("getLoc","\x8a","\x8d","\x21","\xa3"),
	HX_HCSTRING("getCenter","\x0b","\xaf","\x31","\x82"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tile_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(Tile_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(Tile_obj::DARK_GROUND,"DARK_GROUND");
	HX_MARK_MEMBER_NAME(Tile_obj::LIGHT_GROUND,"LIGHT_GROUND");
	HX_MARK_MEMBER_NAME(Tile_obj::DARK_WALL,"DARK_WALL");
	HX_MARK_MEMBER_NAME(Tile_obj::LIGHT_WALL,"LIGHT_WALL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tile_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(Tile_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(Tile_obj::DARK_GROUND,"DARK_GROUND");
	HX_VISIT_MEMBER_NAME(Tile_obj::LIGHT_GROUND,"LIGHT_GROUND");
	HX_VISIT_MEMBER_NAME(Tile_obj::DARK_WALL,"DARK_WALL");
	HX_VISIT_MEMBER_NAME(Tile_obj::LIGHT_WALL,"LIGHT_WALL");
};

#endif

hx::Class Tile_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("WIDTH","\xe6","\xed","\x50","\x48"),
	HX_HCSTRING("HEIGHT","\xe7","\xb3","\xce","\xb4"),
	HX_HCSTRING("DARK_GROUND","\x70","\xde","\x39","\x9e"),
	HX_HCSTRING("LIGHT_GROUND","\x30","\x3a","\x7d","\xee"),
	HX_HCSTRING("DARK_WALL","\xb3","\x38","\x57","\xc9"),
	HX_HCSTRING("LIGHT_WALL","\x73","\x24","\xb8","\x4e"),
	::String(null()) };

void Tile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Tile","\x4e","\xf7","\xd5","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tile_obj::__GetStatic;
	__mClass->mSetStaticField = &Tile_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tile_obj >;
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

void Tile_obj::__boot()
{
	WIDTH= (int)32;
	HEIGHT= (int)32;
	DARK_GROUND= (int)0;
	LIGHT_GROUND= (int)1;
	DARK_WALL= (int)2;
	LIGHT_WALL= (int)3;
}

