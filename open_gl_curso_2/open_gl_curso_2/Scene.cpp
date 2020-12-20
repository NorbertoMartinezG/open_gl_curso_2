#include "Scene.h"
#include "GL/glut.h"
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------

Scene::Scene()
{
}

double Scene::seconds()
{
	static clock_t t_inicio = clock();
	return (double)(clock() - t_inicio)/ CLOCKS_PER_SEC;
}

//void Scene::draw()
//{
//	glClearColor(1.0, 0.0, 1.0, 1.0); //	red	 green blue, 1.0 es igual a 100% de intensidad
//}

double seconds()
{
	return 0.0;
}
