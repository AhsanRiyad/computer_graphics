#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
#define PI acos(-1.0)

#include<iostream>

using namespace std;

GLfloat position = 0.0f;
GLfloat speed = 0.1f;
float angle=45.0;

GLfloat init_point = 0.0f;

GLfloat first_point_x =  -0.06f ;
GLfloat first_point_y =  -0.6f ;

GLfloat position_stone_x = 0.0f;
GLfloat position_stone_y = 0.0f;
GLfloat speed_stone = 0.0f;

GLfloat random_ball_position_y = 0.0f ;

bool up_click_check = false ;



void update(int value) {

    if(position > 1.4){
        position = -1.2f;
    }

    if(up_click_check == true){
      position_stone_y += .05f ;
    }


    if(position_stone_y > 1.0 ){
      up_click_check = false ;
      position_stone_y = 0.0f ;
    }
    random_ball_position_y -=.1f;

    if(random_ball_position_y<-2.0f){
        random_ball_position_y = 1.0f;
    }






    //position += speed;

  glutPostRedisplay();


  glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}




void handleMouse(int button, int state, int x, int y) {
  if (button == GLUT_LEFT_BUTTON)
  {
    if (state == GLUT_DOWN)
    {
      speed += 0.1f;
      printf("clicked at (%d, %d)\n", x, y);
    }
  }

  glutPostRedisplay();
}




void handleKeypress(unsigned char key, int x, int y) {

  switch (key) {

case 'a':
    //speed = 0.0f;
    position += .1f;
    break;
case 'w':
    //speed += 0.1f;
    position -= .1f;
    break;


glutPostRedisplay();


  }
}

void catchKey(int key, int x, int y)
{
    if(key == GLUT_KEY_LEFT){
        position -= .1f;

        first_point_x -= .1f ;


    init_point = (first_point_x + first_point_x)/2 ;

    cout<< init_point ;

        printf("Left key is pressed\n");
    }

    else if(key == GLUT_KEY_RIGHT){

        position += .1f;
        first_point_x += .1f ;

        init_point = first_point_x + (first_point_x) ;

        printf("Right key is pressed\n");
    }

    else if(key == GLUT_KEY_DOWN)
        printf("Down key is pressed\n");
    else if(key == GLUT_KEY_UP){

        up_click_check = true ;


        //ball_click = false ;
        //position_stone= 0.2f ;
        printf("Up key is pressed\n");
    }

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



void display() {





   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();



    //random ball

    glPushMatrix();
    position_stone_x = position ;
    glTranslatef(0 ,random_ball_position_y, 0.0f);
     //circle
    drawCircle(0.0f, 1.0f , .08f);

    glPopMatrix();







   //ball that will hit the target

    glPushMatrix();
    position_stone_x = position ;
    glTranslatef(position_stone_x ,position_stone_y, 0.0f);
     //circle
    drawCircle(0.0f,-.225f , .08f);

    glPopMatrix();



    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    //drawCircle(-.00f,-.225f , .08f );


   //first quads

 glBegin(GL_QUADS);
      glColor3ub(204,127,50);
      glVertex2f(-0.06f, -0.6f);
      glVertex2f( 0.06f, -0.6f);
      glVertex2f( 0.06f,  -0.3f);
      glVertex2f(-0.06f, -0.3f);
   glEnd();




   //first lej

    glBegin(GL_TRIANGLES);
      glColor3ub(255,63,0);
      glVertex2f( -0.125f, -0.4f);
      glVertex2f( -0.06f,  -0.4f);
      glVertex2f(-0.06f, -0.3f);
   glEnd();





    glBegin(GL_TRIANGLES);
      glColor3ub(255,63,0);
      glVertex2f( 0.125f, -0.4f);
      glVertex2f( 0.06f,  -0.4f);
      glVertex2f(0.06f, -0.3f);
   glEnd();



    //second lej

   glBegin(GL_TRIANGLES);
      glColor3ub(255,63,0);
      glVertex2f( -0.1f, -0.6f);
      glVertex2f( -0.06f,  -0.6f);
      glVertex2f(-0.06f, -0.5f);
   glEnd();


   glBegin(GL_TRIANGLES);
      glColor3ub(255,63,0);
      glVertex2f( 0.1f, -0.6f);
      glVertex2f( 0.06f,  -0.6f);
      glVertex2f(0.06f, -0.5f);
   glEnd();



    //first triangle under quads

   glBegin(GL_POLYGON);
      glColor3ub(255,63,0);
      glVertex2f( 0.1f, -0.7f);
      glVertex2f( 0.0f,  -.9f);
      glVertex2f(-0.1f, -0.7f);

      glVertex2f(0.06f, -0.6f);
      glVertex2f(-0.06f, -0.6f);


      glVertex2f(-0.1f, -0.7f);
   glEnd();




    //second triangle under quads

   glBegin(GL_POLYGON);
      glColor3ub(255,208,0);
      glVertex2f( 0.07f, -0.7f);
      glVertex2f( 0.0f,  -.8f);
      glVertex2f(-0.07f, -0.7f);
      glVertex2f(0.06f, -0.6f);
      glVertex2f(-0.06f, -0.6f);
      glVertex2f(-0.07f, -0.7f);
   glEnd();



glPopMatrix();



   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(720, 720);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutSpecialFunc(catchKey);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
