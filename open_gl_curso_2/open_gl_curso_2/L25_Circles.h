#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
#include <math.h>
//---------------------------------------------------------------------------
class L25_Circles : public Scene
{
public:
	L25_Circles();

	void draw();

	void click();

private:

	int count;

	void background();

	void camera();

	void drawAnimation();

	void drawCircles();

	void drawCircle();

};
//---------------------------------------------------------------------------
