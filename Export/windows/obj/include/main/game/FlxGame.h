// Generated by Haxe 4.3.6
#ifndef INCLUDED_main_game_FlxGame
#define INCLUDED_main_game_FlxGame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS1(main,State)
HX_DECLARE_CLASS2(main,game,FlxGame)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace main{
namespace game{


class HXCPP_CLASS_ATTRIBUTES FlxGame_obj : public  ::openfl::display::DisplayObject_obj
{
	public:
		typedef  ::openfl::display::DisplayObject_obj super;
		typedef FlxGame_obj OBJ_;
		FlxGame_obj();

	public:
		enum { _hx_ClassId = 0x05f25ad9 };

		void __construct( ::main::State state,::hx::Null< Float >  __o_fps);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="main.game.FlxGame")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"main.game.FlxGame"); }
		static ::hx::ObjectPtr< FlxGame_obj > __new( ::main::State state,::hx::Null< Float >  __o_fps);
		static ::hx::ObjectPtr< FlxGame_obj > __alloc(::hx::Ctx *_hx_ctx, ::main::State state,::hx::Null< Float >  __o_fps);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGame_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxGame",64,2d,b7,d4); }

		static  ::main::State nextState;
		static  ::main::State set_nextState( ::main::State value);
		static ::Dynamic set_nextState_dyn();

};

} // end namespace main
} // end namespace game

#endif /* INCLUDED_main_game_FlxGame */ 