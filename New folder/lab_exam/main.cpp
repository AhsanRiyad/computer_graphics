#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 255 , 255);
glPointSize(5.0);

glBegin(GL_LINES);
glVertex2i(-320, 0);
glVertex2i(320, 0);
glVertex2i(0, -270);
glVertex2i(0, 240);
glEnd();


glColor3ub (240, 51 , 0);
glBegin(GL_QUADS);
glVertex2i(50, 0);
glVertex2i(0 , 0);
glVertex2i(0, 240);
glVertex2i(50, 240);
glEnd();


glColor3ub (240, 51 , 0);
glBegin(GL_QUADS);
glVertex2i(320, 0);
glVertex2i(0 , 0);
glVertex2i(0, 50);
glVertex2i(320, 50);
glEnd();




glColor3ub (240, 51 , 0);
glBegin(GL_QUADS);
glVertex2i(-50, 0);
glVertex2i(0 , 0);
glVertex2i(0, -240);
glVertex2i(-50, -240);
glEnd();


glColor3ub (240, 51 , 0);
glBegin(GL_QUADS);
glVertex2i(-320, 0);
glVertex2i(0 , 0);
glVertex2i(0, -50);
glVertex2i(-320, -50);
glEnd();





glColor3ub (240, 51 , 0);
glBegin(GL_QUADS);
glVertex2i(50, 0);
glVertex2i(0 , 0);
glVertex2i(0, -240);
glVertex2i(50, -240);
glEnd();


glColor3ub (240, 51 , 0);
glBegin(GL_QUADS);
glVertex2i(320, 0);
glVertex2i(0 , 0);
glVertex2i(0, -50);
glVertex2i(320, -50);
glEnd();












glColor3ub (240, 51 , 0);
glBegin(GL_QUADS);
glVertex2i(-50, 0);
glVertex2i(0 , 0);
glVertex2i(0, 240);
glVertex2i(-50, 240);
glEnd();


glColor3ub (240, 51 , 0);
glBegin(GL_QUADS);
glVertex2i(-320, 0);
glVertex2i(0 , 0);
glVertex2i(0, 50);
glVertex2i(-320, 50);
glEnd();





//white


glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(-320, 50);
glVertex2i(-50 , 50 );
glVertex2i(-50, 60);
glVertex2i(-320, 60);
glEnd();





glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(-60, 50);
glVertex2i(-50 , 60 );
glVertex2i(-50, 240);
glVertex2i(-60, 240);
glEnd();


//white


//white2

glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(-70, 60);
glVertex2i(-60 , 70 );
glVertex2i(-300, 240);
glVertex2i(-320, 240);
glEnd();


//white2



//red

glColor3ub (204, 51 , 0);
glBegin(GL_QUADS);
glVertex2i(-100, 60);
glVertex2i(-75 , 65 );
glVertex2i(-320, 240);
glVertex2i(-320, 220);
glEnd();


//red





//white3

glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(-120, 60);
glVertex2i(-100 , 60 );
glVertex2i(-320, 230);
glVertex2i(-320, 220);
glEnd();


//white3











//q2



//white


glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(320, 50);
glVertex2i(50 , 50 );
glVertex2i(50, 60);
glVertex2i(320, 60);
glEnd();





glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(60, 50);
glVertex2i(50 , 60 );
glVertex2i(50, 240);
glVertex2i(60, 240);
glEnd();


//white


//white2

glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(70, 60);
glVertex2i(60 , 70 );
glVertex2i(300, 240);
glVertex2i(320, 240);
glEnd();


//white2



//red

glColor3ub (204, 51 , 0);
glBegin(GL_QUADS);
glVertex2i(100, 60);
glVertex2i(75 , 65 );
glVertex2i(320, 240);
glVertex2i(320, 220);
glEnd();


//red





//white3

glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(120, 60);
glVertex2i(100 , 60 );
glVertex2i(320, 230);
glVertex2i(320, 220);
glEnd();


//white3









//q2




//q3




//white


glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(-320, -50);
glVertex2i(-50 , -50 );
glVertex2i(-50, -60);
glVertex2i(-320, -60);
glEnd();





glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(-60, -50);
glVertex2i(-50 , -60 );
glVertex2i(-50, -240);
glVertex2i(-60, -240);
glEnd();


//white


//white2

glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(-70, -60);
glVertex2i(-60 , -70 );
glVertex2i(-300, -240);
glVertex2i(-320, -240);
glEnd();


//white2



//red

glColor3ub (204, 51 , 0);
glBegin(GL_QUADS);
glVertex2i(-100, -60);
glVertex2i(-75 , -65 );
glVertex2i(-320, -240);
glVertex2i(-320, -220);
glEnd();


//red





//white3

glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(-120, -60);
glVertex2i(-100 , -60 );
glVertex2i(-320, -230);
glVertex2i(-320, -220);
glEnd();


//white3


//q3




//q4



//white


glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(320, -50);
glVertex2i(50 , -50 );
glVertex2i(50, -60);
glVertex2i(320, -60);
glEnd();





glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(60, -50);
glVertex2i(50 , -60 );
glVertex2i(50, -240);
glVertex2i(60, -240);
glEnd();


//white


//white2

glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(70, -60);
glVertex2i(60 , -70 );
glVertex2i(300, -240);
glVertex2i(320, -240);
glEnd();


//white2



//red

glColor3ub (204, 51 , 0);
glBegin(GL_QUADS);
glVertex2i(100, -60);
glVertex2i(75 , -65 );
glVertex2i(320, -240);
glVertex2i(320, -220);
glEnd();


//red





//white3

glColor3ub (255, 255 , 255);
glBegin(GL_QUADS);
glVertex2i(120, -60);
glVertex2i(100 , -60 );
glVertex2i(320, -230);
glVertex2i(320, -220);
glEnd();


//white3




//q4



















glFlush ();
}

void myInit (void)
{
glClearColor(0, 0, 153, 0.0);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-320.0, 320.0, -240.0, 240.0);
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
