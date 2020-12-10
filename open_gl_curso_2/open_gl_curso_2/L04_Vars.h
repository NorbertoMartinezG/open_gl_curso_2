#pragma once

#ifndef L04_VARS_H
#define L04_VARS_H
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L04_Vars : public Scene
{
private:
	double r, g, b;

public:
	L04_Vars();


	void draw();
	
};
//---------------------------------------------------------------------------
#endif