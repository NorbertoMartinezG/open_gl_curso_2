#include "L04_Vars.h"

L04_Vars::L04_Vars()
{
	r = 1.0;
	g = 0.0;
	b = 1.0;
}

void L04_Vars::draw()
{
	glClearColor(r, g, b, 1.0);
}
