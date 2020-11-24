#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.1);	// Set display window color to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 500.0, 0.0, 400.0);
}

void display()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

    glColor3f(.9, .9, .9);

	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(500,0);
	glVertex2d(500,400);
	glVertex2d(0,400);
	glEnd();

//black circle
glColor3f(0.2, 0.2, 0.2);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(250+150*cos(theta),200+150*sin(theta));  // here (250,250) is the center and 150 is the radius
	}

	glEnd();


//white circle
glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(250+130*cos(theta),200+130*sin(theta));  // here (250,250) is the center and 150 is the radius
	}

	glEnd();


//black border
glColor3f(0.0,0.0, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)

	{
	  theta=i*3.142/180;
	  glVertex2f(250+125*cos(theta),200+125*sin(theta));
	}

glEnd();

//pink circle
glColor3f(1.0,.6, .6);
	glBegin(GL_POLYGON);


	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(250+120*cos(theta),200+120*sin(theta));  // here (250,250) is the center and 150 is the radius
	}

	glEnd();



//outer star
glColor3f(1.0,1., .4);

	glBegin(GL_POLYGON);
		glVertex2i(166, 210);
		glVertex2i(146, 264);
		glVertex2i(200, 264);
		glVertex2i(250, 304);
		glVertex2i(300, 264);
		glVertex2i(354, 264);
		glVertex2i(334, 210);
		glVertex2i(364, 170);
		glVertex2i(334, 150);
		glVertex2i(334, 116);
		glVertex2i(250, 136);
		glVertex2i(166, 116);
		glVertex2i(186, 130);
		glVertex2i(136, 180);

	glEnd();


	//inner star
glColor3f(0.2, 0.7, 1.0);

	glBegin(GL_POLYGON);
		glVertex2i(170, 210);

		glVertex2i(150, 260);
		glVertex2i(200, 260);
		glVertex2i(250, 300);
		glVertex2i(300, 260);
		glVertex2i(350, 260);
		glVertex2i(330, 210);
		glVertex2i(360, 170);
		glVertex2i(330, 150);
		glVertex2i(330, 120);
		glVertex2i(250, 140);
		glVertex2i(170, 120);
		glVertex2i(200, 130);
		glVertex2i(140, 180);

	glEnd();







//yellow circle
glColor3f(1.0,.8, .0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(250+50*cos(theta),200+50*sin(theta));  // here (250,250) is the center and 150 is the radius
	}

	glEnd();
	glFlush();
	}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(350, 350);
	glutCreateWindow("Iffat Firozy Rimi 163-15-8432`");

	init();
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}
