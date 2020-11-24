#include<windows.h>
#include <GL/glut.h>


void init(void)
{
	glClearColor(1.0, 1.0, 1.0, .0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}
void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	//Set colour to black
	glColor3f(0.2, 0.4, 1.0);
	//Adjust the point size
	glPointSize(10.0);

    glBegin(GL_TRIANGLES);
    glVertex2d(200,300);
    glVertex2d(220,380);
    glVertex2d(300,400);
    glEnd();//1.0left

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(200,300);
    glVertex2d(280,320);
    glVertex2d(300,400);
    glEnd();//1.1left

    glColor3f(0.8, 0.2, 0.5);
    glBegin(GL_TRIANGLES);
    glVertex2d(300,400);
    glVertex2d(380,380);
    glVertex2d(400,300);
    glEnd();//1.3right
     glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(300,400);
    glVertex2d(320,320);
    glVertex2d(400,300);
    glEnd();//1.4right


     glColor3f(1.0, 0.4, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(400,300);
    glVertex2d(380,220);
    glVertex2d(300,200);
    glEnd();//2.1right
     glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(400,300);
    glVertex2d(320,280);
    glVertex2d(300,200);
    glEnd();//2.2right

      glColor3f(.1, 0.9, 0.6);
    glBegin(GL_TRIANGLES);
    glVertex2d(200,300);
    glVertex2d(220,220);
    glVertex2d(300,200);
    glEnd();//2.3left
     glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(200,300);
    glVertex2d(280,280);
    glVertex2d(300,200);
    glEnd();//2.4left






	glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(10, 10);				// Set window position
	glutInitWindowSize(450, 450);					// Set window size
	glutCreateWindow("163-15-8432");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
