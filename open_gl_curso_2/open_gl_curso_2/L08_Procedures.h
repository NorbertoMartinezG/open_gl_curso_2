#pragma once
#ifndef L08_PROCEDURES_H
#define L08_PROCEDURES_H
//---------------------------------------------------------------------------

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