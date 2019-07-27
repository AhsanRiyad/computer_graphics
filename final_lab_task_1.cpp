#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
#define PI acos(-1.0)
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include<iostream>
#include <cmath>
using namespace std;

GLfloat position = 0.0f;
GLfloat speed = 0.1f;
float angle=45.0;

GLfloat init_point = 0.0f;

GLfloat first_point_x =  -0.06f ;
GLfloat first_point_y =  -0.6f ;

GLfloat position_stone_x = 0.0f;
GLfloat position_stone_y1 = 0.0f;
GLfloat position_stone_y2 = 0.0f;
GLfloat position_stone_y3 = 0.0f;
GLfloat speed_stone = 0.0f;

GLfloat random_ball_position_y1 = 0.0f ;
GLfloat random_ball_position_y2 = 0.0f ;
GLfloat random_ball_position_y3 = 0.0f ;
GLfloat random_ball_position_y4 = 0.0f ;



bool up_click_check = false ;



GLfloat xpos1 = -0.1f ;
GLfloat ypos = 1.0f;


GLfloat xpos2 = -0.3f ;
GLfloat xpos3 = -0.1f ;
GLfloat xpos4 = -0.3f ;



bool random_ball_1 = true ;
bool random_ball_2 = true ;
bool random_ball_3 = true ;
bool random_ball_4 = true ;



void update(int value) {


    if(position > 1.4){
        position = -1.2f;
    }

    if(up_click_check == true){
      position_stone_y1 += .05f ;
    }

    if(position_stone_y1 > 1.0 ){
      up_click_check = false ;
      position_stone_y1 = 0.0f ;
    }


    /*if(up_click_check == true && position_stone_y1 - position_stone_y3 > 0.1 || position_stone_y1 - position_stone_y3 < -0.1 ){
      //up_click_check = false ;
      position_stone_y3 = 0.0f ;
    }*/


    random_ball_position_y1 -=0.1f;

    if(random_ball_position_y1<-2.0f){

        float i = rand() % 9 + 1 ;
        float randValue =  i/10 ;

        //cout<< randValue;

        xpos1 =  -randValue ;
        random_ball_position_y1 = 1.0f + randValue;
    }

    random_ball_position_y2 -=.1f;

    if(random_ball_position_y2<-2.0f){

       float i = rand() % 9 + 1 ;
        float randValue =  i/10 ;



        xpos2 =  -randValue  ;
        random_ball_position_y2 = 1.0f + randValue;
    }

    random_ball_position_y3 -=.1f;

    if(random_ball_position_y3<-2.0f){

        float i = rand() % 9 + 1 ;
        float randValue =  i/10 ;

        xpos3 =  randValue ;
        random_ball_position_y3 = 1.0f + randValue;
    }

     random_ball_position_y4 -=.1f;

    if(random_ball_position_y4<-2.0f){

        float i = rand() % 9 + 1 ;
        float randValue =  i/10 ;

        xpos4 =  randValue;
        random_ball_position_y4 = 1.0f + randValue;
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


  /* initialize random seed: */
  //srand (time(NULL));

  /* generate secret number between 1 and 10: */


    //random ball 1



// && abs (xpos1 - position_stone_x) < 0.3f

    if( abs(random_ball_position_y1 - position_stone_y1) > 0.6f  )
    {


      cout << "collision\n" ; 
      glPushMatrix();
      glColor3ub(255,255,255);

      position_stone_x = position ;
      glTranslatef(0 ,random_ball_position_y1, 0.0f);
       //circle
      drawCircle(xpos1, 1.0f  , .08f);

      glPopMatrix();
    }else{
        glPushMatrix();
      glColor3ub(100,200,255);

      position_stone_x = position ;
      glTranslatef(0 ,random_ball_position_y1, 0.0f);
       //circle
      drawCircle(xpos1, 1.0f  , .08f);

      glPopMatrix();
    }




    //random ball 2




    if( abs(random_ball_position_y2 - position_stone_y1) > 0.6f  )
    {
      glPushMatrix();
      glColor3ub(255,255,255);
      position_stone_x = position ;
      glTranslatef(0 ,random_ball_position_y2 , 0.0f);
       //circle
      drawCircle(xpos2, 1.0f , .08f);

      glPopMatrix();

    }else{
        glPushMatrix();
      glColor3ub(136,0,27);
      position_stone_x = position ;
      glTranslatef(0 ,random_ball_position_y2 , 0.0f);
       //circle
      drawCircle(xpos2, 1.0f , .08f);

      glPopMatrix();
    }







    //random ball 3




    if( abs(random_ball_position_y3 - position_stone_y1) > 0.6f  )
    {
      glPushMatrix();
    glColor3ub(255,255,255);
    position_stone_x = position ;
    glTranslatef(0 , random_ball_position_y3 , 0.0f);
     //circle
    drawCircle(xpos3, 1.0f , .08f);

    glPopMatrix();

    }else{
        glPushMatrix();
    glColor3ub(63,72,204);
    position_stone_x = position ;
    glTranslatef(0 , random_ball_position_y3 , 0.0f);
     //circle
    drawCircle(xpos3, 1.0f , .08f);

    glPopMatrix();

    }








    //random ball 4


     if( abs(random_ball_position_y4 - position_stone_y1) > 0.6f  )
    {
      glPushMatrix();
      glColor3ub(255,255,255);

      position_stone_x = position ;
      glTranslatef(0 , random_ball_position_y4 , 0.0f);
       //circle
      drawCircle(xpos4, 1.0f , .08f);
      //cout << random_ball_position_y4 ;
      glPopMatrix();
    }else{
      glPushMatrix();
      glColor3ub(14,209,69);

      position_stone_x = position ;
      glTranslatef(0 , random_ball_position_y4 , 0.0f);
       //circle
      drawCircle(xpos4, 1.0f , .08f);
      //cout << random_ball_position_y4 ;
      glPopMatrix();
    }









   //ball that will hit the target 1

    glPushMatrix();
    glColor3ub(255,202,24);

    position_stone_x = position ;
    glTranslatef(position_stone_x ,position_stone_y1, 0.0f);
     //circle
    drawCircle(0.0f,-.225f , .08f);

    //cout << position_stone_y1 ;
    glPopMatrix();



    glPushMatrix();
    glColor3ub(255,202,24);

    position_stone_x = position ;
    glTranslatef(position_stone_x ,position_stone_y2, 0.0f);
     //circle
    drawCircle(0.0f,-.225f , .08f);

    glPopMatrix();


    glPushMatrix();
    glColor3ub(255,202,24);

    position_stone_x = position ;
    glTranslatef(position_stone_x ,position_stone_y3, 0.0f);
     //circle
    drawCircle(0.0f,-.225f , .08f);

    glPopMatrix();






    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    //drawCircle(-.00f,-.225f , .08f );


   //first quads

 glBegin(GL_QUADS);
      // glColor3ub(204,127,50);
      glColor4f(0.8,0.498,0.196, 1);
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
   glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
   glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
   glEnable( GL_BLEND );
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutSpecialFunc(catchKey);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
