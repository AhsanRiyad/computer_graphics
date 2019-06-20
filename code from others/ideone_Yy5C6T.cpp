#include <bits/stdc++.h>
#include<GL/gl.h>
#include <GL/glut.h>
#define ll long long
#define sf scanf
#define pf printf
using namespace std;
ll opt;
ll x1,x2,y1,y2;
void draw(ll x1,ll y1,ll xf,ll yf)
{
    ll length=max((xf-x1),(yf-y1));
    double xinc=(double)(xf-x1)/(double)length;
    double yinc=(double)(yf-y1)/(double)length;
    double x=x1;
    double y=y1;
    glBegin(GL_POINTS);
    for(int i=0;i<=length;i++)
    {
        glVertex2i(ceil(x),ceil(y));
        //cout<<ceil(x)<<" "<<ceil(y)<<endl;
        x+=xinc;
        y+=yinc;
    }
    glEnd();
}
void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(128,128,128);
    glPointSize(1.0);
    if(opt==1)
        draw(x1,y1,x2,y2);
    glFlush();
}

void myInit(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-500,500,-400,400);
}
int main(int argc, char** argv)
{
        pf("1 for DDA\n2 for Bram\n3 for exit\n");
        sf("%lld",&opt);
        if(opt==1){
            pf("Input x1,y1,x2,y2:\n");
            sf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        }
        if(opt==2)
            pf("Not Implemented\n");
        if(opt==3)
            return 0;
        glutInit(&argc, argv);
        glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(1000,800);
        glutInitWindowPosition(10,10);
        glutCreateWindow("");
        glutDisplayFunc(myDisplay);
        myInit();
        glutMainLoop();
        return 0;

}
