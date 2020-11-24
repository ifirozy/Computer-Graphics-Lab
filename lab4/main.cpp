#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.1);	// Set display window color to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 2800.0, 0.0, 3000.0);
}

void display()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

    glColor3f(1.9, 1.9, 1.9);

	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(2800,0);
	glVertex2d(2800,3000);
	glVertex2d(0,3000);
	glEnd();

//blue circle
glColor3f(1.0,1.0, 1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // white circle

	{
	  theta=i*3.142/180;
	  glVertex2f(450+420*cos(theta),2000+420*sin(theta));
	}

glEnd();

	glColor3f(0.0,0.0,.9);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // blue 1

	{
	  theta=i*3.142/180;
	  glVertex2f(450+400*cos(theta),2000+400*sin(theta));
	}

glEnd();

glColor3f(1.0,1.0, 1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // white circle

	{
	  theta=i*3.142/180;
	  glVertex2f(450+350*cos(theta),2000+350*sin(theta));
	}

glEnd();

// yellow circle
glColor3f(1.0,1.0, 1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // white circle

	{
	  theta=i*3.142/180;
	  glVertex2f(900+420*cos(theta),1600+420*sin(theta));
	}

glEnd();

glColor3f(1.0,.6,.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // yello4

	{
	  theta=i*3.142/180;
	  glVertex2f(900+400*cos(theta),1600+400*sin(theta));
	}

glEnd();

glColor3f(1.0,1.0, 1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // white circle

	{
	  theta=i*3.142/180;
	  glVertex2f(900+350*cos(theta),1600+350*sin(theta));
	}

glEnd();


// black circle
glColor3f(1.0,1.0, 1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // white circle

	{
	  theta=i*3.142/180;
	  glVertex2f(1350+420*cos(theta),2000+420*sin(theta));
	}

glEnd();

glColor3f(0.0,0.0,.0);
	glBegin(GL_POLYGON);//black 2

	for(i=0;i<360;i++)  // white circle

	{
	  theta=i*3.142/180;
	  glVertex2f(1350+400*cos(theta),2000+400*sin(theta));
	}

glEnd();

glColor3f(1.0,1.0, 1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // white circle

	{
	  theta=i*3.142/180;
	  glVertex2f(1350+350*cos(theta),2000+350*sin(theta));
	}

glEnd();

// green circle

glColor3f(1.0,1.0, 1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // white circle

	{
	  theta=i*3.142/180;
	  glVertex2f(1800+420*cos(theta),1600+420*sin(theta));
	}

glEnd();

glColor3f(0.0,1.0,.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // green

	{
	  theta=i*3.142/180;
	  glVertex2f(1800+400*cos(theta),1600+400*sin(theta));
	}

glEnd();

glColor3f(1.0,1.0, 1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // white circle

	{
	  theta=i*3.142/180;
	  glVertex2f(1800+350*cos(theta),1600+350*sin(theta));
	}

glEnd();


//red circle

glColor3f(1.0,1.0, 1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // white circle

	{
	  theta=i*3.142/180;
	  glVertex2f(2250+420*cos(theta),2000+420*sin(theta));
	}

glEnd();
glColor3f(1.0,0.0,.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // red 3

	{
	  theta=i*3.142/180;
	  glVertex2f(2250+400*cos(theta),2000+400*sin(theta));
	}

glEnd();

glColor3f(1.0,1.0, 1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // white circle

	{
	  theta=i*3.142/180;
	  glVertex2f(2250+350*cos(theta),2000+350*sin(theta));
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
