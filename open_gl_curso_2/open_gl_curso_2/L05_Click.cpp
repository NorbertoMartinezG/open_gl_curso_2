#include "L05_Click.h"

L05_Click::L05_Click()
{
	r = 0;
}

void L05_Click::draw()
{
	glClearColor(r, 1.0, 0.0, 1.0);
}

void L05_Click::click()
{
	r = r + 0.1;
}


