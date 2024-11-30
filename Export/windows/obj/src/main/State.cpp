// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_main_FlxG
#include <main/FlxG.h>
#endif
#ifndef INCLUDED_main_State
#include <main/State.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0ea3ba0d6e705973_10_new,"main.State","new",0xee9076ee,"main.State.new","main/State.hx",10,0x0b1da943)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea3ba0d6e705973_18_create,"main.State","create",0x329acd2e,"main.State.create","main/State.hx",18,0x0b1da943)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea3ba0d6e705973_14_create,"main.State","create",0x329acd2e,"main.State.create","main/State.hx",14,0x0b1da943)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea3ba0d6e705973_24_tryUpdate,"main.State","tryUpdate",0xb03e86b2,"main.State.tryUpdate","main/State.hx",24,0x0b1da943)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea3ba0d6e705973_45_tryDestroy,"main.State","tryDestroy",0x0d2dc031,"main.State.tryDestroy","main/State.hx",45,0x0b1da943)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea3ba0d6e705973_52_update,"main.State","update",0x3d90ec3b,"main.State.update","main/State.hx",52,0x0b1da943)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea3ba0d6e705973_57_destroy,"main.State","destroy",0x27f43288,"main.State.destroy","main/State.hx",57,0x0b1da943)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea3ba0d6e705973_62_add,"main.State","add",0xee8698af,"main.State.add","main/State.hx",62,0x0b1da943)
namespace main{

void State_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0ea3ba0d6e705973_10_new)
            	}

Dynamic State_obj::__CreateEmpty() { return new State_obj; }

void *State_obj::_hx_vtable = 0;

Dynamic State_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< State_obj > _hx_result = new State_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool State_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a603158;
}

void State_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::main::State,_gthis) HXARGC(1)
            		void _hx_run(int smth){
            			HX_STACKFRAME(&_hx_pos_0ea3ba0d6e705973_18_create)
HXLINE(  18)			_gthis->destroy();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_0ea3ba0d6e705973_14_create)
HXDLIN(  14)		 ::main::State _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  15)		::main::FlxG_obj::stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->tryUpdate_dyn(),null(),null(),null());
HXLINE(  16)		::lime::app::Application_obj::current->onExit->add( ::Dynamic(new _hx_Closure_0(_gthis)),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,create,(void))

void State_obj::tryUpdate( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_0ea3ba0d6e705973_24_tryUpdate)
HXDLIN(  24)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  26)			if ((event->type == HX_("enterFrame",f5,03,50,02))) {
HXLINE(  28)				int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  28)				Float first;
HXDLIN(  28)				if ((timer > 0)) {
HXLINE(  28)					first = (( (Float)(timer) ) / ( (Float)(1000) ));
            				}
            				else {
HXLINE(  28)					first = ( (Float)(0) );
            				}
HXLINE(  29)				this->update(::main::FlxG_obj::elapsed);
HXLINE(  30)				int timer1 = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  30)				Float second;
HXDLIN(  30)				if ((timer1 > 0)) {
HXLINE(  30)					second = (( (Float)(timer1) ) / ( (Float)(1000) ));
            				}
            				else {
HXLINE(  30)					second = ( (Float)(0) );
            				}
HXLINE(  31)				Float elapsed = ::Math_obj::abs((second - first));
HXLINE(  32)				::main::FlxG_obj::elapsed = elapsed;
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  35)				{
HXLINE(  35)					null();
            				}
HXDLIN(  35)				 ::Dynamic e = _g;
HXLINE(  36)				{
HXLINE(  37)					::String errMsg = ((HX_("Crash! Error: \n",62,7e,f1,e0) + ::Std_obj::string(e)) + HX_("           ",20,f4,c3,29));
HXLINE(  38)					::lime::app::Application_obj::current->_hx___window->alert(errMsg,HX_("Crash Handler from main.State",23,ef,f1,71));
HXLINE(  39)					::Sys_obj::exit(1);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,tryUpdate,(void))

void State_obj::tryDestroy( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_0ea3ba0d6e705973_45_tryDestroy)
HXDLIN(  45)		if ((event->type == HX_("close",b8,17,63,48))) {
HXLINE(  47)			this->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,tryDestroy,(void))

void State_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_0ea3ba0d6e705973_52_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,update,(void))

void State_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_0ea3ba0d6e705973_57_destroy)
HXDLIN(  57)		::main::FlxG_obj::stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->tryUpdate_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,destroy,(void))

void State_obj::add( ::openfl::display::DisplayObject basic){
            	HX_STACKFRAME(&_hx_pos_0ea3ba0d6e705973_62_add)
HXDLIN(  62)		::main::FlxG_obj::stage->stage->addChild(basic);
            	}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,add,(void))


::hx::ObjectPtr< State_obj > State_obj::__new() {
	::hx::ObjectPtr< State_obj > __this = new State_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< State_obj > State_obj::__alloc(::hx::Ctx *_hx_ctx) {
	State_obj *__this = (State_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(State_obj), false, "main.State"));
	*(void **)__this = State_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

State_obj::State_obj()
{
}

::hx::Val State_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tryUpdate") ) { return ::hx::Val( tryUpdate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tryDestroy") ) { return ::hx::Val( tryDestroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *State_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *State_obj_sStaticStorageInfo = 0;
#endif

static ::String State_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("tryUpdate",a4,81,19,71),
	HX_("tryDestroy",ff,58,ee,0b),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("add",21,f2,49,00),
	::String(null()) };

::hx::Class State_obj::__mClass;

void State_obj::__register()
{
	State_obj _hx_dummy;
	State_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("main.State",fc,27,bb,9c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(State_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< State_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = State_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = State_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace main