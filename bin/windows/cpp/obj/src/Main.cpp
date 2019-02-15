#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Room
#include <Room.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Tile
#include <Tile.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",12,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	this->maxRoomSize = (int)7;
	HX_STACK_LINE(27)
	this->minRoomSize = (int)2;
	HX_STACK_LINE(26)
	this->maxRooms = (int)20;
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(35)
	this->map = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(36)
	this->makeMap();
	HX_STACK_LINE(39)
	::String tmp = ::openfl::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	Dynamic tmp1 = this->click_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	this->addEventListener(tmp,tmp1,null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::makeMap( ){
{
		HX_STACK_FRAME("Main","makeMap",0xc0505839,"Main.makeMap","Main.hx",43,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(45)
			int tmp = ::Main_obj::MAP_WIDTH;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(45)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(45)
			while((true)){
				HX_STACK_LINE(45)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(45)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(45)
				if ((tmp2)){
					HX_STACK_LINE(45)
					break;
				}
				HX_STACK_LINE(45)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				int x = tmp3;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(46)
				this->map[x] = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(47)
					int tmp4 = ::Main_obj::MAP_HEIGHT;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(47)
					int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(47)
					while((true)){
						HX_STACK_LINE(47)
						bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(47)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(47)
						if ((tmp6)){
							HX_STACK_LINE(47)
							break;
						}
						HX_STACK_LINE(47)
						int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(47)
						int y = tmp7;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(49)
						::Tile tmp8 = ::Tile_obj::__new((int)2,true,true);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(49)
						this->map->__get(x).StaticCast< Array< ::Dynamic > >()[y] = tmp8;
						HX_STACK_LINE(52)
						::Tile tmp9 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(52)
						int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(52)
						int tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(52)
						tmp9->setLoc(tmp10,tmp11);
						HX_STACK_LINE(55)
						::Tile tmp12 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(55)
						this->addChild(tmp12);
					}
				}
			}
		}
		HX_STACK_LINE(60)
		this->placeRooms();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,makeMap,(void))

Void Main_obj::placeRooms( ){
{
		HX_STACK_FRAME("Main","placeRooms",0x5978b1a6,"Main.placeRooms","Main.hx",63,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		this->rooms = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(68)
		::openfl::geom::Point newCenter = null();		HX_STACK_VAR(newCenter,"newCenter");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(71)
			int tmp = this->maxRooms;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(71)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			while((true)){
				HX_STACK_LINE(71)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(71)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(71)
				if ((tmp2)){
					HX_STACK_LINE(71)
					break;
				}
				HX_STACK_LINE(71)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				int r = tmp3;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(72)
				int tmp4 = this->minRoomSize;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				int tmp5 = this->maxRoomSize;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(72)
				int tmp6 = this->minRoomSize;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(72)
				int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(72)
				int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(72)
				int tmp9 = ::Std_obj::random(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(72)
				int tmp10 = (tmp4 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(72)
				int w = tmp10;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(73)
				int tmp11 = this->minRoomSize;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				int tmp12 = this->maxRoomSize;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(73)
				int tmp13 = this->minRoomSize;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				int tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				int tmp16 = ::Std_obj::random(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(73)
				int tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(73)
				int h = tmp17;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(74)
				int tmp18 = ::Main_obj::MAP_WIDTH;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(74)
				int tmp19 = w;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(74)
				int tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(74)
				int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(74)
				int tmp22 = ::Std_obj::random(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(74)
				int tmp23 = (tmp22 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(74)
				int x = tmp23;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(75)
				int tmp24 = ::Main_obj::MAP_HEIGHT;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(75)
				int tmp25 = h;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(75)
				int tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(75)
				int tmp27 = (tmp26 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(75)
				int tmp28 = ::Std_obj::random(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(75)
				int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(75)
				int y = tmp29;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(78)
				::Room tmp30 = ::Room_obj::__new(x,y,w,h);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(78)
				::Room newRoom = tmp30;		HX_STACK_VAR(newRoom,"newRoom");
				HX_STACK_LINE(80)
				bool failed = false;		HX_STACK_VAR(failed,"failed");
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(81)
					Array< ::Dynamic > _g3 = this->rooms;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(81)
					while((true)){
						HX_STACK_LINE(81)
						bool tmp31 = (_g2 < _g3->length);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(81)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(81)
						if ((tmp32)){
							HX_STACK_LINE(81)
							break;
						}
						HX_STACK_LINE(81)
						::Room tmp33 = _g3->__get(_g2).StaticCast< ::Room >();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(81)
						::Room otherRoom = tmp33;		HX_STACK_VAR(otherRoom,"otherRoom");
						HX_STACK_LINE(81)
						++(_g2);
						HX_STACK_LINE(82)
						::Room tmp34 = otherRoom;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(82)
						bool tmp35 = newRoom->intersects(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(82)
						if ((tmp35)){
							HX_STACK_LINE(83)
							failed = true;
							HX_STACK_LINE(84)
							break;
						}
					}
				}
				HX_STACK_LINE(87)
				bool tmp31 = failed;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(87)
				bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(87)
				if ((tmp32)){
					HX_STACK_LINE(89)
					::Room tmp33 = newRoom;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(89)
					this->createRoom(tmp33);
					HX_STACK_LINE(92)
					newCenter = newRoom->center;
					HX_STACK_LINE(94)
					int tmp34 = this->rooms->length;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(94)
					bool tmp35 = (tmp34 != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(94)
					if ((tmp35)){
						HX_STACK_LINE(96)
						int tmp36 = this->rooms->length;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(96)
						int tmp37 = (tmp36 - (int)1);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(96)
						::Room tmp38 = this->rooms->__get(tmp37).StaticCast< ::Room >();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(96)
						::openfl::geom::Point prevCenter = tmp38->center;		HX_STACK_VAR(prevCenter,"prevCenter");
						HX_STACK_LINE(100)
						int tmp39 = ::Std_obj::random((int)2);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(100)
						bool tmp40 = (tmp39 == (int)1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(100)
						if ((tmp40)){
							HX_STACK_LINE(101)
							Float tmp41 = prevCenter->x;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(101)
							int tmp42 = ::Std_obj::_int(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(101)
							Float tmp43 = newCenter->x;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(101)
							int tmp44 = ::Std_obj::_int(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(102)
							Float tmp45 = prevCenter->y;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(102)
							int tmp46 = ::Std_obj::_int(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(101)
							this->hCorridor(tmp42,tmp44,tmp46);
							HX_STACK_LINE(103)
							Float tmp47 = prevCenter->y;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(103)
							int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(103)
							Float tmp49 = newCenter->y;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(103)
							int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(104)
							Float tmp51 = newCenter->x;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(104)
							int tmp52 = ::Std_obj::_int(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(103)
							this->vCorridor(tmp48,tmp50,tmp52);
						}
						else{
							HX_STACK_LINE(106)
							Float tmp41 = prevCenter->y;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(106)
							int tmp42 = ::Std_obj::_int(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(106)
							Float tmp43 = newCenter->y;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(106)
							int tmp44 = ::Std_obj::_int(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(107)
							Float tmp45 = prevCenter->x;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(107)
							int tmp46 = ::Std_obj::_int(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(106)
							this->vCorridor(tmp42,tmp44,tmp46);
							HX_STACK_LINE(108)
							Float tmp47 = prevCenter->x;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(108)
							int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(108)
							Float tmp49 = newCenter->x;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(108)
							int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(109)
							Float tmp51 = newCenter->y;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(109)
							int tmp52 = ::Std_obj::_int(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(108)
							this->hCorridor(tmp48,tmp50,tmp52);
						}
					}
				}
				HX_STACK_LINE(113)
				bool tmp33 = failed;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(113)
				bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(113)
				if ((tmp34)){
					HX_STACK_LINE(113)
					::Room tmp35 = newRoom;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(113)
					this->rooms->push(tmp35);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,placeRooms,(void))

Void Main_obj::createRoom( ::Room room){
{
		HX_STACK_FRAME("Main","createRoom",0xf5c42d2c,"Main.createRoom","Main.hx",119,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(room,"room")
		HX_STACK_LINE(119)
		int _g1 = room->x1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(119)
		int _g = room->x2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		while((true)){
			HX_STACK_LINE(119)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(119)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(119)
			if ((tmp1)){
				HX_STACK_LINE(119)
				break;
			}
			HX_STACK_LINE(119)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(119)
			int x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				int _g3 = room->y1;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(120)
				int _g2 = room->y2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(120)
				while((true)){
					HX_STACK_LINE(120)
					bool tmp3 = (_g3 < _g2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(120)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(120)
					if ((tmp4)){
						HX_STACK_LINE(120)
						break;
					}
					HX_STACK_LINE(120)
					int tmp5 = (_g3)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(120)
					int y = tmp5;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(121)
					::Tile tmp6 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(121)
					::openfl::display::DisplayObjectContainer tmp7 = tmp6->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(121)
					bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(121)
					if ((tmp8)){
						HX_STACK_LINE(122)
						::Tile tmp9 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(122)
						::Tile tmp10 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(122)
						tmp9->parent->removeChild(tmp10);
					}
					HX_STACK_LINE(124)
					::Tile tmp9 = ::Tile_obj::__new((int)0,false,false);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(124)
					this->map->__get(x).StaticCast< Array< ::Dynamic > >()[y] = tmp9;
					HX_STACK_LINE(125)
					::Tile tmp10 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(125)
					int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(125)
					int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(125)
					tmp10->setLoc(tmp11,tmp12);
					HX_STACK_LINE(126)
					::Tile tmp13 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(126)
					this->addChild(tmp13);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,createRoom,(void))

Void Main_obj::hCorridor( int x1,int x2,int y){
{
		HX_STACK_FRAME("Main","hCorridor",0x10af295d,"Main.hCorridor","Main.hx",132,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(132)
		int tmp = x1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		int tmp1 = x2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(132)
		int _g1 = tmp3;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(132)
		int tmp4 = x1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(132)
		int tmp5 = x2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		Float tmp6 = ::Math_obj::max(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(132)
		int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(132)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(132)
		while((true)){
			HX_STACK_LINE(132)
			bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(132)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(132)
			if ((tmp10)){
				HX_STACK_LINE(132)
				break;
			}
			HX_STACK_LINE(132)
			int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(132)
			int x = tmp11;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(134)
			::Tile tmp12 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(134)
			::openfl::display::DisplayObjectContainer tmp13 = tmp12->parent;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(134)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(134)
			if ((tmp14)){
				HX_STACK_LINE(135)
				::Tile tmp15 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(135)
				::Tile tmp16 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(135)
				tmp15->parent->removeChild(tmp16);
			}
			HX_STACK_LINE(139)
			::Tile tmp15 = ::Tile_obj::__new((int)0,false,false);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(139)
			this->map->__get(x).StaticCast< Array< ::Dynamic > >()[y] = tmp15;
			HX_STACK_LINE(142)
			::Tile tmp16 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(142)
			this->addChild(tmp16);
			HX_STACK_LINE(145)
			::Tile tmp17 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(145)
			int tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(145)
			int tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(145)
			tmp17->setLoc(tmp18,tmp19);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Main_obj,hCorridor,(void))

Void Main_obj::vCorridor( int y1,int y2,int x){
{
		HX_STACK_FRAME("Main","vCorridor",0x99e2e76b,"Main.vCorridor","Main.hx",151,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(151)
		int tmp = y1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		int tmp1 = y2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		int _g1 = tmp3;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(151)
		int tmp4 = y1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		int tmp5 = y2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		Float tmp6 = ::Math_obj::max(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(151)
		int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(151)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(151)
		while((true)){
			HX_STACK_LINE(151)
			bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(151)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(151)
			if ((tmp10)){
				HX_STACK_LINE(151)
				break;
			}
			HX_STACK_LINE(151)
			int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(151)
			int y = tmp11;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(153)
			::Tile tmp12 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(153)
			::openfl::display::DisplayObjectContainer tmp13 = tmp12->parent;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(153)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(153)
			if ((tmp14)){
				HX_STACK_LINE(154)
				::Tile tmp15 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(154)
				::Tile tmp16 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(154)
				tmp15->parent->removeChild(tmp16);
			}
			HX_STACK_LINE(158)
			::Tile tmp15 = ::Tile_obj::__new((int)0,false,false);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(158)
			this->map->__get(x).StaticCast< Array< ::Dynamic > >()[y] = tmp15;
			HX_STACK_LINE(161)
			::Tile tmp16 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(161)
			this->addChild(tmp16);
			HX_STACK_LINE(164)
			::Tile tmp17 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(164)
			int tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(164)
			int tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(164)
			tmp17->setLoc(tmp18,tmp19);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Main_obj,vCorridor,(void))

Void Main_obj::click( ::openfl::events::MouseEvent me){
{
		HX_STACK_FRAME("Main","click",0xc491c273,"Main.click","Main.hx",169,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(me,"me")
		HX_STACK_LINE(171)
		{
			HX_STACK_LINE(171)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(171)
			int tmp = ::Main_obj::MAP_WIDTH;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(171)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(171)
			while((true)){
				HX_STACK_LINE(171)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(171)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(171)
				if ((tmp2)){
					HX_STACK_LINE(171)
					break;
				}
				HX_STACK_LINE(171)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(171)
				int x = tmp3;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(172)
				{
					HX_STACK_LINE(172)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(172)
					int tmp4 = ::Main_obj::MAP_HEIGHT;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(172)
					int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(172)
					while((true)){
						HX_STACK_LINE(172)
						bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(172)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(172)
						if ((tmp6)){
							HX_STACK_LINE(172)
							break;
						}
						HX_STACK_LINE(172)
						int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(172)
						int y = tmp7;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(173)
						::Tile tmp8 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(173)
						::openfl::display::DisplayObjectContainer tmp9 = tmp8->parent;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(173)
						bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(173)
						if ((tmp10)){
							HX_STACK_LINE(174)
							::Tile tmp11 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(174)
							::Tile tmp12 = this->map->__get(x).StaticCast< Array< ::Dynamic > >()->__get(y).StaticCast< ::Tile >();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(174)
							tmp11->parent->removeChild(tmp12);
						}
					}
				}
			}
		}
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(178)
			Array< ::Dynamic > _g1 = this->rooms;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(178)
			while((true)){
				HX_STACK_LINE(178)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(178)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(178)
				if ((tmp1)){
					HX_STACK_LINE(178)
					break;
				}
				HX_STACK_LINE(178)
				::Room tmp2 = _g1->__get(_g).StaticCast< ::Room >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(178)
				::Room r = tmp2;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(178)
				++(_g);
				HX_STACK_LINE(179)
				::Room tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(179)
				this->rooms->remove(tmp3);
			}
		}
		HX_STACK_LINE(183)
		this->makeMap();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,click,(void))

int Main_obj::MAP_WIDTH;

int Main_obj::MAP_HEIGHT;

int Main_obj::TILE_WIDTH;

int Main_obj::TILE_HEIGHT;

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",186,0x087e5c05)
		HX_STACK_LINE(188)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		tmp->stage->align = ::openfl::display::StageAlign_obj::TOP_LEFT;
		HX_STACK_LINE(189)
		::openfl::display::MovieClip tmp1 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		tmp1->stage->scaleMode = ::openfl::display::StageScaleMode_obj::NO_SCALE;
		HX_STACK_LINE(191)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		::Main tmp3 = ::Main_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		tmp2->addChild(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(rooms,"rooms");
	HX_MARK_MEMBER_NAME(maxRooms,"maxRooms");
	HX_MARK_MEMBER_NAME(minRoomSize,"minRoomSize");
	HX_MARK_MEMBER_NAME(maxRoomSize,"maxRoomSize");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(rooms,"rooms");
	HX_VISIT_MEMBER_NAME(maxRooms,"maxRooms");
	HX_VISIT_MEMBER_NAME(minRoomSize,"minRoomSize");
	HX_VISIT_MEMBER_NAME(maxRoomSize,"maxRoomSize");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rooms") ) { return rooms; }
		if (HX_FIELD_EQ(inName,"click") ) { return click_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"makeMap") ) { return makeMap_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxRooms") ) { return maxRooms; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hCorridor") ) { return hCorridor_dyn(); }
		if (HX_FIELD_EQ(inName,"vCorridor") ) { return vCorridor_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"placeRooms") ) { return placeRooms_dyn(); }
		if (HX_FIELD_EQ(inName,"createRoom") ) { return createRoom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"minRoomSize") ) { return minRoomSize; }
		if (HX_FIELD_EQ(inName,"maxRoomSize") ) { return maxRoomSize; }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MAP_WIDTH") ) { outValue = MAP_WIDTH; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAP_HEIGHT") ) { outValue = MAP_HEIGHT; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_WIDTH") ) { outValue = TILE_WIDTH; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TILE_HEIGHT") ) { outValue = TILE_HEIGHT; return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rooms") ) { rooms=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxRooms") ) { maxRooms=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"minRoomSize") ) { minRoomSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxRoomSize") ) { maxRoomSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"MAP_WIDTH") ) { MAP_WIDTH=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAP_HEIGHT") ) { MAP_HEIGHT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_WIDTH") ) { TILE_WIDTH=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TILE_HEIGHT") ) { TILE_HEIGHT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("rooms","\xf8","\x69","\x61","\xed"));
	outFields->push(HX_HCSTRING("maxRooms","\xb4","\xbc","\x7e","\x97"));
	outFields->push(HX_HCSTRING("minRoomSize","\x2e","\x14","\x68","\x16"));
	outFields->push(HX_HCSTRING("maxRoomSize","\x40","\x6f","\x82","\x51"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,rooms),HX_HCSTRING("rooms","\xf8","\x69","\x61","\xed")},
	{hx::fsInt,(int)offsetof(Main_obj,maxRooms),HX_HCSTRING("maxRooms","\xb4","\xbc","\x7e","\x97")},
	{hx::fsInt,(int)offsetof(Main_obj,minRoomSize),HX_HCSTRING("minRoomSize","\x2e","\x14","\x68","\x16")},
	{hx::fsInt,(int)offsetof(Main_obj,maxRoomSize),HX_HCSTRING("maxRoomSize","\x40","\x6f","\x82","\x51")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Main_obj::MAP_WIDTH,HX_HCSTRING("MAP_WIDTH","\xa3","\xe0","\x58","\x3b")},
	{hx::fsInt,(void *) &Main_obj::MAP_HEIGHT,HX_HCSTRING("MAP_HEIGHT","\x8a","\x26","\xbb","\x68")},
	{hx::fsInt,(void *) &Main_obj::TILE_WIDTH,HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3")},
	{hx::fsInt,(void *) &Main_obj::TILE_HEIGHT,HX_HCSTRING("TILE_HEIGHT","\x18","\x14","\xc1","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("rooms","\xf8","\x69","\x61","\xed"),
	HX_HCSTRING("maxRooms","\xb4","\xbc","\x7e","\x97"),
	HX_HCSTRING("minRoomSize","\x2e","\x14","\x68","\x16"),
	HX_HCSTRING("maxRoomSize","\x40","\x6f","\x82","\x51"),
	HX_HCSTRING("makeMap","\x4e","\xf1","\x1e","\x5c"),
	HX_HCSTRING("placeRooms","\xb1","\x33","\xf1","\xc1"),
	HX_HCSTRING("createRoom","\x37","\xaf","\x3c","\x5e"),
	HX_HCSTRING("hCorridor","\xb2","\xf1","\x25","\x30"),
	HX_HCSTRING("vCorridor","\xc0","\xaf","\x59","\xb9"),
	HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::MAP_WIDTH,"MAP_WIDTH");
	HX_MARK_MEMBER_NAME(Main_obj::MAP_HEIGHT,"MAP_HEIGHT");
	HX_MARK_MEMBER_NAME(Main_obj::TILE_WIDTH,"TILE_WIDTH");
	HX_MARK_MEMBER_NAME(Main_obj::TILE_HEIGHT,"TILE_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::MAP_WIDTH,"MAP_WIDTH");
	HX_VISIT_MEMBER_NAME(Main_obj::MAP_HEIGHT,"MAP_HEIGHT");
	HX_VISIT_MEMBER_NAME(Main_obj::TILE_WIDTH,"TILE_WIDTH");
	HX_VISIT_MEMBER_NAME(Main_obj::TILE_HEIGHT,"TILE_HEIGHT");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MAP_WIDTH","\xa3","\xe0","\x58","\x3b"),
	HX_HCSTRING("MAP_HEIGHT","\x8a","\x26","\xbb","\x68"),
	HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3"),
	HX_HCSTRING("TILE_HEIGHT","\x18","\x14","\xc1","\x4b"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

void Main_obj::__boot()
{
	MAP_WIDTH= (int)25;
	MAP_HEIGHT= (int)15;
	TILE_WIDTH= (int)24;
	TILE_HEIGHT= (int)24;
}

