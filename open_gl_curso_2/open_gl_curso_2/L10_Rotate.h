#pragma once
#ifndef L10_ROTATE_H
#define L10_ROTATE_H
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L10_Rotate : public Scene
{
public:

	L10_Rotate();

	void draw();

private:

	void background();

	void drawRotate();

	void drawTriangle();

};
//---------------------------------------------------------------------------
#endif

