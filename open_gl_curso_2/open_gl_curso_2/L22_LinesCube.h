#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
class L22_LinesCube : public Scene
{
public:
	L22_LinesCube();

	void draw();

	void click();

private:
	int count;
	double a;

	void background();

	void drawCube();

	void drawRotate();

	void drawSquare();

};
//---------------------------------------------------------------------------
