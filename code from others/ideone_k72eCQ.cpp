#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

int x1=0,y1=0,x2=80,y2=0,x3=80,y3=80,x4=0,y4=80;

void drawboard()
{
    glBegin(GL_QUADS);
    for(int i=0;i<8;i++)
    {
        int tmpx1=x1,tmpx2=x2,tmpx3=x3,tmpx4=x4;
        for(int j=0;j<8;j++)
        {
            if((i+j)%2==0)
                glColor3ub(0,0,0);
            else
                glColor3ub(255,255,255);

                glVertex2i(tmpx1,y1);
                glVertex2i(tmpx2,y2);
                glVertex2i(tmpx3,y3);
                glVertex2i(tmpx4,y4);

                tmpx1+=80;
                tmpx2+=80;
                tmpx3+=80;
                tmpx4+=80;
        }
        y1+=60;
        y2+=60;
        y3+=60;
        y4+=60;
    }
    glEnd();
}
void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glPointSize(5.0);
    drawboard();
    glFlush();
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
    glutInitWindowSize(640,480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow("ChessBoard");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
}
