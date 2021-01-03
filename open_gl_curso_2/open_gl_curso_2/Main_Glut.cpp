#include "Main_Glut.h"

//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
//#include <GL/gl.h>
//#include <GL/glut.h>
//#include "Scene.h"
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------

//#include "L02_Environment.h"
//L02_Environment scene;

//#include "L03_Background.h"
//L03_Background scene;

//#include "L04_Vars.h"
//          L04_Vars scene;

//#include "L05_Click.h" // cambia el color de la ventana aumentando el valor de r en RGBA 
 //         L05_Click scene;

//#include "L06_IF.h" // cambia el color de la ventana aumentando el valor de r en RGBA y cuando llega a 1.0 r vuelve a 0
//L06_IF scene;

//#include "L07_Triangle.h"
//          L07_Triangle scene;

//#include "L08_Procedures.h"
//          L08_Procedures scene;

//#include "L09_Color.h"
//         L09_Color scene;

//#include "L10_Rotate.h"
//          L10_Rotate scene;

//#include "L11_RotateClick.h"
//         L11_RotateClick scene;

//#include "L12_Animation.h"
//          L12_Animation scene;

//#include "L13_Square.h"
//          L13_Square scene;

//#include "L14_While.h"
//          L14_While scene;

//#include "L15_Polygon.h"
//          L15_Polygon scene;

//#include "L16_PolygonClick.h"
//          L16_PolygonClick scene;

//#include "L17_PolygonAnimation.h"
//          L17_PolygonAnimation scene;

//#include "L18_Points.h"
//          L18_Points scene;

//#include "L19_Lines.h"
//          L19_Lines scene;

//#include "L20_LocalVar.h"
//          L20_LocalVar scene;

//#include "L21_PointsAnimation.h"
//          L21_PointsAnimation scene;

//#include "L22_LinesCube.h"
//         L22_LinesCube scene;

//#include "L23_Camera.h"
//          L23_Camera scene;

//#include "L24_Curve.h"
//          L24_Curve scene;

//#include "L25_Circles.h"
//          L25_Circles scene;

#include "L26_Pyramid.h"
          L26_Pyramid scene;

//#include "L27_LoopCounter.h"
//          L27_LoopCounter scene;

//#include "L28_Translate.h"
//          L28_Translate scene;

//#include "L29_RotateTranslate.h"
//          L29_RotateTranslate scene;

//#include "L30_Scale.h"
//          L30_Scale scene;

//#include "L31_CubeFaces.h"
//          L31_CubeFaces scene;

//#include "L32_CubeAnimation.h"
//          L32_CubeAnimation scene;


//----------------------------------------------------
int Main_Glut::main_WinPosX = 820;
int Main_Glut::main_WinPosY = 100;
int Main_Glut::main_WinWidth = 450;
int Main_Glut::main_WinHeigt = 350;

Main_Glut::Main_Glut()
{

	iniGlut();
	iniGL();
	glutMainLoop(); // funcion de la libreria
}



void Main_Glut::iniGL()
{
	glClearColor(0.0f, 0.0f, 0.2f, 1.0f);
	glClearDepth(1.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DITHER);
	glFrontFace(GL_CCW);
	glCullFace(GL_BACK);
	glDisable(GL_CULL_FACE);
	glLineWidth(2);
	glColor3f(0.8, 0.8, 1);

	//scene.iniGL();
}

void Main_Glut::display() // cada frame se va dibujando
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0f, 0.0f, -40.0f);

	scene.draw(); // color	//glClearColor(1.0, 0.0, 1.0, 1.0); funcion en L03_Background heredada de Scene

	glutSwapBuffers();
}

void Main_Glut::mouse(int button, int state, int x, int y)
{
	if ((button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN))
	{
		//scene.click(); // para leccion 16 y 22, 23
		
	}

}

void Main_Glut::reshape(int width, int height)
{
	if (height == 0 || height == 1)
		return;

	float aspect = (float)width / height;

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(45, aspect, 0.1f, 100.0f);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void Main_Glut::timer(int val)
{
	display();
	glutTimerFunc(12, timer, 1);
}



void Main_Glut::iniGlut()
{
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | // profundidad y doble bufer
		GLUT_ALPHA | GLUT_DEPTH);
	glutInitWindowSize(main_WinWidth, main_WinHeigt); // tamaño ventana
	glutInitWindowPosition(main_WinPosX, main_WinPosY); // posicion dentro de pantalla de computadora

	glutCreateWindow("Programación 3D Para Newbies"); // creacion de ventana
	glutDisplayFunc(display); // funcion para dibujar
	glutReshapeFunc(reshape); // INVESTIGAR

	//glutTimerFunc         ( 12, timer, 1 );
	//glutIdleFunc          ( NULL  );
	glutIdleFunc(display);

	glutMouseFunc(mouse);
}


//---------------------------------------------------------------


