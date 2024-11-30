// Generated by Haxe 4.3.6
#ifndef INCLUDED_openfl_display__internal_Context3DVideo
#define INCLUDED_openfl_display__internal_Context3DVideo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS3(openfl,display,_internal,Context3DVideo)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Video)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES Context3DVideo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context3DVideo_obj OBJ_;
		Context3DVideo_obj();

	public:
		enum { _hx_ClassId = 0x4de6ab29 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.Context3DVideo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.Context3DVideo"); }

		inline static ::hx::ObjectPtr< Context3DVideo_obj > __new() {
			::hx::ObjectPtr< Context3DVideo_obj > __this = new Context3DVideo_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Context3DVideo_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Context3DVideo_obj *__this = (Context3DVideo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context3DVideo_obj), false, "openfl.display._internal.Context3DVideo"));
			*(void **)__this = Context3DVideo_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context3DVideo_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DVideo",1b,e0,77,c3); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::Array< Float > _hx___textureSizeValue;
		static void render( ::openfl::media::Video video, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderDrawable( ::openfl::media::Video video, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::media::Video video, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

		static void renderMask( ::openfl::media::Video video, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_Context3DVideo */ 
