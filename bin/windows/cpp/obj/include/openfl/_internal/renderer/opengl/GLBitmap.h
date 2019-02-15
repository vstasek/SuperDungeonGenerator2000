#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#define INCLUDED_openfl__internal_renderer_opengl_GLBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,opengl,GLBitmap)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,PingPongTexture)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,BlendMode)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GLBitmap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLBitmap_obj OBJ_;
		GLBitmap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.opengl.GLBitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLBitmap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLBitmap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLBitmap","\xf4","\x6b","\xfd","\x5a"); }

		static void __boot();
		static cpp::ArrayBase fbData;
		static Void render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic render_dyn();

		static ::openfl::_internal::renderer::opengl::utils::PingPongTexture pushFramebuffer( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::_internal::renderer::opengl::utils::PingPongTexture texture,::openfl::geom::Rectangle viewPort,bool smoothing,Dynamic transparent,Dynamic clearBuffer,Dynamic powerOfTwo);
		static Dynamic pushFramebuffer_dyn();

		static Void drawBitmapDrawable( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::display::BitmapData target,::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect);
		static Dynamic drawBitmapDrawable_dyn();

		static Void popFramebuffer( ::openfl::_internal::renderer::RenderSession renderSession,::lime::graphics::Image image);
		static Dynamic popFramebuffer_dyn();

		static Void flipMatrix( ::openfl::geom::Matrix m,Float height);
		static Dynamic flipMatrix_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl

#endif /* INCLUDED_openfl__internal_renderer_opengl_GLBitmap */ 
