#pragma once
#ifndef L11_ROTATECLICK_H
#define L11_ROTATECLICK_H
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L11_RotateClick : public Scene
{
public:

	L11_RotateClick();

	void draw();

	void click();

private:
	double a;

	void background();

	void drawRotate();

	void drawTriangle();

};
//---------------------------------------------------------------------------
#endif


