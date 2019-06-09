#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);


glBegin(GL_LINES);

glVertex2i(0, 240);
glVertex2i(640, 240);

glVertex2i(320, 0);
glVertex2i(320, 480);




//ladder starts

glVertex2i(400, 460);
glVertex2i(400, 260);

glVertex2i(560, 260);
glVertex2i(560, 460);


glVertex2i(400, 300);
glVertex2i(560, 320);

glVertex2i(400, 400);
glVertex2i(560, 420);

//ladder ends
glEnd();


//triangle starts

glBegin(GL_TRIANGLES);

glVertex2i(100, 470);
glVertex2i(200, 470);
glVertex2i(150, 400);



glVertex2i(150, 400);
glVertex2i(100, 330);
glVertex2i(200, 330);

//4th block

glVertex2i(450, 200);
glVertex2i(400, 150);
glVertex2i(500, 150);


glVertex2i(450, 150);
glVertex2i(400, 100);
glVertex2i(500, 100);



glEnd();
//triangles ends


glBegin(GL_POLYGON);


glVertex2i(100, 150);
glVertex2i(100 , 100);
glVertex2i(200, 100);
glVertex2i(200, 150);




glEnd();

glBegin(GL_POLYGON);

glVertex2i(150, 125);
glVertex2i(150 , 70);
glVertex2i(250, 70);
glVertex2i(250, 125);


glEnd();




glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("SIMPLE DROW");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
