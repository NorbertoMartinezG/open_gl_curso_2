#pragma once
#ifndef L05_CLICK_H
#define L05_CLICK_H
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L05_Click : public Scene
{
private:
	double r;

public:

	L05_Click();

	void draw();

	void click();

	//L05_Click()
	//{
	//	r = 0;

	//}

	//void draw()
	//{
	//	glClearColor(r, 0.0, 1.0, 1.0);
	//}

	//void click()
	//{
	//	r = r + 0.1;
	//}

};
//---------------------------------------------------------------------------
#endif

