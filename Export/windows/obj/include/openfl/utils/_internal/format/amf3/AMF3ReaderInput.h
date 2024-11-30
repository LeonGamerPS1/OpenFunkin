// Generated by Haxe 4.3.6
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3ReaderInput
#define INCLUDED_openfl_utils__internal_format_amf3_AMF3ReaderInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf3,AMF3Reader)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf3,AMF3ReaderInput)

namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf3{


class HXCPP_CLASS_ATTRIBUTES AMF3ReaderInput_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AMF3ReaderInput_obj OBJ_;
		AMF3ReaderInput_obj();

	public:
		enum { _hx_ClassId = 0x1091aff3 };

		void __construct( ::openfl::utils::_internal::format::amf3::AMF3Reader r);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils._internal.format.amf3.AMF3ReaderInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.utils._internal.format.amf3.AMF3ReaderInput"); }
		static ::hx::ObjectPtr< AMF3ReaderInput_obj > __new( ::openfl::utils::_internal::format::amf3::AMF3Reader r);
		static ::hx::ObjectPtr< AMF3ReaderInput_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::utils::_internal::format::amf3::AMF3Reader r);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AMF3ReaderInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("AMF3ReaderInput",2e,ff,89,45); }

		int objectEncoding;
		 ::haxe::io::Input i;
		 ::openfl::utils::_internal::format::amf3::AMF3Reader r;
		bool readBoolean();
		::Dynamic readBoolean_dyn();

		int readByte();
		::Dynamic readByte_dyn();

		void readBytes( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  offset,::hx::Null< int >  length);
		::Dynamic readBytes_dyn();

		Float readDouble();
		::Dynamic readDouble_dyn();

		Float readFloat();
		::Dynamic readFloat_dyn();

		int readInt();
		::Dynamic readInt_dyn();

		::String readMultiByte(int length,::String charSet);
		::Dynamic readMultiByte_dyn();

		 ::Dynamic readObject();
		::Dynamic readObject_dyn();

		int readShort();
		::Dynamic readShort_dyn();

		int readUnsignedByte();
		::Dynamic readUnsignedByte_dyn();

		int readUnsignedInt();
		::Dynamic readUnsignedInt_dyn();

		int readUnsignedShort();
		::Dynamic readUnsignedShort_dyn();

		::String readUTF();
		::Dynamic readUTF_dyn();

		::String readUTFBytes(int length);
		::Dynamic readUTFBytes_dyn();

		int get_bytesAvailable();
		::Dynamic get_bytesAvailable_dyn();

		 ::Dynamic get_endian();
		::Dynamic get_endian_dyn();

		 ::Dynamic set_endian( ::Dynamic value);
		::Dynamic set_endian_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf3

#endif /* INCLUDED_openfl_utils__internal_format_amf3_AMF3ReaderInput */ 
