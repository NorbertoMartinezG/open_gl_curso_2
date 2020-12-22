#pragma once
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L14_While : public Scene
{

public:

	L14_While();

	void draw();

private:

	double a;
	double b;
	void background();
	void drawSquare();

	void drawRotate();

	void drawTriangle();

};

