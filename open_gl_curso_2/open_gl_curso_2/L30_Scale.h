#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L30_Scale : public Scene
{
public:
	L30_Scale();

	void draw();

private:
	void background();

	void camera();

	void drawPyramids();

	void drawPyramid();

	void drawTriangle();

};
//---------------------------------------------------------------------------

