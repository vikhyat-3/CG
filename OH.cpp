#include<glut.h>
#include<math.h>
#include <stdio.h>
void myInit()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100,100,-100,100);
	glMatrixMode(GL_MODELVIEW);
}
void vr_output(int x,int y) {
	glRasterPos2f(x, y);
	int len = 7;
	char str[] = "VIKHYAT";
	for (int i = 0; i < len; i++) {
		glRasterPos2f(x, y - i * 10);
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str[i]);
	}
}
void hr_output(int x, int y) {
	glRasterPos2f(x, y);
	int len = 7;
	char str[] = "VIKHYAT";
	for (int i = 0; i < len; i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str[i]);
	}
}
void dia_output(int x, int y) {
	glRasterPos2f(x, y);
	int len = 7;
	char str[] = "VIKHYAT";
	for (int i = 0; i < len; i++) {
		glRasterPos2f(x+i*7, y + i *7);
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str[i]);
	}
}
void setPixel(int x, int y) {

	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2f(x, y);
	glEnd();
	glFlush();
}
void eight_way(int x, int y) {
		setPixel(y, x);
		setPixel(-y, x);
		setPixel(-y, -x);
		setPixel(y, -x);
		setPixel(x, y);
		setPixel(x, -y);
		setPixel(-x,- y);
		setPixel(-x, y);
}
void disp() {
	printf("OK");
}
void myMouse(int button,int state ,int x,int y)
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	int r = 7;
	printf("OKdf");
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		glColor3f(1, 0, 0);
		int x, y;
		for (float i = 3; i <= r; i += 0.2) {
			for (int j = 0; j < 45; j++) {
				x = i * cos(j);
				y = i * sin(j);
				eight_way(x, y);
			}
		}
	}
}

int main()
{
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutCreateWindow("name");
	myInit();
	glutMouseFunc(myMouse);
	glutDisplayFunc(disp);
	glutMainLoop();
}
