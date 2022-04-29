#include <glut.h>
void myinit() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,100,0,100);
	glMatrixMode(GL_MODELVIEW);
}
void dispLine() {
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0); 
	glBegin(GL_LINES);
	glVertex2f(10,10);
	glVertex2f(30,30);
	glEnd();
	glFlush();
}
void dispHouse() {
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON); 
	glVertex2f(30, 50);
	glVertex2f(45, 70);
	glVertex2f(60, 50);
	glVertex2f(60, 20);
	glVertex2f(30,20);
	glEnd();
	glColor3f(1, 1, 0.5);
	glBegin(GL_LINES);
	glVertex2f(30, 50);
	glVertex2f(60, 50);
	glEnd();
	glFlush();
}
void disp3DHouse() {
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(30, 50);
	glVertex2f(45, 70);
	glVertex2f(60, 50);
	glVertex2f(60, 20);
	glVertex2f(30, 20);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(45, 70);
	glVertex2f(75, 70);
	glVertex2f(90, 50);
	glVertex2f(90, 20);
	glVertex2f(60, 20);
	glVertex2f(60, 50);
	glEnd();
	glColor3f(1, 1, 0.5);
	glBegin(GL_LINES);
	glVertex2f(30, 50);
	glVertex2f(60, 50);


	glVertex2f(45, 70);
	glVertex2f(60, 50);

	glVertex2f(60, 50);
	glVertex2f(60, 20);

	glVertex2f(60, 50);
	glVertex2f(90, 50);
	glEnd();
	glFlush();
}
void dispRobot() {
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0); 
	glBegin(GL_POLYGON);
	glVertex2f(30, 50);
	glVertex2f(30, 80);
	glVertex2f(60, 80);
	glVertex2f(60, 50);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(45, 50);
	glVertex2f(45, 30);

	glVertex2f(45, 30);
	glVertex2f(30, 10);

	glVertex2f(45, 30);
	glVertex2f(60, 10);

	glVertex2f(45, 40);
	glVertex2f(30, 35);

	glVertex2f(45, 40);
	glVertex2f(60, 35);

	glVertex2f(60, 35);
	glVertex2f(75,40);


	glVertex2f(30, 35);
	glVertex2f(15, 40);
	glEnd();
	glFlush();

}
void main() {
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutCreateWindow("First");
	myinit();
	glutDisplayFunc(disp3DHouse);
	glutMainLoop();
}