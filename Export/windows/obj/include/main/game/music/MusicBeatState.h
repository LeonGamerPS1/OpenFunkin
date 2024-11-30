// Generated by Haxe 4.3.6
#ifndef INCLUDED_main_game_music_MusicBeatState
#define INCLUDED_main_game_music_MusicBeatState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_main_State
#include <main/State.h>
#endif
HX_DECLARE_CLASS1(main,State)
HX_DECLARE_CLASS3(main,game,music,MusicBeatState)

namespace main{
namespace game{
namespace music{


class HXCPP_CLASS_ATTRIBUTES MusicBeatState_obj : public  ::main::State_obj
{
	public:
		typedef  ::main::State_obj super;
		typedef MusicBeatState_obj OBJ_;
		MusicBeatState_obj();

	public:
		enum { _hx_ClassId = 0x32100948 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="main.game.music.MusicBeatState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"main.game.music.MusicBeatState"); }
		static ::hx::ObjectPtr< MusicBeatState_obj > __new();
		static ::hx::ObjectPtr< MusicBeatState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MusicBeatState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MusicBeatState",76,df,84,5d); }

		Float lastBeat;
		Float lastStep;
		int totalBeats;
		int totalSteps;
		int curStep;
		int curBeat;
		virtual void create();

		virtual void update(Float elapsed);

		void everyStep();
		::Dynamic everyStep_dyn();

		void updateCurStep();
		::Dynamic updateCurStep_dyn();

		void stepHit();
		::Dynamic stepHit_dyn();

		void beatHit();
		::Dynamic beatHit_dyn();

};

} // end namespace main
} // end namespace game
} // end namespace music

#endif /* INCLUDED_main_game_music_MusicBeatState */ 