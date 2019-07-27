#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
#define PI acos(-1.0)


GLfloat position = 0.0f;
GLfloat speed = 0.1f;
float angle=45.0;


void update(int value) {

    if(position > 1.0){
        position = -1.2f;
    }


    //position += speed;

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
    //speed = 0.0f;
    position += .1f;
    break;
case 'w':
    //speed += 0.1f;
    position -= .1f;
    break;


glutPostRedisplay();


	}
}

void
catchKey(int key, int x, int y)
{
    if(key == GLUT_KEY_LEFT){
        position -= .1f;
        printf("Left key is pressed\n");
    }

    else if(key == GLUT_KEY_RIGHT){
        position += .1f;
        printf("Right key is pressed\n");
    }

    else if(key == GLUT_KEY_DOWN)
        printf("Down key is pressed\n");
    else if(key == GLUT_KEY_UP)
        printf("Up key is pressed\n");
}




void drawCircle(float x,float y,float radius)
{
	int i;
	int lineAmount = 100;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);

    for(i = 0; i <= lineAmount;i++)
    {
        float tmpx=x + (radius * cos(i *  twicePi / lineAmount));
        float tmpy=y + (radius* sin(i * twicePi / lineAmount));
        glVertex2f(tmpx,tmpy);
    }
	glEnd();
}



void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();


glPushMatrix();
glTranslatef(position,0.0f, 0.0f);


    //circle
 drawCircle(-.00f,-.225f , .08f );


   //first quads

 glBegin(GL_QUADS);
      glColor3ub(204,127,50);
      glVertex2f(-0.06f, -0.6f);
      glVertex2f( 0.06f, -0.6f);
      glVertex2f( 0.06f,  -0.3f);
      glVertex2f(-0.06f, -0.3f);
   glEnd();




   //first lej

    glBegin(GL_TRIANGLES);
      glColor3ub(255,63,0);
      glVertex2f( -0.125f, -0.4f);
      glVertex2f( -0.06f,  -0.4f);
      glVertex2f(-0.06f, -0.3f);
   glEnd();





    glBegin(GL_TRIANGLES);
      glColor3ub(255,63,0);
      glVertex2f( 0.125f, -0.4f);
      glVertex2f( 0.06f,  -0.4f);
      glVertex2f(0.06f, -0.3f);
   glEnd();



    //second lej

   glBegin(GL_TRIANGLES);
      glColor3ub(255,63,0);
      glVertex2f( -0.1f, -0.6f);
      glVertex2f( -0.06f,  -0.6f);
      glVertex2f(-0.06f, -0.5f);
   glEnd();


   glBegin(GL_TRIANGLES);
      glColor3ub(255,63,0);
      glVertex2f( 0.1f, -0.6f);
      glVertex2f( 0.06f,  -0.6f);
      glVertex2f(0.06f, -0.5f);
   glEnd();



    //first triangle under quads

   glBegin(GL_POLYGON);
      glColor3ub(255,63,0);
      glVertex2f( 0.1f, -0.7f);
      glVertex2f( 0.0f,  -.9f);
      glVertex2f(-0.1f, -0.7f);

      glVertex2f(0.06f, -0.6f);
      glVertex2f(-0.06f, -0.6f);


      glVertex2f(-0.1f, -0.7f);
   glEnd();




    //second triangle under quads

   glBegin(GL_POLYGON);
      glColor3ub(255,208,0);
      glVertex2f( 0.07f, -0.7f);
      glVertex2f( 0.0f,  -.8f);
      glVertex2f(-0.07f, -0.7f);
      glVertex2f(0.06f, -0.6f);
      glVertex2f(-0.06f, -0.6f);
      glVertex2f(-0.07f, -0.7f);
   glEnd();






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
   glutSpecialFunc(catchKey);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
