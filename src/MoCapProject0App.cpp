#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/video/tracking.hpp>
#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "CinderOpenCV.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class MoCapProject1App : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void MoCapProject1App::setup()
{
}

void MoCapProject1App::mouseDown( MouseEvent event )
{
}

void MoCapProject1App::update()
{
}

void MoCapProject1App::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( MoCapProject1App, RendererGl )
