// Generated by Haxe 4.3.6
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#define INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoPattern,CairoPattern_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoPattern{


class HXCPP_CLASS_ATTRIBUTES CairoPattern_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CairoPattern_Impl__obj OBJ_;
		CairoPattern_Impl__obj();

	public:
		enum { _hx_ClassId = 0x1b81e167 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo._CairoPattern.CairoPattern_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_"); }

		inline static ::hx::ObjectPtr< CairoPattern_Impl__obj > __new() {
			::hx::ObjectPtr< CairoPattern_Impl__obj > __this = new CairoPattern_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CairoPattern_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			CairoPattern_Impl__obj *__this = (CairoPattern_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CairoPattern_Impl__obj), false, "lime.graphics.cairo._CairoPattern.CairoPattern_Impl_"));
			*(void **)__this = CairoPattern_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CairoPattern_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoPattern_Impl_",68,6d,2d,fb); }

		static  ::Dynamic _new( ::Dynamic handle);
		static ::Dynamic _new_dyn();

		static void addColorStopRGB( ::Dynamic this1,Float offset,Float r,Float g,Float b);
		static ::Dynamic addColorStopRGB_dyn();

		static void addColorStopRGBA( ::Dynamic this1,Float offset,Float r,Float g,Float b,Float a);
		static ::Dynamic addColorStopRGBA_dyn();

		static  ::Dynamic createForSurface( ::Dynamic surface);
		static ::Dynamic createForSurface_dyn();

		static  ::Dynamic createLinear(Float x0,Float y0,Float x1,Float y1);
		static ::Dynamic createLinear_dyn();

		static  ::Dynamic createRadial(Float cx0,Float cy0,Float radius0,Float cx1,Float cy1,Float radius1);
		static ::Dynamic createRadial_dyn();

		static  ::Dynamic createRGB(Float r,Float g,Float b);
		static ::Dynamic createRGB_dyn();

		static  ::Dynamic createRGBA(Float r,Float g,Float b,Float a);
		static ::Dynamic createRGBA_dyn();

		static int get_colorStopCount( ::Dynamic this1);
		static ::Dynamic get_colorStopCount_dyn();

		static int get_extend( ::Dynamic this1);
		static ::Dynamic get_extend_dyn();

		static int set_extend( ::Dynamic this1,int value);
		static ::Dynamic set_extend_dyn();

		static int get_filter( ::Dynamic this1);
		static ::Dynamic get_filter_dyn();

		static int set_filter( ::Dynamic this1,int value);
		static ::Dynamic set_filter_dyn();

		static  ::lime::utils::ArrayBufferView get_matrix( ::Dynamic this1);
		static ::Dynamic get_matrix_dyn();

		static  ::lime::utils::ArrayBufferView set_matrix( ::Dynamic this1, ::lime::utils::ArrayBufferView value);
		static ::Dynamic set_matrix_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoPattern

#endif /* INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_ */ 
