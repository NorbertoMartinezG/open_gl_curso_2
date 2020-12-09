#include "Main_Glut.h"

//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
//#include <GL/gl.h>
#include <GL/glut.h>
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

void Main_Glut::display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0f, 0.0f, -40.0f);

	//scene.draw();

	glutSwapBuffers();
}

void Main_Glut::mouse(int button, int state, int x, int y)
{
	if ((button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN))
	{
		//scene.click();
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


