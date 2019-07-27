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
    position = 0.0f;
    break;
case 'w':
    position += 0.1f;
    break;


glutPostRedisplay();


	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();



glPushMatrix();
glTranslatef(0.0f, -position, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.2f, -0.2f);
      glVertex2f( 0.2f, -0.2f);
      glVertex2f( 0.2f,  0.2f);
      glVertex2f(-0.2f,  0.2f);
   glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(-0.6f, -position + 0.5f, 0.5f);
   glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f(-0.2f, -0.2f);
      glVertex2f( 0.2f, -0.2f);
      glVertex2f( 0.2f,  0.2f);
      glVertex2f(-0.2f,  0.2f);
   glEnd();


glPopMatrix();


glPushMatrix();
glTranslatef(0.5f, -position - 0.5f, -0.6f);
   glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.2f, -0.2f);
      glVertex2f( 0.2f, -0.2f);
      glVertex2f( 0.2f,  0.2f);
      glVertex2f(-0.2f,  0.2f);
   glEnd();


glPopMatrix();

glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 1.0f, 0.0f);
      glVertex2f(-0.2f, -0.8f);
      glVertex2f( 0.2f, -0.8f);
      glVertex2f(0.0f,  -0.6f);

   glEnd();


   glBegin(GL_QUADS);
      glColor3f(0.0f, 1.0f, 0.0f);
      glVertex2f(-0.2f, -1.0f);
      glVertex2f( 0.2f, -1.0f);
      glVertex2f(0.2f,  -0.8f);
      glVertex2f( -0.2f,  -0.8f);
   glEnd();

   glPopMatrix();


   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
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