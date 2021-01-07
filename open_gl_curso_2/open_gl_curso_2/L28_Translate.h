#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L28_Translate : public Scene
{
public:
	L28_Translate();

	void draw();

private:
	void background();

	void camera();

	void drawAnimation();

	void drawPyramids();

	void drawPyramid();

	void drawTriangle();

};
//---------------------------------------------------------------------------

