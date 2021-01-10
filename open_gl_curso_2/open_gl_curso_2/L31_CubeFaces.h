#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L31_CubeFaces : public Scene
{
public:
	L31_CubeFaces();

	void draw();

private:

	void background();

	void camera();

	void drawCube();

	void drawSquare();

};
//---------------------------------------------------------------------------

