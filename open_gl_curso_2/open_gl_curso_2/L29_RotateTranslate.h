#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L29_RotateTranslate : public Scene
{
public:
	L29_RotateTranslate();

	void draw();

private:
	void background();

	void camera();

	void drawPyramids();

	void drawPyramid();

	void drawTriangle();

};
//---------------------------------------------------------------------------

