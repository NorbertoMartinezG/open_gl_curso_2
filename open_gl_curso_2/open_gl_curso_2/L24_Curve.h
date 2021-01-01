#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"

//---------------------------------------------------------------------------
#include <math.h>
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
class L24_Curve : public Scene
{

public:
	L24_Curve();

	void draw();

	void click();

private:

	int count;

	void background();

	void drawPolygon();
};
//---------------------------------------------------------------------------

