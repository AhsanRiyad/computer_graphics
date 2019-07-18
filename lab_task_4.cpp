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

glVertex2i(-600, 0);
glVertex2i(600 , 0 );

glVertex2i(0 , 600 );
glVertex2i(0 , -600 );

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
glFlush ();

double x1_new , y1_new ;

double angle = 20 ;
int factor ;
int n ;
cout<<"please select one option: \n" ;
cout << "1: Rotation \n";
cout << "2: Translation \n";
cout << "3: Scaling \n";
cin>> n ;

switch (n)
{
    case 1: // code to be executed if n = 1;
        cout << "Please enter rotation  angle: \n" ;
        cin >> angle ;
        cout << "\n" ;
        
        glBegin(GL_TRIANGLES);
        glVertex2i((((x1*cos(angle))-(y1*sin(angle)))),(((y1*cos(angle))+(x1*sin(angle)))));
        glVertex2i((((x2*cos(angle))-(y2*sin(angle)))),(((y2*cos(angle))+(x2*sin(angle)))));
        glVertex2i((((x3*cos(angle))-(y3*sin(angle)))),(((y3*cos(angle))+(x3*sin(angle)))));
        glEnd();
        glFlush ();
        break;
    case 2: // code to be executed if n = 2;

        cout << "Please enter Translating factor: \n" ;
        cin >> factor ;
        cout << "\n" ;

        glBegin(GL_TRIANGLES);
        glVertex2i(x1+factor,y1+factor);
        glVertex2i(x2+factor,y2+factor);
        glVertex2i(x3+factor,y3+factor);
        glEnd();
        glFlush ();
        break;


    case 3: // code to be executed if n = 2;

        cout << "Please enter Scaling factor: \n" ;
        cin >> factor ;
        cout << "\n" ;
        
        glBegin(GL_TRIANGLES);
        glVertex2i(0,0);
        glVertex2i(x2*factor,y2*factor);
        glVertex2i(x3*factor,y3*factor);
        glEnd();
        glFlush ();
        break;


    default: cout<< "inside the switch case" ; // code to be executed if n doesn't match any cases
}




}

void myInit (void)
{
glClearColor(0, 0, 0, 0.0);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-600, 600.0, -600.0, 600.0);
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
