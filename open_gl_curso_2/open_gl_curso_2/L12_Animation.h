#pragma once
/* # PRAGMA ONCE
* Se utiliza para reemplazar el siguiente código de preprocesador:

#ifndef _MYHEADER_H_ 
#define _MYHEADER_H_ 
... 
#endif 
Una buena convención es la adición tanto para apoyar los compiladores de legado (que es aunque rara):

#pragma once 
#ifndef _MYHEADER_H_ 
#define _MYHEADER_H_ 
... 
#endif 
Así que si #pragma vez falla el viejo método todavía funcionará.
*/
#ifndef L12_ANIMATION_H
#define L12_ANIMATION_H
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------

class L12_Animation : public Scene
{
public:

	L12_Animation();

	void draw();

private:

	void background();

	void drawRotate();

	void drawTriangle();

};
//---------------------------------------------------------------------------
#endif

