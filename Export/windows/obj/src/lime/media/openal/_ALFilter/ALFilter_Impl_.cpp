// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_lime_media_openal__ALFilter_ALFilter_Impl_
#include <lime/media/openal/_ALFilter/ALFilter_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_669fad39a85a1300_9__new,"lime.media.openal._ALFilter.ALFilter_Impl_","_new",0x0c9e894a,"lime.media.openal._ALFilter.ALFilter_Impl_._new","lime/media/openal/ALFilter.hx",9,0xe4e47d86)
namespace lime{
namespace media{
namespace openal{
namespace _ALFilter{

void ALFilter_Impl__obj::__construct() { }

Dynamic ALFilter_Impl__obj::__CreateEmpty() { return new ALFilter_Impl__obj; }

void *ALFilter_Impl__obj::_hx_vtable = 0;

Dynamic ALFilter_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ALFilter_Impl__obj > _hx_result = new ALFilter_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ALFilter_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4b9e9ee1;
}

 ::Dynamic ALFilter_Impl__obj::_new( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_669fad39a85a1300_9__new)
HXDLIN(   9)		return handle;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALFilter_Impl__obj,_new,return )


ALFilter_Impl__obj::ALFilter_Impl__obj()
{
}

bool ALFilter_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ALFilter_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ALFilter_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class ALFilter_Impl__obj::__mClass;

static ::String ALFilter_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void ALFilter_Impl__obj::__register()
{
	ALFilter_Impl__obj _hx_dummy;
	ALFilter_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.openal._ALFilter.ALFilter_Impl_",25,75,7b,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALFilter_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ALFilter_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ALFilter_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALFilter_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALFilter_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
} // end namespace openal
} // end namespace _ALFilter
