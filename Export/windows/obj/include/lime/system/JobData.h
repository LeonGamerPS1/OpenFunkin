// Generated by Haxe 4.3.6
#ifndef INCLUDED_lime_system_JobData
#define INCLUDED_lime_system_JobData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_hx_system,JobData)
HX_DECLARE_CLASS2(lime,_hx_system,WorkOutput)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES JobData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JobData_obj OBJ_;
		JobData_obj();

	public:
		enum { _hx_ClassId = 0x370dd0e3 };

		void __construct( ::Dynamic doWork, ::Dynamic state);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system.JobData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.system.JobData"); }
		static ::hx::ObjectPtr< JobData_obj > __new( ::Dynamic doWork, ::Dynamic state);
		static ::hx::ObjectPtr< JobData_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic doWork, ::Dynamic state);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JobData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JobData",a7,bc,52,01); }

		static void __boot();
		static int nextID;
		int id;
		 ::Dynamic doWork;
		Dynamic doWork_dyn() { return doWork;}
		 ::Dynamic state;
		Float duration;
		Float startTime;
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_JobData */ 