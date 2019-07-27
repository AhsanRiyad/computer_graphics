#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position > 1.0)
        position = -1.2f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    speed = 0.0f;
    break;
case 'w':
    speed += 0.1f;
    break;


glutPostRedisplay();


	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();




 glBegin(GL_QUADS);
      glColor3ub(204,127,50);
      glVertex2f(-0.06f, -0.6f);
      glVertex2f( 0.06f, -0.6f);
      glVertex2f( 0.06f,  -0.3f);
      glVertex2f(-0.06f, -0.3f);
   glEnd();



   glBegin(GL_POLYGON);
      glColor3ub(255,63,0);
      glVertex2f( 0.1f, -0.7f);
      glVertex2f( 0.0f,  -.9f);
      glVertex2f(-0.1f, -0.7f);

      glVertex2f(0.06f, -0.6f);
      glVertex2f(-0.06f, -0.6f);


      glVertex2f(-0.1f, -0.7f);
   glEnd();





   glBegin(GL_POLYGON);
      glColor3ub(255,208,0);
      glVertex2f( 0.07f, -0.7f);
      glVertex2f( 0.0f,  -.8f);
      glVertex2f(-0.07f, -0.7f);
      glVertex2f(0.06f, -0.6f);
      glVertex2f(-0.06f, -0.6f);
      glVertex2f(-0.07f, -0.7f);
   glEnd();



glPushMatrix();
glTranslatef(position,0.0f, 0.0f);


glPopMatrix();



   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(720, 720);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
