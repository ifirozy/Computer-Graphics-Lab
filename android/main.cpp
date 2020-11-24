#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.1);	// Set display window color to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0,25.0, 0.0, 40.0);
}

void display()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

    glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(25,0);
	glVertex2d(25,40);
	glVertex2d(0,40);
	glEnd();


//HEAD

	glColor3f(0.7f, 1.f, 0.4f);
	glBegin(GL_POLYGON);

	for(i=1;i<180;i++)  // head

	{
	  theta=i*3.142/180;
	  glVertex2f(12.5+7.5*cos(theta),25+7.5*sin(theta));
	}

glEnd();




	glColor3f(1.0,1.0,1.0);	//eye 1
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++){
        theta=i*3.142/180;
         glVertex2f(10+.6*cos(theta),28+.6*sin(theta)); //glVertex2f(250+210*cos(theta),250+210*sin(theta));

	}


glEnd();


	glColor3f(1.0,1.0,1.0);	//eye 2
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++){
        theta=i*3.142/180;
         glVertex2f(15+.6*cos(theta),28+.6*sin(theta)); //glVertex2f(250+210*cos(theta),250+210*sin(theta));

	}


glEnd();


//LEGG

	glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);

	for(i=180;i<360;i++)  // leg1

	{
	  theta=i*3.142/180;
	  glVertex2f(9.5+1.5*cos(theta),6.2+1.5*sin(theta));
	}

glEnd();


    glColor3f(0.7f, 1.0f, 0.4f);//leg 1
	glBegin(GL_POLYGON);
	glVertex2d(8,10);
	glVertex2d(8,6);

	glVertex2d(11,6);
	glVertex2d(11,10);

glEnd();





//LEG2

	glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);

	for(i=180;i<360;i++)

	{
	  theta=i*3.142/180;
	  glVertex2f(15.5+1.5*cos(theta),6.2+1.5*sin(theta));
	}

glEnd();


    glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);
	glVertex2d(14,10);
	glVertex2d(17,10);
glVertex2d(17,6);
	glVertex2d(14,6);

glEnd();

//hand1
glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);
for(i=1;i<180;i++)

	{
	  theta=i*3.142/180;
	  glVertex2f(2.5+1.5*cos(theta),22+1.5*sin(theta));
	}
	glEnd();

 glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);
	glVertex2d(1,22);
	glVertex2d(4,22);
    glVertex2d(4,14);
	glVertex2d(1,14);

glEnd();
glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);
for(i=180;i<360;i++)

	{
	  theta=i*3.142/180;
	  glVertex2f(2.5+1.5*cos(theta),14.2+1.5*sin(theta));
	}
	glEnd();

	//hand 2

	glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);
for(i=1;i<180;i++)

	{
	  theta=i*3.142/180;
	  glVertex2f(22.5+1.5*cos(theta),22+1.5*sin(theta));
	}
	glEnd();
glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);
	glVertex2d(21,22);
	glVertex2d(24,22);
glVertex2d(24,14);
	glVertex2d(21,14);

glEnd();
glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);
for(i=180;i<360;i++)

	{
	  theta=i*3.142/180;
	  glVertex2f(22.5+1.5*cos(theta),14.2+1.5*sin(theta));
	}
	glEnd();


	//BODY

	 glColor3f(0.7f, 1.0f, 0.4f);//leg 1
	glBegin(GL_POLYGON);
	glVertex2d(5,24);
	glVertex2d(5,12);
	glVertex2d(7,12);
	glVertex2d(7,10);
    glVertex2d(18,10);
    glVertex2d(18,12);
	glVertex2d(20,12);
	glVertex2d(20,24);

glEnd();

glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);
for(i=180;i<360;i++)

	{
	  theta=i*3.142/180;
	  glVertex2f(7+2*cos(theta),12+2*sin(theta));
	}
	glEnd();

glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);
for(i=180;i<360;i++)

	{
	  theta=i*3.142/180;
	  glVertex2f(18+2*cos(theta),12+2*sin(theta));
	}
	glEnd();

	//SHING

glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);
for(i=0;i<180;i++)

	{
	  theta=i*3.142/180;
	  glVertex2f(15.75+.25*cos(theta),35+.25*sin(theta));
	}
	glEnd();

	glColor3f(0.7f, 1.0f, 0.4f);//SHING 2
	glBegin(GL_POLYGON);
	glVertex2d(15,32);
	glVertex2d(14.5,32);
	glVertex2d(15.5,35);
	glVertex2d(16,35);

	glEnd();


	glColor3f(0.7f, 1.0f, 0.4f);
	glBegin(GL_POLYGON);
for(i=0;i<180;i++)

	{
	  theta=i*3.142/180;
	  glVertex2f(8.75+.25*cos(theta),35+.25*sin(theta));
	}
	glEnd();

	glColor3f(0.7f, 1.0f, 0.4f);//SHING 1
	glBegin(GL_POLYGON);
	glVertex2d(10,31);
	glVertex2d(9.5,31);
	glVertex2d(8.5,35);
	glVertex2d(9,35);

	glEnd();




	glFlush();
	}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(350, 350);
	glutCreateWindow("Iffat Firozy Rimi 163-15-8432");

	init();
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}
