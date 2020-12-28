#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L20_LocalVar : public Scene
{
public:

	L20_LocalVar();

	void draw();

private:

	void background();

	void drawSquare();

};
//---------------------------------------------------------------------------

