#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class MoCapProject0App : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void MoCapProject0App::setup()
{
}

void MoCapProject0App::mouseDown( MouseEvent event )
{
}

void MoCapProject0App::update()
{
}

void MoCapProject0App::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( MoCapProject0App, RendererGl )
