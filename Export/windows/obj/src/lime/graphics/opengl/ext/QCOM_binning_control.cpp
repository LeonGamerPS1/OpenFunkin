// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_binning_control
#include <lime/graphics/opengl/ext/QCOM_binning_control.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06241e1e759ad02a_4_new,"lime.graphics.opengl.ext.QCOM_binning_control","new",0x63f866de,"lime.graphics.opengl.ext.QCOM_binning_control.new","lime/graphics/opengl/ext/QCOM_binning_control.hx",4,0xe4b809f0)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void QCOM_binning_control_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_06241e1e759ad02a_4_new)
HXLINE(   9)		this->RENDER_DIRECT_TO_FRAMEBUFFER_QCOM = 36787;
HXLINE(   8)		this->GPU_OPTIMIZED_QCOM = 36786;
HXLINE(   7)		this->CPU_OPTIMIZED_QCOM = 36785;
HXLINE(   6)		this->BINNING_CONTROL_HINT_QCOM = 36784;
            	}

Dynamic QCOM_binning_control_obj::__CreateEmpty() { return new QCOM_binning_control_obj; }

void *QCOM_binning_control_obj::_hx_vtable = 0;

Dynamic QCOM_binning_control_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QCOM_binning_control_obj > _hx_result = new QCOM_binning_control_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QCOM_binning_control_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x05a67f3c;
}


QCOM_binning_control_obj::QCOM_binning_control_obj()
{
}

::hx::Val QCOM_binning_control_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"CPU_OPTIMIZED_QCOM") ) { return ::hx::Val( CPU_OPTIMIZED_QCOM ); }
		if (HX_FIELD_EQ(inName,"GPU_OPTIMIZED_QCOM") ) { return ::hx::Val( GPU_OPTIMIZED_QCOM ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"BINNING_CONTROL_HINT_QCOM") ) { return ::hx::Val( BINNING_CONTROL_HINT_QCOM ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"RENDER_DIRECT_TO_FRAMEBUFFER_QCOM") ) { return ::hx::Val( RENDER_DIRECT_TO_FRAMEBUFFER_QCOM ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val QCOM_binning_control_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"CPU_OPTIMIZED_QCOM") ) { CPU_OPTIMIZED_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GPU_OPTIMIZED_QCOM") ) { GPU_OPTIMIZED_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"BINNING_CONTROL_HINT_QCOM") ) { BINNING_CONTROL_HINT_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"RENDER_DIRECT_TO_FRAMEBUFFER_QCOM") ) { RENDER_DIRECT_TO_FRAMEBUFFER_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_binning_control_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("BINNING_CONTROL_HINT_QCOM",82,b3,04,f7));
	outFields->push(HX_("CPU_OPTIMIZED_QCOM",bf,be,ec,c1));
	outFields->push(HX_("GPU_OPTIMIZED_QCOM",3b,7a,7c,0b));
	outFields->push(HX_("RENDER_DIRECT_TO_FRAMEBUFFER_QCOM",19,e7,dd,4e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo QCOM_binning_control_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(QCOM_binning_control_obj,BINNING_CONTROL_HINT_QCOM),HX_("BINNING_CONTROL_HINT_QCOM",82,b3,04,f7)},
	{::hx::fsInt,(int)offsetof(QCOM_binning_control_obj,CPU_OPTIMIZED_QCOM),HX_("CPU_OPTIMIZED_QCOM",bf,be,ec,c1)},
	{::hx::fsInt,(int)offsetof(QCOM_binning_control_obj,GPU_OPTIMIZED_QCOM),HX_("GPU_OPTIMIZED_QCOM",3b,7a,7c,0b)},
	{::hx::fsInt,(int)offsetof(QCOM_binning_control_obj,RENDER_DIRECT_TO_FRAMEBUFFER_QCOM),HX_("RENDER_DIRECT_TO_FRAMEBUFFER_QCOM",19,e7,dd,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *QCOM_binning_control_obj_sStaticStorageInfo = 0;
#endif

static ::String QCOM_binning_control_obj_sMemberFields[] = {
	HX_("BINNING_CONTROL_HINT_QCOM",82,b3,04,f7),
	HX_("CPU_OPTIMIZED_QCOM",bf,be,ec,c1),
	HX_("GPU_OPTIMIZED_QCOM",3b,7a,7c,0b),
	HX_("RENDER_DIRECT_TO_FRAMEBUFFER_QCOM",19,e7,dd,4e),
	::String(null()) };

::hx::Class QCOM_binning_control_obj::__mClass;

void QCOM_binning_control_obj::__register()
{
	QCOM_binning_control_obj _hx_dummy;
	QCOM_binning_control_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.QCOM_binning_control",ec,5f,90,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QCOM_binning_control_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QCOM_binning_control_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QCOM_binning_control_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QCOM_binning_control_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
