#include<GL/glut.h>

void init(){
	//display window color
	glClearColor(0.0, 0.0, 0.0, 0.0);
	//projection parameter
	glMatrixMode(GL_PROJECTION);
	//2D transformation
	gluOrtho2D(0.0, 1200, 0.0, 900);
}

void home(){

	//ROOF of HOUSE
	glClear(GL_COLOR_BUFFER_BIT);

	//set roof color
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(100, 600);
	glVertex2i(400, 600);
	glVertex2i(400, 400);
	glVertex2i(100, 400);
	glEnd();

glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(250, 550);
	glVertex2i(270, 545);
	glVertex2i(286, 531);
	glVertex2i(296, 516);
	glVertex2i(300, 500);

	glVertex2i(294, 486);
	glVertex2i(286, 473);
	glVertex2i(271, 460);
	glVertex2i(250, 450);

	glVertex2i(232, 457);
	glVertex2i(215, 469);
	glVertex2i(204, 483);
	glVertex2i(200, 500);

    glVertex2i(206, 516);
	glVertex2i(216, 531);
	glVertex2i(232, 500);


	glEnd();
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(90, 620);
	glVertex2i(100, 620);
	glVertex2i(100, 100);
	glVertex2i(90, 100);
	glEnd();

	glFlush();
}

int main(int argc, char ** argv){
	//Initialize glut
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowPosition(100, 100);

	glutInitWindowSize(800, 600);

	glutCreateWindow("Flags");


	init();
	glutDisplayFunc(home);

	glutMainLoop();

}
