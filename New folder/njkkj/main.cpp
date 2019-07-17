#include <iostream>

#include<GL/gl.h>
#include <GL/glut.h>


using namespace std;

int abs (int a , int b){

return a-b;

}


void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);



//int x1 = 100 , x2 = 200 , y1 = 100 , y2 = 300;
//int x = 100 , y = 100;

int x1 = -100 , x2 = 200 , y1 = -100 , y2 = 300;


cout << "enter x1\n";
cin >> x1;
cout << "enter x2\n";
cin >> x2;
cout << "enter y1\n";
cin >> y1;
cout << "enter y2\n";
cin >> y2;

int x = x1 , y = y1;

int lenght = x1 - x2;



if(abs(y2,y1) > lenght ){
      lenght = abs(y2,y1);
}

float xincrement = abs(x2,x1) / lenght ;

float yincrement = abs(y2,y1) / lenght ;

x = x +.5 ;
y = y +.5 ;

for(int i = 1 ; i< lenght ; i++){

      glBegin(GL_POINTS);

      glColor3ub (0, 0, 77);
      glVertex2i(x, y);
      //glVertex2i(y, 550);


      glEnd();

      x = x + xincrement;
      y = y + yincrement;


}



glFlush ();
}


void myInit (void)
{
glClearColor(255.0, 255.0, 255.0, 255.0);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-640.0, 640.0, -600.0, 600.0);
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
