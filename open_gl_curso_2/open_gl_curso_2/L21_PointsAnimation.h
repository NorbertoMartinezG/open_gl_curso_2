#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L21_PointsAnimation : public Scene
{
public:

	L21_PointsAnimation();

	void draw();

private:
	double a;

	void background();

	void drawAnimation();

	void drawPoints();

	void drawRotate();

	void drawPoint();

};
//---------------------------------------------------------------------------

