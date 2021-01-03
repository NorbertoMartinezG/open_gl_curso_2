#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L26_Pyramid : public Scene
{
public:
	L26_Pyramid();

	void draw();

private:
	void background();

	void camera();

	void drawAnimation();

	void drawPyramid();

	void drawTriangle();

};
//---------------------------------------------------------------------------


