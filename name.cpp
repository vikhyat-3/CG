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
void display()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	int x = -70, y = 30;
	vr_output(x,y);
	hr_output(x, y);
	dia_output(x, y);
	printf("HELLO");
	glFlush();
}

int main()
{
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutCreateWindow("name");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
}
