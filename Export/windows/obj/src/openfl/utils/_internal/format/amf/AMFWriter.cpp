// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFValue
#include <openfl/utils/_internal/format/amf/AMFValue.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFWriter
#include <openfl/utils/_internal/format/amf/AMFWriter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_adc290752b7fad8f_35_new,"openfl.utils._internal.format.amf.AMFWriter","new",0xb85a9e01,"openfl.utils._internal.format.amf.AMFWriter.new","openfl/utils/_internal/format/amf/AMFWriter.hx",35,0x61a3372e)
HX_LOCAL_STACK_FRAME(_hx_pos_adc290752b7fad8f_41_write,"openfl.utils._internal.format.amf.AMFWriter","write",0xb1e7a4c0,"openfl.utils._internal.format.amf.AMFWriter.write","openfl/utils/_internal/format/amf/AMFWriter.hx",41,0x61a3372e)
namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf{

void AMFWriter_obj::__construct( ::haxe::io::Output o){
            	HX_STACKFRAME(&_hx_pos_adc290752b7fad8f_35_new)
HXLINE(  36)		this->o = o;
HXLINE(  37)		o->set_bigEndian(true);
            	}

Dynamic AMFWriter_obj::__CreateEmpty() { return new AMFWriter_obj; }

void *AMFWriter_obj::_hx_vtable = 0;

Dynamic AMFWriter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AMFWriter_obj > _hx_result = new AMFWriter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AMFWriter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6dd06129;
}

void AMFWriter_obj::write( ::openfl::utils::_internal::format::amf::AMFValue v){
            	HX_STACKFRAME(&_hx_pos_adc290752b7fad8f_41_write)
HXLINE(  42)		 ::haxe::io::Output o = this->o;
HXLINE(  43)		switch((int)(v->_hx_getIndex())){
            			case (int)0: {
HXLINE(  45)				Float n = v->_hx_getFloat(0);
HXDLIN(  45)				{
HXLINE(  46)					o->writeByte(0);
HXLINE(  47)					o->writeDouble(n);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  48)				bool b = v->_hx_getBool(0);
HXDLIN(  48)				{
HXLINE(  49)					o->writeByte(1);
HXLINE(  50)					int _hx_tmp;
HXDLIN(  50)					if (b) {
HXLINE(  50)						_hx_tmp = 1;
            					}
            					else {
HXLINE(  50)						_hx_tmp = 0;
            					}
HXDLIN(  50)					o->writeByte(_hx_tmp);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  51)				::String s = v->_hx_getString(0);
HXDLIN(  51)				{
HXLINE(  52)					if ((s.length <= 65535)) {
HXLINE(  54)						o->writeByte(2);
HXLINE(  55)						o->writeUInt16(s.length);
            					}
            					else {
HXLINE(  59)						o->writeByte(12);
HXLINE(  61)						o->writeInt32(s.length);
            					}
HXLINE(  66)					o->writeString(s,null());
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(  67)				 ::haxe::ds::StringMap h = v->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN(  67)				 ::Dynamic size = v->_hx_getObject(1);
HXDLIN(  67)				{
HXLINE(  68)					if (::hx::IsNull( size )) {
HXLINE(  68)						o->writeByte(3);
            					}
            					else {
HXLINE(  71)						o->writeByte(8);
HXLINE(  73)						o->writeInt32(( (int)(size) ));
            					}
HXLINE(  78)					{
HXLINE(  78)						 ::Dynamic f = h->keys();
HXDLIN(  78)						while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  78)							::String f1 = ( (::String)(f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  80)							o->writeUInt16(f1.length);
HXLINE(  81)							o->writeString(f1,null());
HXLINE(  82)							this->write(h->get(f1));
            						}
            					}
HXLINE(  84)					o->writeByte(0);
HXLINE(  85)					o->writeByte(0);
HXLINE(  86)					o->writeByte(9);
            				}
            			}
            			break;
            			case (int)4: {
HXLINE(  91)				 ::Date d = v->_hx_getObject(0).StaticCast<  ::Date >();
HXDLIN(  91)				{
HXLINE(  92)					o->writeByte(11);
HXLINE(  93)					o->writeDouble(d->getTime());
HXLINE(  94)					o->writeUInt16(0);
            				}
            			}
            			break;
            			case (int)5: {
HXLINE(  90)				o->writeByte(6);
            			}
            			break;
            			case (int)6: {
HXLINE(  88)				o->writeByte(5);
            			}
            			break;
            			case (int)7: {
HXLINE(  95)				::Array< ::Dynamic> a = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  95)				{
HXLINE(  96)					o->writeByte(10);
HXLINE(  98)					o->writeInt32(a->length);
HXLINE( 102)					{
HXLINE( 102)						int _g = 0;
HXDLIN( 102)						while((_g < a->length)){
HXLINE( 102)							 ::openfl::utils::_internal::format::amf::AMFValue f2 = a->__get(_g).StaticCast<  ::openfl::utils::_internal::format::amf::AMFValue >();
HXDLIN( 102)							_g = (_g + 1);
HXLINE( 103)							this->write(f2);
            						}
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMFWriter_obj,write,(void))


::hx::ObjectPtr< AMFWriter_obj > AMFWriter_obj::__new( ::haxe::io::Output o) {
	::hx::ObjectPtr< AMFWriter_obj > __this = new AMFWriter_obj();
	__this->__construct(o);
	return __this;
}

::hx::ObjectPtr< AMFWriter_obj > AMFWriter_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output o) {
	AMFWriter_obj *__this = (AMFWriter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AMFWriter_obj), true, "openfl.utils._internal.format.amf.AMFWriter"));
	*(void **)__this = AMFWriter_obj::_hx_vtable;
	__this->__construct(o);
	return __this;
}

AMFWriter_obj::AMFWriter_obj()
{
}

void AMFWriter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AMFWriter);
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_END_CLASS();
}

void AMFWriter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(o,"o");
}

::hx::Val AMFWriter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { return ::hx::Val( o ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return ::hx::Val( write_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AMFWriter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast<  ::haxe::io::Output >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMFWriter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("o",6f,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AMFWriter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Output */ ,(int)offsetof(AMFWriter_obj,o),HX_("o",6f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AMFWriter_obj_sStaticStorageInfo = 0;
#endif

static ::String AMFWriter_obj_sMemberFields[] = {
	HX_("o",6f,00,00,00),
	HX_("write",df,6c,59,d0),
	::String(null()) };

::hx::Class AMFWriter_obj::__mClass;

void AMFWriter_obj::__register()
{
	AMFWriter_obj _hx_dummy;
	AMFWriter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._internal.format.amf.AMFWriter",8f,89,59,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AMFWriter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AMFWriter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AMFWriter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AMFWriter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf