#pragma once
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L19_Lines : public Scene
{
public:
	L19_Lines();

	void draw();

private:

	void background();

	void drawSquare();

};
//---------------------------------------------------------------------------

