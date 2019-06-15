#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);
glBegin(GL_POLYGON);


glColor3ub (0, 13, 26);
glVertex2i(200, 400);
glVertex2i(250, 400);
glVertex2i(250, 450);
glVertex2i(200, 450);

glEnd();

glBegin(GL_POLYGON);

glColor3ub (0, 0, 77);
glVertex2i(350, 400);
glVertex2i(350, 450);
glVertex2i(300, 450);
glVertex2i(300, 425);
glVertex2i(250, 425);
glVertex2i(250, 400);

glEnd();



glBegin(GL_POLYGON);

glColor3ub (204, 102, 0);

glVertex2i(350, 350);
glVertex2i(350, 400);
glVertex2i(200, 400);
glVertex2i(200, 350);

glEnd();



glBegin(GL_QUADS);

glColor3ub (194, 194, 214);


glVertex2i(150, 300);
glVertex2i(400, 300);

glVertex2i(400, 350);
glVertex2i(150, 350);

glEnd();



glBegin(GL_QUADS);

glColor3ub (194, 194, 214);


glVertex2i(100, 250);
glVertex2i(200, 250);

glVertex2i(200, 300);
glVertex2i(100, 300);

glEnd();


glBegin(GL_QUADS);

glColor3ub (194, 194, 214);


glVertex2i(350, 250);
glVertex2i(450, 250);

glVertex2i(450, 300);
glVertex2i(350, 300);

glEnd();


glBegin(GL_QUADS);

glColor3ub (194, 194, 214);


glVertex2i(150, 200);
glVertex2i(400, 200);

glVertex2i(400, 250);
glVertex2i(150, 250);

glEnd();


glBegin(GL_QUADS);

glColor3ub (31, 31, 46);


glVertex2i(350, 250);
glVertex2i(350, 300);

glVertex2i(200, 300);
glVertex2i(200, 250);

glEnd();


glBegin(GL_QUADS);

glColor3ub (249,156,50);

glVertex2i(150, 200);
glVertex2i(150, 250);

glVertex2i(100, 250);
glVertex2i(100, 200);


glEnd();

glBegin(GL_QUADS);

glColor3ub (249,156,50);

glVertex2i(400, 200);
glVertex2i(450, 200);

glVertex2i(450, 250);
glVertex2i(400, 250);


glEnd();




glBegin(GL_QUADS);

glColor3ub (11,27,76);

glVertex2i(100, 150);
glVertex2i(150, 150);

glVertex2i(150, 200);

glVertex2i(100, 200);


glEnd();



glBegin(GL_QUADS);

glColor3ub (11,27,76);


glVertex2i(400, 150);
glVertex2i(450, 150);
glVertex2i(450, 200);
glVertex2i(400, 200);




glEnd();

glBegin(GL_QUADS);

glColor3ub (0,0,0);

glVertex2i(150, 0);
glVertex2i(150, 150);
glVertex2i(100, 150);

glVertex2i(100, 0);


glEnd();


glFlush ();
}


void myInit (void)
{
glClearColor(255.0, 255.0, 255.0, 255.0);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-640.0, 640.0, -480.0, 480.0);
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
