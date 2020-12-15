#pragma once
#ifndef L08_PROCEDURES_H
#define L08_PROCEDURES_H
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L08_Procedures : public Scene
{
public:
    L08_Procedures();

    void draw();

private:

    void background();

    void drawTriangle();
};
//---------------------------------------------------------------------------
#endif