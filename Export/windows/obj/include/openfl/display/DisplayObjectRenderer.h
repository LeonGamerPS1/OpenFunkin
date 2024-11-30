// Generated by Haxe 4.3.6
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#define INCLUDED_openfl_display_DisplayObjectRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES DisplayObjectRenderer_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef DisplayObjectRenderer_obj OBJ_;
		DisplayObjectRenderer_obj();

	public:
		enum { _hx_ClassId = 0x49529132 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.DisplayObjectRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.DisplayObjectRenderer"); }
		static ::hx::ObjectPtr< DisplayObjectRenderer_obj > __new();
		static ::hx::ObjectPtr< DisplayObjectRenderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DisplayObjectRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DisplayObjectRenderer",e4,f4,5f,fb); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool _hx___allowSmoothing;
		 ::Dynamic _hx___blendMode;
		bool _hx___cleared;
		 ::lime::graphics::RenderContext _hx___context;
		 ::Dynamic _hx___overrideBlendMode;
		Float _hx___pixelRatio;
		bool _hx___roundPixels;
		 ::openfl::display::Stage _hx___stage;
		 ::openfl::geom::ColorTransform _hx___tempColorTransform;
		bool _hx___transparent;
		::String _hx___type;
		Float _hx___worldAlpha;
		 ::openfl::geom::ColorTransform _hx___worldColorTransform;
		 ::openfl::geom::Matrix _hx___worldTransform;
		virtual void _hx___clear();
		::Dynamic _hx___clear_dyn();

		Float _hx___getAlpha(Float value);
		::Dynamic _hx___getAlpha_dyn();

		 ::openfl::geom::ColorTransform _hx___getColorTransform( ::openfl::geom::ColorTransform value);
		::Dynamic _hx___getColorTransform_dyn();

		virtual void _hx___popMask();
		::Dynamic _hx___popMask_dyn();

		virtual void _hx___popMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  handleScrollRect);
		::Dynamic _hx___popMaskObject_dyn();

		virtual void _hx___popMaskRect();
		::Dynamic _hx___popMaskRect_dyn();

		virtual void _hx___pushMask( ::openfl::display::DisplayObject mask);
		::Dynamic _hx___pushMask_dyn();

		virtual void _hx___pushMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  handleScrollRect);
		::Dynamic _hx___pushMaskObject_dyn();

		virtual void _hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform);
		::Dynamic _hx___pushMaskRect_dyn();

		virtual void _hx___render(::Dynamic object);
		::Dynamic _hx___render_dyn();

		void _hx___renderEvent( ::openfl::display::DisplayObject displayObject);
		::Dynamic _hx___renderEvent_dyn();

		virtual void _hx___resize(int width,int height);
		::Dynamic _hx___resize_dyn();

		virtual void _hx___setBlendMode( ::Dynamic value);
		::Dynamic _hx___setBlendMode_dyn();

		 ::Dynamic _hx___shouldCacheHardware( ::openfl::display::DisplayObject displayObject, ::Dynamic value);
		::Dynamic _hx___shouldCacheHardware_dyn();

		 ::Dynamic _hx___shouldCacheHardware_DisplayObject( ::openfl::display::DisplayObject displayObject, ::Dynamic value);
		::Dynamic _hx___shouldCacheHardware_DisplayObject_dyn();

		bool _hx___updateCacheBitmap( ::openfl::display::DisplayObject displayObject,bool force);
		::Dynamic _hx___updateCacheBitmap_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DisplayObjectRenderer */ 
