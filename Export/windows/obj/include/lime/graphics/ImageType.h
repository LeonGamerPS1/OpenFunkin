// Generated by Haxe 4.3.6
#ifndef INCLUDED_lime_graphics_ImageType
#define INCLUDED_lime_graphics_ImageType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,ImageType)
namespace lime{
namespace graphics{


class ImageType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ImageType_obj OBJ_;

	public:
		ImageType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("lime.graphics.ImageType",eb,63,71,4d); }
		::String __ToString() const { return HX_("ImageType.",f9,3a,4a,1d) + _hx_tag; }

		static ::lime::graphics::ImageType CANVAS;
		static inline ::lime::graphics::ImageType CANVAS_dyn() { return CANVAS; }
		static ::lime::graphics::ImageType CUSTOM;
		static inline ::lime::graphics::ImageType CUSTOM_dyn() { return CUSTOM; }
		static ::lime::graphics::ImageType DATA;
		static inline ::lime::graphics::ImageType DATA_dyn() { return DATA; }
		static ::lime::graphics::ImageType FLASH;
		static inline ::lime::graphics::ImageType FLASH_dyn() { return FLASH; }
};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_ImageType */ 
