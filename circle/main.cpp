#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.1);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void display()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window


	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(0,0);
	glVertex2d(480,0);
	glVertex2d(480,480);
	glVertex2d(0,480);
	glEnd();
	//Set colour to red
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);



	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(250+150*cos(theta),250+150*sin(theta));  // here (250,250) is the center and 150 is the radius
	}

	glEnd();




	glFlush();
	}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(350, 350);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(display);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
