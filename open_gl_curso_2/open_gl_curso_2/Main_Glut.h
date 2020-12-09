#pragma once
class Main_Glut
{
public:
	Main_Glut(); // constructor
	static void iniGL();
	static void iniGlut();
	static void display();
	static void mouse(int button, int state, int x, int y);
	static void reshape(int width, int height);
	static void timer(int val);


private:
	static int main_WinPosX;
	static int main_WinPosY;
	static int main_WinWidth;
	static int main_WinHeigt;


};