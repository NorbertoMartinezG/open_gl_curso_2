#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
class L23_Camera : public Scene
{
private:


public:
	L23_Camera();

	void draw();

	void click();

private:
	double anguloCam;
	double anguloCubo;

	void background();

	void camera();

	void drawAnimation();

	void drawCube();

	void drawRotate();

	void drawSquare();

};
//---------------------------------------------------------------------------

