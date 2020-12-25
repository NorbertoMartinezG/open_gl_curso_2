#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L18_Points : public Scene
{
public:

	L18_Points();

	void draw();

private:
	double a;
	double b;

	void background();

	void drawPoints();

	void drawRotate();

	void drawPoint();

};
//---------------------------------------------------------------------------

