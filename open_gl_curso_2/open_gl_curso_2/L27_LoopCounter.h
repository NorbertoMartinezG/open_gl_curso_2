#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L27_LoopCounter : public Scene
{
public:
	L27_LoopCounter();

	void draw();

private:
	void background();

	void camera();

	void drawAnimation();

	void drawPyramid();

	void drawTriangle();

};
//---------------------------------------------------------------------------

