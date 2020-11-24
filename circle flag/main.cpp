#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.1);	// Set display window color to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void display()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

    glColor3f(.9, 0.9, 0.9);

	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(500,0);
	glVertex2d(500,500);
	glVertex2d(0,500);
	glEnd();




	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)  // white circle

	{
	  theta=i*3.142/180;
	  glVertex2f(250+230*cos(theta),250+230*sin(theta));  // here (250,250) is the center and 150 is the radius
	}

glEnd();





	glColor3f(1.0,0.0,.0);	//Red 1
	glBegin(GL_POLYGON);
	for(i=75;i<113;i++){
        theta=i*3.142/60;
         glVertex2f(250+210*cos(theta),250+210*sin(theta)); //glVertex2f(250+210*cos(theta),250+210*sin(theta));

	}

	glVertex2f(170,165);
glEnd();





	glColor3f(1.0,0.0,.0);	//Red 2
	glBegin(GL_POLYGON);

            glVertex2f(250,250);
            glVertex2f(220,280);
            glVertex2f(450,280);
            glVertex2f(450,220);
            glVertex2f(220,220);


glEnd();


	glColor3f(1.0,0.0,.0); //Red 3
	glBegin(GL_POLYGON);
	for(i=8;i<53;i++){
        theta=i*3.142/60;
         glVertex2f(250+210*cos(theta),250+210*sin(theta)); //glVertex2f(250+210*cos(theta),250+210*sin(theta));

	}
glEnd();




	glColor3f(0.0,0.0,.9);
	glBegin(GL_POLYGON);
	for(i=40;i<80;i++){
        theta=i*3.142/60;
         glVertex2f(250+210*cos(theta),250+210*sin(theta)); //glVertex2f(250+210*cos(theta),250+210*sin(theta));

	}
            glVertex2f(250,250);
glEnd();




    glColor3f(1.0, 1.0, 1.0);//blue
	glBegin(GL_POLYGON);
	glVertex2d(135,270);
	glVertex2d(140,285);
	glVertex2d(145,270);
	glVertex2d(170,270);
	glVertex2d(150,260);
	glVertex2d(160,240);
	glVertex2d(140,255);
	glVertex2d(120,240);
	glVertex2d(140,255);
	glVertex2d(110,270);
glEnd();




	glFlush();
	}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(350, 350);
	glutCreateWindow("Iffat Firozy Rimi 163-15-8434");

	init();
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}
