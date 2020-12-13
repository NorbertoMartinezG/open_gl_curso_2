#pragma once
#ifndef L06_IF_H
#define L06_IF_H
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L06_IF : public Scene
{
private:
	double r;


public:

	L06_IF() // constructor
	{
		r = 0;
	}

	void draw()
	{
		glClearColor(r, 0.0, 0.0, 1.0);

	}

	void click()
	{
		r = r + 0.1;
		
		if (r>1)
		{
			r = 0;
		}

	}

};
//---------------------------------------------------------------------------
#endif