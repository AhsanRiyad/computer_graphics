#include<bits/stdc++.h>
#define PI acos(-1.0)

#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;

GLfloat position = 0.0f;
GLfloat speed = 5.0f;
float angle=45.0;
void update(int value) {
    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
    if(speed<=35.0){
        	speed += 0.2;
    }
}


void init()
{
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
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

void drawTriangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
    glBegin(GL_TRIANGLES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();
}
void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3ub(255,0,0);

   drawCircle(0.0f,0.0f,0.2f);

   glPushMatrix();
   glRotatef(position,0,0,-1);
   drawTriangle(0.2,0,0.6,-0.1,0.7,0.2);
   drawTriangle(-0.2,0,-0.6,0.1,-0.7,-0.2);
   drawTriangle(0,0.2,0.1,0.6,-0.2,0.7);
   drawTriangle(0,-0.2,-0.1,-0.6,0.2,-0.7);
   glPopMatrix();

   glFlush();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(620, 620);
    glutCreateWindow("Test");
    glutDisplayFunc(display);
    glutTimerFunc(1000, update, 0);
    glutMainLoop();
    return 0;
}
