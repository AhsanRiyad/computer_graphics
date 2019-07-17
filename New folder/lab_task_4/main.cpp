#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <cmath>

using namespace std;


void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 255 , 255);
glPointSize(5.0);

glColor3ub (255, 255 , 255);
glBegin(GL_LINES);

glVertex2i(-320, 0);
glVertex2i(320 , 0 );

glVertex2i(0 , 320 );
glVertex2i(0 , -320 );

glEnd();


double x1, x2 , x3 , y1 , y2 ,y3 ;

x1 = 75 ;
x2 = 100 ;
x3 = 75 ;

y1 = 200 ;
y2 = 200 ;
y3 = 250 ;


glBegin(GL_TRIANGLES);
glVertex2i(x1,y1);
glVertex2i(x2,y2);
glVertex2i(x3,y3);
glEnd();


double x1_new , y1_new ;

double angle = 20 ;

cout<<"please enter angle to rotate" ;
cin >> angle ;

x1_new = (((x1*cos(angle))-(y1*sin(angle))));
y1_new = (((y1*cos(angle))+(x1*sin(angle))));


//cout<< x1_new;


glBegin(GL_TRIANGLES);
glVertex2i((((x1*cos(angle))-(y1*sin(angle)))),(((y1*cos(angle))+(x1*sin(angle)))));
glVertex2i((((x2*cos(angle))-(y2*sin(angle)))),(((y2*cos(angle))+(x2*sin(angle)))));
glVertex2i((((x3*cos(angle))-(y3*sin(angle)))),(((y3*cos(angle))+(x3*sin(angle)))));
glEnd();







glFlush ();
}

void myInit (void)
{
glClearColor(0, 0, 0, 0.0);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-320.0, 320.0, -320.0, 320.0);
}




int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
