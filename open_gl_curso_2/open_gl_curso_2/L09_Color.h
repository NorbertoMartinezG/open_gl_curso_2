#pragma once

#ifndef L09_COLOR_H
#define L09_COLOR_H
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L09_Color : public Scene
{
public:

    L09_Color();

    void draw();

private:

    void background();

    void drawTriangle();

    void drawTriangles();

};
//---------------------------------------------------------------------------
#endif
