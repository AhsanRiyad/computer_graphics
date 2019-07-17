#include <bits/stdc++.h>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;
#define PI acos(-1.0)
vector<pair<int,int> >v;
int tx,ty,opt;

void maindraw()
{
    glBegin(GL_POLYGON);
    for(int i=0;i<v.size();i++)
    {
              glVertex2i(v[i].first,v[i].second);
    }
    glEnd();
}
void transdraw()
{
    glColor3ub(255,0,0);
    glBegin(GL_POLYGON);
    for(int i=0;i<v.size();i++)
    {
          glVertex2i(v[i].first+tx,v[i].second+ty);
    }
    glEnd();
}

void scaling()
{
    glColor3ub(255,0,0);
    glBegin(GL_POLYGON);
    for(int i=0;i<v.size();i++)
    {
          glVertex2i((int)v[i].first*tx,(int)v[i].second*ty);
    }
    glEnd();
}
void rotation()
{
    glColor3ub(255,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(v[0].first,v[0].second);
    for(int j=1;j<v.size();j++)
    {

              double an=tx;
              double x=(v[j].first*cos(an))-(v[j].second*sin(an));
              double y=(v[j].second*cos(an))+(v[j].first*sin(an));
              cout<<x<<" "<<y<<endl;
              glVertex2i((int)x,(int)y);
    }
    glEnd();
}
void myDisplay(void)
{
          glClear (GL_COLOR_BUFFER_BIT);
          glColor3ub(128,128,128);
          glPointSize(5.0);
          maindraw();
          if(opt==1)
             transdraw();
          if(opt==2)
             scaling();
          if(opt==3)
             rotation();
          glFlush();
}
void myInit (void)
{
          glClearColor(255,255,255, 0.0);
          glPointSize(4.0);
          glMatrixMode(GL_PROJECTION);
          glLoadIdentity();
          gluOrtho2D(-320,320,-240,240);
}
int main(int argc, char** argv)
{
           printf("Enter your choice:\n1. Translation\n2. Scaling\n3. Rotation\n4. Exit\n");
           int n,x,y;
           cin>>opt;
           if(opt==1)
           {
                     printf("Enter the number of edges\n");
                     cin>>n;
                     printf("Enter the edges\n");
                     for(int i=0;i<n;i++)
                     {
                               cin>>x>>y;
                               v.push_back(make_pair(x,y));
                     }
                     printf("Enter Transition Factor x,y\n");
                     cin>>tx>>ty;
           }
           else if(opt==2)
           {
                     printf("Enter the number of edges\n");
                     cin>>n;
                     printf("Enter the edges\n");
                     for(int i=0;i<n;i++)
                     {
                               cin>>x>>y;
                               v.push_back(make_pair(x,y));
                     }
                     printf("Enter Scaling Factor x,y\n");
                     cin>>tx>>ty;
           }
           else if(opt==3)
           {
                     printf("Enter the number of edges\n");
                     cin>>n;
                     printf("Enter the edges\n");
                     for(int i=0;i<n;i++)
                     {
                               cin>>x>>y;
                               v.push_back(make_pair(x,y));
                     }
                     printf("Enter rotation angel\n");
                     cin>>tx;
           }
           else
             return 0;

          glutInit(&argc, argv);
          glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
          glutInitWindowSize (640, 480);
          glutInitWindowPosition(100, 150);
          glutCreateWindow("");
          glutDisplayFunc(myDisplay);
          myInit ();
          glutMainLoop();
}
