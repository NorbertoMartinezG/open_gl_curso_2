#pragma once
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L13_Square : public Scene
{
public:

	L13_Square();

	void draw();


private:
	double a;

	void background();

	void drawSquare();

	void drawRotate();

	void drawTriangle();

};

