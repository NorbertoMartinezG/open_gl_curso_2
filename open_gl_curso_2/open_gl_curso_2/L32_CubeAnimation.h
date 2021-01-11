#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L32_CubeAnimation : public Scene
{
private:


public:
    L32_CubeAnimation();

    void draw();

private:

    double Z;

    void background();

    void camera();

    void drawAnimation();

    void drawCube();

    void drawSquare();

};
//---------------------------------------------------------------------------

