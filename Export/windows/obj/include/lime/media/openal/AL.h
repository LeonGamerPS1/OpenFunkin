// Generated by Haxe 4.3.6
#ifndef INCLUDED_lime_media_openal_AL
#define INCLUDED_lime_media_openal_AL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,media,openal,AL)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace media{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES AL_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AL_obj OBJ_;
		AL_obj();

	public:
		enum { _hx_ClassId = 0x2695cb8f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.media.openal.AL")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.media.openal.AL"); }

		inline static ::hx::ObjectPtr< AL_obj > __new() {
			::hx::ObjectPtr< AL_obj > __this = new AL_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AL_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AL_obj *__this = (AL_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AL_obj), false, "lime.media.openal.AL"));
			*(void **)__this = AL_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AL_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AL",eb,38,00,00); }

		static void __boot();
		static int NONE;
		static int FALSE;
		static int TRUE;
		static int SOURCE_RELATIVE;
		static int CONE_INNER_ANGLE;
		static int CONE_OUTER_ANGLE;
		static int PITCH;
		static int POSITION;
		static int DIRECTION;
		static int VELOCITY;
		static int LOOPING;
		static int BUFFER;
		static int GAIN;
		static int MIN_GAIN;
		static int MAX_GAIN;
		static int ORIENTATION;
		static int SOURCE_STATE;
		static int INITIAL;
		static int PLAYING;
		static int PAUSED;
		static int STOPPED;
		static int BUFFERS_QUEUED;
		static int BUFFERS_PROCESSED;
		static int REFERENCE_DISTANCE;
		static int ROLLOFF_FACTOR;
		static int CONE_OUTER_GAIN;
		static int MAX_DISTANCE;
		static int SEC_OFFSET;
		static int SAMPLE_OFFSET;
		static int BYTE_OFFSET;
		static int SOURCE_TYPE;
		static int STATIC;
		static int STREAMING;
		static int UNDETERMINED;
		static int FORMAT_MONO8;
		static int FORMAT_MONO16;
		static int FORMAT_STEREO8;
		static int FORMAT_STEREO16;
		static int FREQUENCY;
		static int BITS;
		static int CHANNELS;
		static int SIZE;
		static int NO_ERROR;
		static int INVALID_NAME;
		static int INVALID_ENUM;
		static int INVALID_VALUE;
		static int INVALID_OPERATION;
		static int OUT_OF_MEMORY;
		static int VENDOR;
		static int VERSION;
		static int RENDERER;
		static int EXTENSIONS;
		static int DOPPLER_FACTOR;
		static int SPEED_OF_SOUND;
		static int DOPPLER_VELOCITY;
		static int DISTANCE_MODEL;
		static int INVERSE_DISTANCE;
		static int INVERSE_DISTANCE_CLAMPED;
		static int LINEAR_DISTANCE;
		static int LINEAR_DISTANCE_CLAMPED;
		static int EXPONENT_DISTANCE;
		static int EXPONENT_DISTANCE_CLAMPED;
		static int METERS_PER_UNIT;
		static int DIRECT_FILTER;
		static int AUXILIARY_SEND_FILTER;
		static int AIR_ABSORPTION_FACTOR;
		static int ROOM_ROLLOFF_FACTOR;
		static int CONE_OUTER_GAINHF;
		static int DIRECT_FILTER_GAINHF_AUTO;
		static int AUXILIARY_SEND_FILTER_GAIN_AUTO;
		static int AUXILIARY_SEND_FILTER_GAINHF_AUTO;
		static int REVERB_DENSITY;
		static int REVERB_DIFFUSION;
		static int REVERB_GAIN;
		static int REVERB_GAINHF;
		static int REVERB_DECAY_TIME;
		static int REVERB_DECAY_HFRATIO;
		static int REVERB_REFLECTIONS_GAIN;
		static int REVERB_REFLECTIONS_DELAY;
		static int REVERB_LATE_REVERB_GAIN;
		static int REVERB_LATE_REVERB_DELAY;
		static int REVERB_AIR_ABSORPTION_GAINHF;
		static int REVERB_ROOM_ROLLOFF_FACTOR;
		static int REVERB_DECAY_HFLIMIT;
		static int EAXREVERB_DENSITY;
		static int EAXREVERB_DIFFUSION;
		static int EAXREVERB_GAIN;
		static int EAXREVERB_GAINHF;
		static int EAXREVERB_GAINLF;
		static int EAXREVERB_DECAY_TIME;
		static int EAXREVERB_DECAY_HFRATIO;
		static int EAXREVERB_DECAY_LFRATIO;
		static int EAXREVERB_REFLECTIONS_GAIN;
		static int EAXREVERB_REFLECTIONS_DELAY;
		static int EAXREVERB_REFLECTIONS_PAN;
		static int EAXREVERB_LATE_REVERB_GAIN;
		static int EAXREVERB_LATE_REVERB_DELAY;
		static int EAXREVERB_LATE_REVERB_PAN;
		static int EAXREVERB_ECHO_TIME;
		static int EAXREVERB_ECHO_DEPTH;
		static int EAXREVERB_MODULATION_TIME;
		static int EAXREVERB_MODULATION_DEPTH;
		static int EAXREVERB_AIR_ABSORPTION_GAINHF;
		static int EAXREVERB_HFREFERENCE;
		static int EAXREVERB_LFREFERENCE;
		static int EAXREVERB_ROOM_ROLLOFF_FACTOR;
		static int EAXREVERB_DECAY_HFLIMIT;
		static int CHORUS_WAVEFORM;
		static int CHORUS_PHASE;
		static int CHORUS_RATE;
		static int CHORUS_DEPTH;
		static int CHORUS_FEEDBACK;
		static int CHORUS_DELAY;
		static int DISTORTION_EDGE;
		static int DISTORTION_GAIN;
		static int DISTORTION_LOWPASS_CUTOFF;
		static int DISTORTION_EQCENTER;
		static int DISTORTION_EQBANDWIDTH;
		static int ECHO_DELAY;
		static int ECHO_LRDELAY;
		static int ECHO_DAMPING;
		static int ECHO_FEEDBACK;
		static int ECHO_SPREAD;
		static int FLANGER_WAVEFORM;
		static int FLANGER_PHASE;
		static int FLANGER_RATE;
		static int FLANGER_DEPTH;
		static int FLANGER_FEEDBACK;
		static int FLANGER_DELAY;
		static int FREQUENCY_SHIFTER_FREQUENCY;
		static int FREQUENCY_SHIFTER_LEFT_DIRECTION;
		static int FREQUENCY_SHIFTER_RIGHT_DIRECTION;
		static int VOCAL_MORPHER_PHONEMEA;
		static int VOCAL_MORPHER_PHONEMEA_COARSE_TUNING;
		static int VOCAL_MORPHER_PHONEMEB;
		static int VOCAL_MORPHER_PHONEMEB_COARSE_TUNING;
		static int VOCAL_MORPHER_WAVEFORM;
		static int VOCAL_MORPHER_RATE;
		static int PITCH_SHIFTER_COARSE_TUNE;
		static int PITCH_SHIFTER_FINE_TUNE;
		static int RING_MODULATOR_FREQUENCY;
		static int RING_MODULATOR_HIGHPASS_CUTOFF;
		static int RING_MODULATOR_WAVEFORM;
		static int AUTOWAH_ATTACK_TIME;
		static int AUTOWAH_RELEASE_TIME;
		static int AUTOWAH_RESONANCE;
		static int AUTOWAH_PEAK_GAIN;
		static int COMPRESSOR_ONOFF;
		static int EQUALIZER_LOW_GAIN;
		static int EQUALIZER_LOW_CUTOFF;
		static int EQUALIZER_MID1_GAIN;
		static int EQUALIZER_MID1_CENTER;
		static int EQUALIZER_MID1_WIDTH;
		static int EQUALIZER_MID2_GAIN;
		static int EQUALIZER_MID2_CENTER;
		static int EQUALIZER_MID2_WIDTH;
		static int EQUALIZER_HIGH_GAIN;
		static int EQUALIZER_HIGH_CUTOFF;
		static int EFFECT_FIRST_PARAMETER;
		static int EFFECT_LAST_PARAMETER;
		static int EFFECT_TYPE;
		static int EFFECT_NULL;
		static int EFFECT_EAXREVERB;
		static int EFFECT_REVERB;
		static int EFFECT_CHORUS;
		static int EFFECT_DISTORTION;
		static int EFFECT_ECHO;
		static int EFFECT_FLANGER;
		static int EFFECT_FREQUENCY_SHIFTER;
		static int EFFECT_VOCAL_MORPHER;
		static int EFFECT_PITCH_SHIFTER;
		static int EFFECT_RING_MODULATOR;
		static int FFECT_AUTOWAH;
		static int EFFECT_COMPRESSOR;
		static int EFFECT_EQUALIZER;
		static int EFFECTSLOT_EFFECT;
		static int EFFECTSLOT_GAIN;
		static int EFFECTSLOT_AUXILIARY_SEND_AUTO;
		static int LOWPASS_GAIN;
		static int LOWPASS_GAINHF;
		static int HIGHPASS_GAIN;
		static int HIGHPASS_GAINLF;
		static int BANDPASS_GAIN;
		static int BANDPASS_GAINLF;
		static int BANDPASS_GAINHF;
		static int FILTER_FIRST_PARAMETER;
		static int FILTER_LAST_PARAMETER;
		static int FILTER_TYPE;
		static int FILTER_NULL;
		static int FILTER_LOWPASS;
		static int FILTER_HIGHPASS;
		static int FILTER_BANDPASS;
		static void removeDirectFilter( ::Dynamic source);
		static ::Dynamic removeDirectFilter_dyn();

		static void removeSend( ::Dynamic source,int index);
		static ::Dynamic removeSend_dyn();

		static void auxf( ::Dynamic aux,int param,Float value);
		static ::Dynamic auxf_dyn();

		static void auxfv( ::Dynamic aux,int param,::Array< Float > values);
		static ::Dynamic auxfv_dyn();

		static void auxi( ::Dynamic aux,int param, ::Dynamic value);
		static ::Dynamic auxi_dyn();

		static void auxiv( ::Dynamic aux,int param,::Array< int > values);
		static ::Dynamic auxiv_dyn();

		static void bufferData( ::Dynamic buffer,int format, ::lime::utils::ArrayBufferView data,int size,int freq);
		static ::Dynamic bufferData_dyn();

		static void buffer3f( ::Dynamic buffer,int param,Float value1,Float value2,Float value3);
		static ::Dynamic buffer3f_dyn();

		static void buffer3i( ::Dynamic buffer,int param,int value1,int value2,int value3);
		static ::Dynamic buffer3i_dyn();

		static void bufferf( ::Dynamic buffer,int param,Float value);
		static ::Dynamic bufferf_dyn();

		static void bufferfv( ::Dynamic buffer,int param,::Array< Float > values);
		static ::Dynamic bufferfv_dyn();

		static void bufferi( ::Dynamic buffer,int param,int value);
		static ::Dynamic bufferi_dyn();

		static void bufferiv( ::Dynamic buffer,int param,::Array< int > values);
		static ::Dynamic bufferiv_dyn();

		static  ::Dynamic createAux();
		static ::Dynamic createAux_dyn();

		static  ::Dynamic createBuffer();
		static ::Dynamic createBuffer_dyn();

		static  ::Dynamic createEffect();
		static ::Dynamic createEffect_dyn();

		static  ::Dynamic createFilter();
		static ::Dynamic createFilter_dyn();

		static  ::Dynamic createSource();
		static ::Dynamic createSource_dyn();

		static void deleteBuffer( ::Dynamic buffer);
		static ::Dynamic deleteBuffer_dyn();

		static void deleteBuffers(::cpp::VirtualArray buffers);
		static ::Dynamic deleteBuffers_dyn();

		static void deleteSource( ::Dynamic source);
		static ::Dynamic deleteSource_dyn();

		static void deleteSources(::cpp::VirtualArray sources);
		static ::Dynamic deleteSources_dyn();

		static void disable(int capability);
		static ::Dynamic disable_dyn();

		static void distanceModel(int distanceModel);
		static ::Dynamic distanceModel_dyn();

		static void dopplerFactor(Float value);
		static ::Dynamic dopplerFactor_dyn();

		static void dopplerVelocity(Float value);
		static ::Dynamic dopplerVelocity_dyn();

		static void effectf( ::Dynamic effect,int param,Float value);
		static ::Dynamic effectf_dyn();

		static void effectfv( ::Dynamic effect,int param,::Array< Float > values);
		static ::Dynamic effectfv_dyn();

		static void effecti( ::Dynamic effect,int param,int value);
		static ::Dynamic effecti_dyn();

		static void effectiv( ::Dynamic effect,int param,::Array< int > values);
		static ::Dynamic effectiv_dyn();

		static void enable(int capability);
		static ::Dynamic enable_dyn();

		static  ::Dynamic genSource();
		static ::Dynamic genSource_dyn();

		static ::cpp::VirtualArray genSources(int n);
		static ::Dynamic genSources_dyn();

		static  ::Dynamic genBuffer();
		static ::Dynamic genBuffer_dyn();

		static ::cpp::VirtualArray genBuffers(int n);
		static ::Dynamic genBuffers_dyn();

		static bool getBoolean(int param);
		static ::Dynamic getBoolean_dyn();

		static ::Array< bool > getBooleanv(int param,::hx::Null< int >  count);
		static ::Dynamic getBooleanv_dyn();

		static ::Array< Float > getBuffer3f( ::Dynamic buffer,int param);
		static ::Dynamic getBuffer3f_dyn();

		static ::Array< int > getBuffer3i( ::Dynamic buffer,int param);
		static ::Dynamic getBuffer3i_dyn();

		static Float getBufferf( ::Dynamic buffer,int param);
		static ::Dynamic getBufferf_dyn();

		static ::Array< Float > getBufferfv( ::Dynamic buffer,int param,::hx::Null< int >  count);
		static ::Dynamic getBufferfv_dyn();

		static int getBufferi( ::Dynamic buffer,int param);
		static ::Dynamic getBufferi_dyn();

		static ::Array< int > getBufferiv( ::Dynamic buffer,int param,::hx::Null< int >  count);
		static ::Dynamic getBufferiv_dyn();

		static Float getDouble(int param);
		static ::Dynamic getDouble_dyn();

		static ::Array< Float > getDoublev(int param,::hx::Null< int >  count);
		static ::Dynamic getDoublev_dyn();

		static int getEnumValue(::String ename);
		static ::Dynamic getEnumValue_dyn();

		static int getError();
		static ::Dynamic getError_dyn();

		static ::String getErrorString();
		static ::Dynamic getErrorString_dyn();

		static int getFilteri( ::Dynamic filter,int param);
		static ::Dynamic getFilteri_dyn();

		static Float getFloat(int param);
		static ::Dynamic getFloat_dyn();

		static ::Array< Float > getFloatv(int param,::hx::Null< int >  count);
		static ::Dynamic getFloatv_dyn();

		static int getInteger(int param);
		static ::Dynamic getInteger_dyn();

		static ::Array< int > getIntegerv(int param,::hx::Null< int >  count);
		static ::Dynamic getIntegerv_dyn();

		static ::Array< Float > getListener3f(int param);
		static ::Dynamic getListener3f_dyn();

		static ::Array< int > getListener3i(int param);
		static ::Dynamic getListener3i_dyn();

		static Float getListenerf(int param);
		static ::Dynamic getListenerf_dyn();

		static ::Array< Float > getListenerfv(int param,::hx::Null< int >  count);
		static ::Dynamic getListenerfv_dyn();

		static int getListeneri(int param);
		static ::Dynamic getListeneri_dyn();

		static ::Array< int > getListeneriv(int param,::hx::Null< int >  count);
		static ::Dynamic getListeneriv_dyn();

		static  ::Dynamic getParameter(int param);
		static ::Dynamic getParameter_dyn();

		static  ::Dynamic getProcAddress(::String fname);
		static ::Dynamic getProcAddress_dyn();

		static ::Array< Float > getSource3f( ::Dynamic source,int param);
		static ::Dynamic getSource3f_dyn();

		static Float getSourcef( ::Dynamic source,int param);
		static ::Dynamic getSourcef_dyn();

		static ::Array< int > getSource3i( ::Dynamic source,int param);
		static ::Dynamic getSource3i_dyn();

		static ::Array< Float > getSourcefv( ::Dynamic source,int param,::hx::Null< int >  count);
		static ::Dynamic getSourcefv_dyn();

		static  ::Dynamic getSourcei( ::Dynamic source,int param);
		static ::Dynamic getSourcei_dyn();

		static ::Array< int > getSourceiv( ::Dynamic source,int param,::hx::Null< int >  count);
		static ::Dynamic getSourceiv_dyn();

		static ::String getString(int param);
		static ::Dynamic getString_dyn();

		static bool isBuffer( ::Dynamic buffer);
		static ::Dynamic isBuffer_dyn();

		static bool isEnabled(int capability);
		static ::Dynamic isEnabled_dyn();

		static bool isExtensionPresent(::String extname);
		static ::Dynamic isExtensionPresent_dyn();

		static bool isAux( ::Dynamic aux);
		static ::Dynamic isAux_dyn();

		static bool isEffect( ::Dynamic effect);
		static ::Dynamic isEffect_dyn();

		static bool isFilter( ::Dynamic filter);
		static ::Dynamic isFilter_dyn();

		static bool isSource( ::Dynamic source);
		static ::Dynamic isSource_dyn();

		static void listener3f(int param,Float value1,Float value2,Float value3);
		static ::Dynamic listener3f_dyn();

		static void listener3i(int param,int value1,int value2,int value3);
		static ::Dynamic listener3i_dyn();

		static void listenerf(int param,Float value);
		static ::Dynamic listenerf_dyn();

		static void listenerfv(int param,::Array< Float > values);
		static ::Dynamic listenerfv_dyn();

		static void listeneri(int param,int value);
		static ::Dynamic listeneri_dyn();

		static void listeneriv(int param,::Array< int > values);
		static ::Dynamic listeneriv_dyn();

		static void source3f( ::Dynamic source,int param,Float value1,Float value2,Float value3);
		static ::Dynamic source3f_dyn();

		static void source3i( ::Dynamic source,int param, ::Dynamic value1,int value2,int value3);
		static ::Dynamic source3i_dyn();

		static void sourcef( ::Dynamic source,int param,Float value);
		static ::Dynamic sourcef_dyn();

		static void sourcefv( ::Dynamic source,int param,::Array< Float > values);
		static ::Dynamic sourcefv_dyn();

		static void sourcei( ::Dynamic source,int param, ::Dynamic value);
		static ::Dynamic sourcei_dyn();

		static void filteri( ::Dynamic filter,int param, ::Dynamic value);
		static ::Dynamic filteri_dyn();

		static void filterf( ::Dynamic filter,int param,Float value);
		static ::Dynamic filterf_dyn();

		static void sourceiv( ::Dynamic source,int param,::Array< int > values);
		static ::Dynamic sourceiv_dyn();

		static void sourcePlay( ::Dynamic source);
		static ::Dynamic sourcePlay_dyn();

		static void sourcePlayv(::cpp::VirtualArray sources);
		static ::Dynamic sourcePlayv_dyn();

		static void sourceStop( ::Dynamic source);
		static ::Dynamic sourceStop_dyn();

		static void sourceStopv(::cpp::VirtualArray sources);
		static ::Dynamic sourceStopv_dyn();

		static void sourceRewind( ::Dynamic source);
		static ::Dynamic sourceRewind_dyn();

		static void sourceRewindv(::cpp::VirtualArray sources);
		static ::Dynamic sourceRewindv_dyn();

		static void sourcePause( ::Dynamic source);
		static ::Dynamic sourcePause_dyn();

		static void sourcePausev(::cpp::VirtualArray sources);
		static ::Dynamic sourcePausev_dyn();

		static void sourceQueueBuffer( ::Dynamic source, ::Dynamic buffer);
		static ::Dynamic sourceQueueBuffer_dyn();

		static void sourceQueueBuffers( ::Dynamic source,int nb,::cpp::VirtualArray buffers);
		static ::Dynamic sourceQueueBuffers_dyn();

		static  ::Dynamic sourceUnqueueBuffer( ::Dynamic source);
		static ::Dynamic sourceUnqueueBuffer_dyn();

		static ::cpp::VirtualArray sourceUnqueueBuffers( ::Dynamic source,int nb);
		static ::Dynamic sourceUnqueueBuffers_dyn();

		static void speedOfSound(Float value);
		static ::Dynamic speedOfSound_dyn();

};

} // end namespace lime
} // end namespace media
} // end namespace openal

#endif /* INCLUDED_lime_media_openal_AL */ 
