
#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>

#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI  3.14159265358979323846
GLfloat position = 0.0f;
GLfloat speed = 0.05f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.05f;
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.05f;

void update(int value) {

    if(position <-3.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void update1(int value) {

    if(position1<-1.5)
        position1 = 1.0f;

    position1 -= speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}
void update2(int value) {

    if(position2<-2.0)
        position2 = 1.0f;

    position2 -= speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}
//void init() {
//   glClearColor(0.0f, 0.745f, 1.0f, 1.0f);
//}
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
//void handleMouse(int button, int state, int x, int y) {
//	if (button == GLUT_LEFT_BUTTON)
//	{
//    glutTimerFunc(100, update0, 0);
//			speed1 = 0.0f;
//			printf("clicked at (%d, %d)\n", x, y);
//
//	}
//
//		if (button == GLUT_RIGHT_BUTTON)
//	{
//	    glutTimerFunc(100, update2, 0);
//
//			speed1 += 0.1f;
//			printf("clicked at (%d, %d)\n", x, y);
//
//	}
//
//
//
//	glutPostRedisplay();
//}
void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:
//do something here

glutTimerFunc(100, update2, 0);
speed2+=0.1;

break;
case GLUT_KEY_DOWN:

  speed2=0;
break;
case GLUT_KEY_LEFT:
speed=0;

break;
case GLUT_KEY_RIGHT:

glutTimerFunc(100, update, 0);
speed+=0.1;
break;
}
glutPostRedisplay();
}


void day()
{
    glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.0f, 0.745f, 1.0f, 1.0f); // Set background color to black and opaque
	//glClear(GL_COLOR_BUFFER_BIT);
	//gluOrtho2D(-2.0,2.0,-2.0,2.0);
	   //Sun//
     glPushMatrix();
    //glTranslatef(6,0,0);
   glTranslatef(0.8, 0.8, 0.0);
   glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	////Sunrays////
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.8,0.6);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.7,0.6);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.9,0.6);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.8,1.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.9,1.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.7,1.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(1.2,1.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(1.0,0.8);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(1.0,0.6);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.5,0.7);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.5,0.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.5,0.9);
	glEnd();
	glBegin(GL_QUADS);//road
	glColor3f(0.698,0.745 , 0.7098);
	glVertex2f(-1.0,-.3);
	glVertex2f(1.0,-.3);
	glVertex2f(1.0,0.0);
	glVertex2f(-1.0,0.0);
	glEnd();

	glBegin(GL_QUADS);//water
	glColor3ub(65, 108, 198);
	glVertex2f(-1.0,-1.0);
	glVertex2f(1.0,-1.0);
	glVertex2f(1.0,-.3);
	glVertex2f(-1.0,-.3);
	glEnd();

	glBegin(GL_QUADS);// petronas tower lower left
	glColor3ub(25,0,51);
	glVertex2f(-.35,0.0);
	glVertex2f(-.30,0.0);
	glVertex2f(-.30,.30);
	glVertex2f(-.35,.30);
	glEnd();
	//glColor3ub(229,204,255);
	glBegin(GL_QUADS);// petronas tower lower left ,window
	glColor3ub(229,204,255);
	glVertex2f(-.335,0.10);
	glVertex2f(-.315,0.10);
	glVertex2f(-.315,.15);
	glVertex2f(-.335,.15);
	glEnd();
	glBegin(GL_QUADS);// petronas tower lower left ,window
	glColor3ub(229,204,255);
	glVertex2f(-.335,0.18);
	glVertex2f(-.315,0.18);
	glVertex2f(-.315,.23);
	glVertex2f(-.335,.23);
	glEnd();



	glBegin(GL_QUADS);// petronas tower lower right
	glColor3ub(25,0,51);
	glVertex2f(-.22,0.0);
	glVertex2f(-.17,0.0);
	glVertex2f(-.17,.30);
	glVertex2f(-.22,.30);
	glEnd();
	glBegin(GL_QUADS);// petronas tower lower right ,window
	glColor3ub(229,204,255);
	glVertex2f(-.205,0.10);
	glVertex2f(-.185,0.10);
	glVertex2f(-.185,.15);
	glVertex2f(-.205,.15);
	glEnd();
	glBegin(GL_QUADS);// petronas tower lower right ,window
	glColor3ub(229,204,255);
	glVertex2f(-.205,0.18);
	glVertex2f(-.185,0.18);
	glVertex2f(-.185,.23);
	glVertex2f(-.205,.23);
	glEnd();

	glBegin(GL_QUADS);// petronas tower lower middle
	glColor3ub(25,0,51);
	glVertex2f(-.30,.15);
	glVertex2f(-.22,0.15);
	glVertex2f(-.22,.20);
	glVertex2f(-.30,.20);
	glEnd();


	glBegin(GL_QUADS);// petronas tower upper left
	glColor3ub(25,0,51);
	glVertex2f(-.345,.30);
	glVertex2f(-.305,0.30);
	glVertex2f(-.305,.45);
	glVertex2f(-.345,.45);
	glEnd();

	glBegin(GL_QUADS);// petronas tower upper right
	glColor3ub(25,0,51);
	glVertex2f(-.215,.30);
	glVertex2f(-.175,0.30);
	glVertex2f(-.175,.45);
	glVertex2f(-.215,.45);
	glEnd();


	glBegin(GL_TRIANGLES);//petronas left triangle
	glColor3ub(25,0,51);
	glVertex2f(-.345,.45);
	glVertex2f(-.305,.45);
	glVertex2f(-.325,.75);
	glEnd();

	glBegin(GL_TRIANGLES);//petronas right triangle
	glColor3ub(25,0,51);
	glVertex2f(-.215,.45);
	glVertex2f(-.175,.45);
	glVertex2f(-.195,.75);
	glEnd();



//	glBegin(GL_LINES);
//	glColor3ub(25,0,51);
//	glVertex2f(-.30,.10);
//	glVertex2f(-.27,.15);
//	glEnd();






	GLfloat  x=-.97f;GLfloat y=0.88; GLfloat radius =.035f;       //cloud1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(61, 131, 231);
    int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	  x=-.92f; y=0.88;  radius =.055f;       //cloud1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(61, 131, 231);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	 x=-.86f; y=0.88;  radius =.035f;       //cloud1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(61, 131, 231);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();



	 x=-.57f; y=0.88;  radius =.035f;       //cloud2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	 x=-.52f; y=0.88;  radius =.055f;       //cloud2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=-.46f; y=0.88;  radius =.035f;       //cloud2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();



	x=.46f; y=0.88;  radius =.035f;       //cloud3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(61, 131, 231);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	 x=.52f; y=0.88;  radius =.055f;       //cloud3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(61, 131, 231);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=.57f; y=0.88;  radius =.035f;       //cloud3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(61, 131, 231);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

//	x=-.68f; y=0.75;  radius =.075f;       //moon
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 255, 0);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
	glTranslatef(.50,.30,0.0);
	glScalef(0.5,0.5,0.0);


	glBegin(GL_QUADS);//hot air baloon
	glColor3ub(76, 190, 28);
	glVertex2f(.18,.2);
	glVertex2f(.25,.2);
	glVertex2f(.25,.25);
	glVertex2f(.18,.25);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(.19,.25);
	glVertex2f(.19,.30);
	glVertex2f(.24,.25);
	glVertex2f(.24,.30);
	glEnd();


	x=.215f; y=0.35;  radius =.052f;       //balloonn
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(124, 72, 158);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	glLoadIdentity();






//	glBegin(GL_QUADS);//car
//	glColor3ub(0,153,76);
//	glVertex2f(.78,-.23);
//	glVertex2f(.91,-.23);
//	glVertex2f(.90,-.19);
//	glVertex2f(.79,-.19);
//	glEnd();
//
//
//	glBegin(GL_QUADS);
//	glColor3ub(0,153,76);
//	glVertex2f(.75,-.27);
//	glVertex2f(.93,-.27);
//	glVertex2f(.93,-.23);
//	glVertex2f(.75,-.23);
//	glEnd();
//
//
//	x=.78f; y=-0.28;  radius =.02f;       //first wheel
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(0, 102, 0);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//
//	x=.88f; y=-0.28;  radius =.02f;       //second wheel
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(0, 102, 0);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//

    glBegin(GL_QUADS);//1st building
	glColor3ub(64,64,64);
	glVertex2f(-1.0,0.0);
	glVertex2f(-.92,0.0);
	glVertex2f(-.92,.2);
	glVertex2f(-1.0,.2);
	glEnd();

	glBegin(GL_QUADS);//1st building window
	glColor3ub(229,204,255);
	glVertex2f(-.96,0.07);
	glVertex2f(-.94,0.07);
	glVertex2f(-.94,.1);
	glVertex2f(-.96,.1);
	glEnd();
	glBegin(GL_QUADS);//1st building window
	glColor3ub(229,204,255);
	glVertex2f(-.96,0.12);
	glVertex2f(-.94,0.12);
	glVertex2f(-.94,.15);
	glVertex2f(-.96,.15);
	glEnd();


	glBegin(GL_QUADS);//2nd building
	glColor3ub(64,64,64);
	glVertex2f(-.91,0.0);
	glVertex2f(-.85,0.0);
	glVertex2f(-.85,.25);
	glVertex2f(-.91,.25);
	glEnd();

	glBegin(GL_QUADS);//2nd building window
	glColor3ub(229,204,255);
	glVertex2f(-.89,0.07);
	glVertex2f(-.87,0.07);
	glVertex2f(-.87,.1);
	glVertex2f(-.89,.1);
	glEnd();

	glBegin(GL_QUADS);//2nd building window
	glColor3ub(229,204,255);
	glVertex2f(-.89,0.12);
	glVertex2f(-.87,0.12);
	glVertex2f(-.87,.15);
	glVertex2f(-.89,.15);
	glEnd();

	glBegin(GL_QUADS);//2nd building window
	glColor3ub(229,204,255);
	glVertex2f(-.89,0.18);
	glVertex2f(-.87,0.18);
	glVertex2f(-.87,.21);
	glVertex2f(-.89,.21);
	glEnd();

	glBegin(GL_QUADS);//watch tower
	glColor3ub(0,102,51);
	glVertex2f(-.83,0.0);
	glVertex2f(-.80,0.0);
	glVertex2f(-.80,.15);
	glVertex2f(-.83,.15);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(64,64,64);
	glVertex2f(-.83,.15);
	glVertex2f(-.80,.15);
	glVertex2f(-.815,.25);
	glEnd();

	x=-.815f; y=0.12;  radius =.01f;       //watch
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//3rd building
	glColor3ub(64,64,64);
	glVertex2f(-.79,0.0);
	glVertex2f(-.74,0.0);
	glVertex2f(-.74,.25);
	glVertex2f(-.79,.15);
	glEnd();

	glBegin(GL_QUADS);//3rd building window
	glColor3ub(229,204,255);
	glVertex2f(-.77,0.05);
	glVertex2f(-.75,0.05);
	glVertex2f(-.75,.08);
	glVertex2f(-.77,.08);
	glEnd();

	glBegin(GL_QUADS);//3rd building window
	glColor3ub(229,204,255);
	glVertex2f(-.77,0.09);
	glVertex2f(-.75,0.09);
	glVertex2f(-.75,.12);
	glVertex2f(-.77,.12);
	glEnd();
glPushMatrix();
glTranslatef(position1,0.0,0.0);
	glBegin(GL_TRIANGLES);//plane front
	glColor3ub(96,96,96);
	glVertex2f(.38,.65);
	glVertex2f(.40,.62);
	glVertex2f(.40,.68);
	glEnd();

	glBegin(GL_POLYGON);//plane body
	glColor3ub(0,153,153);
	glVertex2f(.40,.62);
	glVertex2f(.49,.62);
	glVertex2f(.52,.71);
	glVertex2f(.50,.71);
	glVertex2f(.49,.68);
	glVertex2f(.40,.68);
	glEnd();


	glBegin(GL_QUADS);//plane wing upper
	glColor3ub(0,153,153);
	glVertex2f(.44,.68);
	glVertex2f(.46,.68);
	glVertex2f(.47,.71);
	glVertex2f(.45,.71);
	glEnd();

	glBegin(GL_QUADS);//plane wing lower
	glColor3ub(0,153,153);
	glVertex2f(.44,.62);
	glVertex2f(.46,.62);
	glVertex2f(.47,.58);
	glVertex2f(.45,.58);
	glEnd();
	glPopMatrix();



	glBegin(GL_QUADS);//  left 1st building
	glColor3ub(64,64,64);
	glVertex2f(-.42,0.0);
	glVertex2f(-.37,0.0);
	glVertex2f(-.37,.30);
	glVertex2f(-.42,.30);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-.42,0.30);
	glVertex2f(-.37,0.30);
	glEnd();
	glBegin(GL_QUADS);//  left 1st building window
	glColor3ub(229,204,255);
	glVertex2f(-.405,0.10);
	glVertex2f(-.385,0.10);
	glVertex2f(-.385,.15);
	glVertex2f(-.405,.15);
	glEnd();
	glBegin(GL_QUADS);//  left 1st building window
	glColor3ub(229,204,255);
	glVertex2f(-.405,0.18);
	glVertex2f(-.385,0.18);
	glVertex2f(-.385,.23);
	glVertex2f(-.405,.23);
	glEnd();


	glBegin(GL_TRIANGLES);//left triangle
	glColor3ub(64,64,64);
	glVertex2f(-.42,.30);
	glVertex2f(-.37,.30);
	glVertex2f(-.395,.48);
	glEnd();


	glBegin(GL_QUADS);//  left 2nd building(left)
	glColor3ub(64,64,64);
	glVertex2f(-.58,0.0);
	glVertex2f(-.53,0.0);
	glVertex2f(-.53,.30);
	glVertex2f(-.58,.28);
	glEnd();
	glBegin(GL_QUADS);//  left 2nd building(left) window
	glColor3ub(229,204,255);
	glVertex2f(-.565,0.10);
	glVertex2f(-.545,0.10);
	glVertex2f(-.545,.15);
	glVertex2f(-.565,.15);
	glEnd();
	glBegin(GL_QUADS);//  left 2nd building(left) window
	glColor3ub(229,204,255);
	glVertex2f(-.565,0.18);
	glVertex2f(-.545,0.18);
	glVertex2f(-.545,.23);
	glVertex2f(-.565,.23);
	glEnd();

	glBegin(GL_QUADS);//  left 2nd building(left)up
	glColor3ub(64,64,64);
	glVertex2f(-.57,0.284);
	glVertex2f(-.53,0.30);
	glVertex2f(-.53,.35);
	glVertex2f(-.57,.33);
	glEnd();


	glBegin(GL_QUADS);//  left 2nd building(right)
	glColor3ub(64,64,64);
	glVertex2f(-.53,0.0);
	glVertex2f(-.48,0.0);
	glVertex2f(-.48,.28);
	glVertex2f(-.53,.30);
	glEnd();
	glBegin(GL_QUADS);//  left 2nd building(right) window
	glColor3ub(229,204,255);
	glVertex2f(-.515,0.10);
	glVertex2f(-.495,0.10);
	glVertex2f(-.495,.15);
	glVertex2f(-.515,.15);
	glEnd();
	glBegin(GL_QUADS);//  left 2nd building(right) window
	glColor3ub(229,204,255);
	glVertex2f(-.515,0.18);
	glVertex2f(-.495,0.18);
	glVertex2f(-.495,.23);
	glVertex2f(-.515,.23);
	glEnd();
	glBegin(GL_QUADS);//  left 2nd building(right)up
	glColor3ub(64,64,64);
	glVertex2f(-.53,0.30);
	glVertex2f(-.49,0.284);
	glVertex2f(-.49,.33);
	glVertex2f(-.53,.35);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-.53,0.0);
	glVertex2f(-.53,0.34);
	glEnd();



	glBegin(GL_QUADS);//  right 1nd building
	glColor3ub(64,64,64);
	glVertex2f(0.0,0.0);
	glVertex2f(.05,0.0);
	glVertex2f(.05,.20);
	glVertex2f(0.0,.17);
	glEnd();
	glBegin(GL_QUADS);//  right 1nd building window
	glColor3ub(229,204,255);
	glVertex2f(0.0205,0.10);
	glVertex2f(.045,0.10);
	glVertex2f(.045,.15);
	glVertex2f(0.0205,.15);
	glEnd();
//	glBegin(GL_LINES);
//	glColor3ub(255,255,255);
//	glVertex2f(.05,0.0);
//	glVertex2f(0.05,.20);
//	glEnd();

	glBegin(GL_QUADS);//  right 1nd building
	glColor3ub(64,64,64);
	glVertex2f(0.05,0.0);
	glVertex2f(.10,0.0);
	glVertex2f(.10,.20);
	glVertex2f(0.05,.20);
	glEnd();
	glBegin(GL_QUADS);//  right 1nd building window
	glColor3ub(229,204,255);
	glVertex2f(0.075,0.07);
	glVertex2f(.095,0.07);
	glVertex2f(.095,.12);
	glVertex2f(0.075,.12);
	glEnd();
	glBegin(GL_QUADS);//  right 1nd building window
	glColor3ub(229,204,255);
	glVertex2f(0.075,0.15);
	glVertex2f(.095,0.15);
	glVertex2f(.095,.20);
	glVertex2f(0.075,.20);
	glEnd();
//	glBegin(GL_LINES);
//	glColor3ub(255,255,255);
//	glVertex2f(.10,0.0);
//	glVertex2f(0.10,.20);
//	glEnd();

	glBegin(GL_QUADS);//  right 1nd building
	glColor3ub(64,64,64);
	glVertex2f(0.10,0.0);
	glVertex2f(.15,0.0);
	glVertex2f(.15,.20);
	glVertex2f(0.10,.20);
	glEnd();

//	glBegin(GL_LINES);
//	glColor3ub(255,255,255);
//	glVertex2f(.15,0.0);
//	glVertex2f(0.15,.20);
//	glEnd();

	glBegin(GL_QUADS);//  right 1nd building
	glColor3ub(64,64,64);
	glVertex2f(0.15,0.0);
	glVertex2f(.20,0.0);
	glVertex2f(.20,.17);
	glVertex2f(0.15,.20);
	glEnd();



	glBegin(GL_QUADS);// upper right 1nd building
	glColor3ub(64,64,64);
	glVertex2f(0.05,0.20);
	glVertex2f(.10,0.20);
	glVertex2f(.10,.38);
	glVertex2f(0.05,.38);
	glEnd();

	glBegin(GL_QUADS);// upper right 1nd building
	glColor3ub(64,64,64);
	glVertex2f(0.10,0.20);
	glVertex2f(.15,0.20);
	glVertex2f(.15,.38);
	glVertex2f(0.10,.38);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(.10,0.20);
	glVertex2f(0.10,.38);
	glEnd();
//	glBegin(GL_LINES);
//	glColor3ub(255,255,255);
//	glVertex2f(.05,0.20);
//	glVertex2f(0.15,.20);
//	glEnd();
    glBegin(GL_QUADS);//  right 3rd building
	glColor3ub(64,64,64);
	glVertex2f(0.25,0.0);
	glVertex2f(.30,0.0);
	glVertex2f(.30,.20);
	glVertex2f(0.25,.20);
	glEnd();
	glBegin(GL_QUADS);//  right 3rd building window
	glColor3ub(229,204,255);
	glVertex2f(0.265,0.10);
	glVertex2f(.285,0.10);
	glVertex2f(.285,.15);
	glVertex2f(0.265,.15);
	glEnd();
	glBegin(GL_QUADS);//  right 3rd building window
	glColor3ub(229,204,255);
	glVertex2f(0.265,0.05);
	glVertex2f(.285,0.05);
	glVertex2f(.285,.08);
	glVertex2f(0.265,.08);
	glEnd();


	glBegin(GL_QUADS);//  right 4th building
	glColor3ub(64,64,64);
	glVertex2f(0.35,0.0);
	glVertex2f(.40,0.0);
	glVertex2f(.40,.40);
	glVertex2f(0.35,.35);
	glEnd();
	glBegin(GL_QUADS);//  right 4th building window
	glColor3ub(229,204,255);
	glVertex2f(0.365,0.10);
	glVertex2f(.385,0.10);
	glVertex2f(.385,.15);
	glVertex2f(0.365,.15);
	glEnd();
	glBegin(GL_QUADS);//  right 4th building window
	glColor3ub(229,204,255);
	glVertex2f(0.365,0.18);
	glVertex2f(.385,0.18);
	glVertex2f(.385,.23);
	glVertex2f(0.365,.23);
	glEnd();

	glBegin(GL_QUADS);//  right 5th building
	glColor3ub(64,64,64);
	glVertex2f(0.45,0.0);
	glVertex2f(.50,0.0);
	glVertex2f(.50,.25);
	glVertex2f(0.45,.17);
	glEnd();
	glBegin(GL_QUADS);//  right 5th building window
	glColor3ub(229,204,255);
	glVertex2f(0.465,0.10);
	glVertex2f(.485,0.10);
	glVertex2f(.485,.12);
	glVertex2f(0.465,.12);
	glEnd();
	glBegin(GL_QUADS);//  right 5th building window
	glColor3ub(229,204,255);
	glVertex2f(0.465,0.14);
	glVertex2f(.485,0.14);
	glVertex2f(.485,.16);
	glVertex2f(0.465,.16);
	glEnd();

	glBegin(GL_QUADS);//  tree 1
	glColor3ub(64,64,64);
	glVertex2f(0.80,0.0);
	glVertex2f(.81,0.0);
	glVertex2f(.81,.10);
	glVertex2f(0.80,.10);
	glEnd();

	x=.805f; y=0.11;  radius =.03f;       //tree1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 152, 49);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();



		glBegin(GL_QUADS);//  tree 2
	glColor3ub(64,64,64);
	glVertex2f(0.83,0.0);
	glVertex2f(.84,0.0);
	glVertex2f(.84,.07);
	glVertex2f(0.83,.07);
	glEnd();
	x=.835f; y=0.07;  radius =.02f;       //tree2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 152, 49);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//  tree 3
	glColor3ub(64,64,64);
	glVertex2f(0.85,0.0);
	glVertex2f(.86,0.0);
	glVertex2f(.86,.07);
	glVertex2f(0.85,.07);
	glEnd();
	x=.855f; y=0.08;  radius =.02f;       //tree3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 152, 49);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//  tree 4
	glColor3ub(64,64,64);
	glVertex2f(0.89,0.0);
	glVertex2f(.90,0.0);
	glVertex2f(.90,.07);
	glVertex2f(0.89,.07);
	glEnd();
	x=.895f; y=0.08;  radius =.03f;       //tree4
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 152, 49);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	glBegin(GL_QUADS);//  tree 5
	glColor3ub(64,64,64);
	glVertex2f(0.92,0.0);
	glVertex2f(.93,0.0);
	glVertex2f(.93,.07);
	glVertex2f(0.92,.07);
	glEnd();
	x=.925f; y=0.08;  radius =.03f;       //tree5
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 152, 49);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//  tree -1
	glColor3ub(64,64,64);
	glVertex2f(-0.72,0.0);
	glVertex2f(-.71,0.0);
	glVertex2f(-.71,.04);
	glVertex2f(-0.72,.04);
	glEnd();
	x=-.7155f; y=0.05;  radius =.015f;       //tree-1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 152, 49);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//  tree -2
	glColor3ub(64,64,64);
	glVertex2f(-0.69,0.0);
	glVertex2f(-.68,0.0);
	glVertex2f(-.68,.04);
	glVertex2f(-0.69,.04);
	glEnd();
	x=-.685f; y=0.05;  radius =.020f;       //tree-2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 152, 49);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//  tree -3
	glColor3ub(64,64,64);
	glVertex2f(-0.67,0.0);
	glVertex2f(-.66,0.0);
	glVertex2f(-.66,.06);
	glVertex2f(-0.67,.06);
	glEnd();
	x=-.665f; y=0.07;  radius =.025f;       //tree-3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 152, 49);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//  tree -4
	glColor3ub(64,64,64);
	glVertex2f(-0.64,0.0);
	glVertex2f(-.63,0.0);
	glVertex2f(-.63,.04);
	glVertex2f(-0.64,.04);
	glEnd();
	x=-.635f; y=0.05;  radius =.020f;       //tree-4
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 152, 49);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

//	glBegin(GL_QUADS);//boat deck
//	glColor3ub(0, 102, 0);
//	glVertex2f(.55,-.6);
//	glVertex2f(.65,-.7);
//	glVertex2f(.80,-.7);
//	glVertex2f(.90,-.6);
//	glEnd();

//    glTranslatef(.45,-.8,0.0);//ship 1
//    glScalef(0.55,0.55,0.0);
//
//    glBegin(GL_QUADS);
//	glColor3ub(255,255,0);
//	glVertex2f(.2,.2);
//	glVertex2f(.35,-.1);
//	glVertex2f(.6,-.1);
//	glVertex2f(.75,.2);
//	glEnd();
//	glBegin(GL_QUADS);
//	glColor3ub(51,51,255);
//	glVertex2f(.42,.2);
//	glVertex2f(.68,.2);
//	glVertex2f(.68,.3);
//	glVertex2f(.42,.3);
//	glEnd();
//
//
//
//	 x=.48f; y=0.25;  radius =.025f;       //first window
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 204, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//	  x=.58f; y=0.25;  radius =.025f;       //second window
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 204, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//	glBegin(GL_QUADS);
//	glColor3ub(255,255,0);
//	glVertex2f(.50,.3);
//	glVertex2f(.68,.3);
//	glVertex2f(.68,.35);
//	glVertex2f(.50,.35);
//	glEnd();
//
//	glBegin(GL_QUADS);
//	glColor3ub(204,102,0);
//	glVertex2f(.68,.2);
//	glVertex2f(.75,.2);
//	glVertex2f(.75,.50);
//	glVertex2f(.68,.50);
//	glEnd();




glLoadIdentity();




    glTranslatef(.30,0.0,0.0);
    glBegin(GL_QUADS);//  right 1st building
	glColor3ub(64,64,64);
	glVertex2f(-.42,0.0);
	glVertex2f(-.37,0.0);
	glVertex2f(-.37,.30);
	glVertex2f(-.42,.30);
	glEnd();
	glBegin(GL_QUADS);//  right 1st building window
	glColor3ub(229,204,255);
	glVertex2f(-.405,0.10);
	glVertex2f(-.385,0.10);
	glVertex2f(-.385,.15);
	glVertex2f(-.405,.15);
	glEnd();
	glBegin(GL_QUADS);//  right 1st building window
	glColor3ub(229,204,255);
	glVertex2f(-.405,0.18);
	glVertex2f(-.385,0.18);
	glVertex2f(-.385,.23);
	glVertex2f(-.405,.23);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-.42,0.30);
	glVertex2f(-.37,0.30);
	glEnd();


	glBegin(GL_TRIANGLES);//left triangle
	glColor3ub(64,64,64);
	glVertex2f(-.42,.30);
	glVertex2f(-.37,.30);
	glVertex2f(-.395,.48);
	glEnd();
	glLoadIdentity();

	glTranslatef(.35,0.0,0.0);
	glBegin(GL_QUADS);//  right 3nd building
	glColor3ub(64,64,64);
	glVertex2f(0.35,0.0);
	glVertex2f(.40,0.0);
	glVertex2f(.40,.40);
	glVertex2f(0.35,.45);
	glEnd();
	glLoadIdentity();

	glBegin(GL_QUADS);//road black
	glColor3ub(32,32,32);
	glVertex2f(-1.0,-0.0);
	glVertex2f(-1.0,-.15);
	glVertex2f(1.0,-.15);
	glVertex2f(1.0,-0.0);
	glEnd();

	glBegin(GL_QUADS);//road black
	glColor3ub(32,32,32);
	glVertex2f(-1.0,-0.18);
	glVertex2f(-1.0,-.35);
	glVertex2f(1.0,-.35);
	glVertex2f(1.0,-0.18);
	glEnd();

	 ////Border///

     glBegin(GL_POLYGON);
     glColor3f(0.2,0.098 , 0.0);
     glVertex2f(-1.0f, -0.33f);
     glVertex2f(1.0f, -0.33f);
     glVertex2f(1.0f, -0.416f);
     glVertex2f(-1.0f, -0.416f);
       glEnd();
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.0 , 0.0);
     glVertex2f(-1.0f, -0.35f);
     glVertex2f(1.0f, -0.35f);
     glVertex2f(1.0f, -0.33f);
     glVertex2f(-1.0f, -0.33f);
     glEnd();



glPushMatrix();
glTranslatef(position2,0.0,0.0);

    glBegin(GL_POLYGON);//boat2
     glColor3f(0.4,0.0 , 0.0);
     glVertex2f(-0.833f, -0.66f);
     glVertex2f(-0.33f, -0.66f);
     glVertex2f(-0.25f, -0.583f);
     glVertex2f(-0.916f, -0.583f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0 , 0.4);
     glVertex2f(-0.833f, -0.583f);
     glVertex2f(-0.33f, -0.583f);
     glVertex2f(-0.416f, -0.5f);
     glVertex2f(-0.75f, -0.5f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.4 , 0.698);
     glVertex2f(-0.66f, -0.5f);
     glVertex2f(-0.5f, -0.5f);
     glVertex2f(-0.583f, -0.33f);
     glEnd();
     glBegin(GL_LINES);
     glColor3f(0.0,0.0 , 0.0);
     glVertex2f(-0.583f, -0.33f);
     glVertex2f(-0.583f, -0.166f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.583f, -0.283);
     glVertex2f(-0.55f, -0.25f);
     glVertex2f(-0.583f, -0.2166f);
     glEnd();

     ////Boatwindows//
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.75f,-0.566f);
     glVertex2f(-0.7f,-0.566f);
     glVertex2f(-0.7,-0.516f);
     glVertex2f(-0.75f,-0.516f);
     glEnd();
          glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.633f,-0.566f);
     glVertex2f(-0.583f,-0.566f);
     glVertex2f(-0.583,-0.516f);
     glVertex2f(-0.633f,-0.516f);
     glEnd();
          glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.516f,-0.566f);
     glVertex2f(-0.46f,-0.566f);
     glVertex2f(-0.46f,-0.516f);
     glVertex2f(-0.516f,-0.516f);
     glEnd();
 glBegin(GL_POLYGON);
     glColor3f(0.0,0.56 , 0.698);
     glVertex2f(-0.833f,-0.6833f);
     glVertex2f(-0.33f,-0.6833f);
     glVertex2f(-0.33f,-0.66f);
     glVertex2f(-0.833f,-0.66f);
     glEnd();

     glPopMatrix();

      ////Bus///
      glPushMatrix();

      glTranslatef(.25,.00,0.0);
glScalef(0.5,0.5,0.0);
glTranslatef(position,0.0,0.0);
  glBegin(GL_POLYGON);
         glColor3f(1.0,0.0,0.0);
        glVertex2f(0.5f, -0.166f);
        glVertex2f(1.0f, -0.166f);
         glVertex2f(1.0f, 0.0f);
          glVertex2f(0.55f, 0.0f);
          glVertex2f(0.5f, -0.033f);
	glEnd();
	  glBegin(GL_POLYGON);
         glColor3f(1.0,1.0,0.0);
        glVertex2f(0.5f, -0.1f);
        glVertex2f(0.5166f, -0.1f);
         glVertex2f(0.5166f, -0.066f);
          glVertex2f(0.5f, -0.066f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.0,0.0,0.0);
        glVertex2f(0.55f, 0.0f);
        glVertex2f(1.0f, 0.0f);
         glVertex2f(1.0f, 0.116f);
          glVertex2f(0.55f, 0.116f);
	glEnd();

	////Buswindows///
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.5833f, 0.016f);
        glVertex2f(0.633f, 0.016f);
         glVertex2f(0.633f, 0.1f);
          glVertex2f(0.5833f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.65f, 0.016f);
        glVertex2f(0.7f, 0.016f);
         glVertex2f(0.7f, 0.1f);
          glVertex2f(0.65f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.716f, 0.016f);
        glVertex2f(0.766f, 0.016f);
         glVertex2f(0.766f, 0.1f);
          glVertex2f(0.716f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.783f, 0.016f);
        glVertex2f(0.833f, 0.016f);
         glVertex2f(0.833f, 0.1f);
          glVertex2f(0.783f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.85f, 0.016f);
        glVertex2f(0.9f, 0.016f);
         glVertex2f(0.9f, 0.1f);
          glVertex2f(0.85f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.916f, 0.016f);
        glVertex2f(0.966f, 0.016f);
         glVertex2f(0.966f, 0.1f);
          glVertex2f(0.916f, 0.1f);
	glEnd();

x=.58f; y=-0.18;  radius =.025f;       //first wheel
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=.88f; y=-0.18;  radius =.025f;       //second wheel
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();





glLoadIdentity();
glPopMatrix();


//bus2
glPushMatrix();

 glTranslatef(.05,-.20,0.0);
glScalef(0.5,0.5,0.0);
glTranslatef(position,0.0,0.0);
  glBegin(GL_POLYGON);
         glColor3f(1.0,0.0,0.0);
        glVertex2f(0.5f, -0.166f);
        glVertex2f(1.0f, -0.166f);
         glVertex2f(1.0f, 0.0f);
          glVertex2f(0.55f, 0.0f);
          glVertex2f(0.5f, -0.033f);
	glEnd();
	  glBegin(GL_POLYGON);
         glColor3f(1.0,1.0,0.0);
        glVertex2f(0.5f, -0.1f);
        glVertex2f(0.5166f, -0.1f);
         glVertex2f(0.5166f, -0.066f);
          glVertex2f(0.5f, -0.066f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.0,0.0,0.0);
        glVertex2f(0.55f, 0.0f);
        glVertex2f(1.0f, 0.0f);
         glVertex2f(1.0f, 0.116f);
          glVertex2f(0.55f, 0.116f);
	glEnd();

	////Buswindows///
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.5833f, 0.016f);
        glVertex2f(0.633f, 0.016f);
         glVertex2f(0.633f, 0.1f);
          glVertex2f(0.5833f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.65f, 0.016f);
        glVertex2f(0.7f, 0.016f);
         glVertex2f(0.7f, 0.1f);
          glVertex2f(0.65f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.716f, 0.016f);
        glVertex2f(0.766f, 0.016f);
         glVertex2f(0.766f, 0.1f);
          glVertex2f(0.716f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.783f, 0.016f);
        glVertex2f(0.833f, 0.016f);
         glVertex2f(0.833f, 0.1f);
          glVertex2f(0.783f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.85f, 0.016f);
        glVertex2f(0.9f, 0.016f);
         glVertex2f(0.9f, 0.1f);
          glVertex2f(0.85f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.916f, 0.016f);
        glVertex2f(0.966f, 0.016f);
         glVertex2f(0.966f, 0.1f);
          glVertex2f(0.916f, 0.1f);
	glEnd();

x=.58f; y=-0.18;  radius =.025f;       //first wheel
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=.88f; y=-0.18;  radius =.025f;       //second wheel
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glPopMatrix();





glFlush();
glutSwapBuffers();

}
void night()
{
    glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	//glClear(GL_COLOR_BUFFER_BIT);
	//gluOrtho2D(-2.0,2.0,-2.0,2.0);
	glBegin(GL_QUADS);//road
	glColor3f(1.0,1.0,1.0);
	glVertex2f(-1.0,-.3);
	glVertex2f(1.0,-.3);
	glVertex2f(1.0,0.0);
	glVertex2f(-1.0,0.0);
	glEnd();

//glEnable(GL_LIGHTING);//Enable Light Effect
//
//  GLfloat global_ambient2[] = {0,0,0.5, 0.1};//ambient RGBA intensity of light
//  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);

	glBegin(GL_QUADS);//water
	glColor3ub(12, 30, 97);
	glVertex2f(-1.0,-1.0);
	glVertex2f(1.0,-1.0);
	glVertex2f(1.0,-.3);
	glVertex2f(-1.0,-.3);
	glEnd();
	//glDisable(GL_LIGHTING);

	glBegin(GL_QUADS);// petronas tower lower left
	glColor3ub(25,0,51);
	glVertex2f(-.35,0.0);
	glVertex2f(-.30,0.0);
	glVertex2f(-.30,.30);
	glVertex2f(-.35,.30);
	glEnd();
	//glColor3ub(229,204,255);
	glBegin(GL_QUADS);// petronas tower lower left ,window
	glColor3ub(229,204,255);
	glVertex2f(-.335,0.10);
	glVertex2f(-.315,0.10);
	glVertex2f(-.315,.15);
	glVertex2f(-.335,.15);
	glEnd();
	glBegin(GL_QUADS);// petronas tower lower left ,window
	glColor3ub(229,204,255);
	glVertex2f(-.335,0.18);
	glVertex2f(-.315,0.18);
	glVertex2f(-.315,.23);
	glVertex2f(-.335,.23);
	glEnd();



	glBegin(GL_QUADS);// petronas tower lower right
	glColor3ub(25,0,51);
	glVertex2f(-.22,0.0);
	glVertex2f(-.17,0.0);
	glVertex2f(-.17,.30);
	glVertex2f(-.22,.30);
	glEnd();
	glBegin(GL_QUADS);// petronas tower lower right ,window
	glColor3ub(229,204,255);
	glVertex2f(-.205,0.10);
	glVertex2f(-.185,0.10);
	glVertex2f(-.185,.15);
	glVertex2f(-.205,.15);
	glEnd();
	glBegin(GL_QUADS);// petronas tower lower right ,window
	glColor3ub(229,204,255);
	glVertex2f(-.205,0.18);
	glVertex2f(-.185,0.18);
	glVertex2f(-.185,.23);
	glVertex2f(-.205,.23);
	glEnd();

	glBegin(GL_QUADS);// petronas tower lower middle
	glColor3ub(25,0,51);
	glVertex2f(-.30,.15);
	glVertex2f(-.22,0.15);
	glVertex2f(-.22,.20);
	glVertex2f(-.30,.20);
	glEnd();


	glBegin(GL_QUADS);// petronas tower upper left
	glColor3ub(25,0,51);
	glVertex2f(-.345,.30);
	glVertex2f(-.305,0.30);
	glVertex2f(-.305,.45);
	glVertex2f(-.345,.45);
	glEnd();

	glBegin(GL_QUADS);// petronas tower upper right
	glColor3ub(25,0,51);
	glVertex2f(-.215,.30);
	glVertex2f(-.175,0.30);
	glVertex2f(-.175,.45);
	glVertex2f(-.215,.45);
	glEnd();


	glBegin(GL_TRIANGLES);//petronas left triangle
	glColor3ub(25,0,51);
	glVertex2f(-.345,.45);
	glVertex2f(-.305,.45);
	glVertex2f(-.325,.75);
	glEnd();

	glBegin(GL_TRIANGLES);//petronas right triangle
	glColor3ub(25,0,51);
	glVertex2f(-.215,.45);
	glVertex2f(-.175,.45);
	glVertex2f(-.195,.75);
	glEnd();



//	glBegin(GL_LINES);
//	glColor3ub(25,0,51);
//	glVertex2f(-.30,.10);
//	glVertex2f(-.27,.15);
//	glEnd();






//	GLfloat  x=-.97f;GLfloat y=0.88; GLfloat radius =.035f;       //cloud1
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 255, 255);
//    int i;
//	int lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	GLfloat twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//	  x=-.92f; y=0.88;  radius =.055f;       //cloud1
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 255, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//
//	 x=-.86f; y=0.88;  radius =.035f;       //cloud1
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 255, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//
//
//	 x=-.57f; y=0.88;  radius =.035f;       //cloud2
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 255, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//
//	 x=-.52f; y=0.88;  radius =.055f;       //cloud2
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 255, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//	x=-.46f; y=0.88;  radius =.035f;       //cloud2
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 255, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//
//
//	x=.46f; y=0.88;  radius =.035f;       //cloud3
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 255, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//
//	 x=.52f; y=0.88;  radius =.055f;       //cloud3
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 255, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//	x=.57f; y=0.88;  radius =.035f;       //cloud3
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 255, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
glTranslatef(-.75,.68,0.0);//star 1(from left)
glScalef(0.2,0.2,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(-.70,.74,0.0);//star 2(from left)
glScalef(0.1,0.1,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(-.60,.80,0.0);//star 3(from left)
glScalef(0.1,0.1,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(.60,.80,0.0);//star 4(from left)
glScalef(0.1,0.1,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(.75,.85,0.0);//star 5(from left)
glScalef(0.15,0.15,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(.75,.85,0.0);//star 5(from left)
glScalef(0.15,0.15,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(.15,.71,0.0);//star 5(from left)
glScalef(0.15,0.15,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(.25,.73,0.0);//star 5(from left)
glScalef(0.15,0.15,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(.45,.78,0.0);//star 5(from left)
glScalef(0.15,0.15,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(-.35,.78,0.0);//star 5(from left)
glScalef(0.15,0.15,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(-.25,.80,0.0);//star 5(from left)
glScalef(0.15,0.15,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(-.45,.81,0.0);//star 5(from left)
glScalef(0.15,0.15,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(.0,.81,0.0);//star 5(from left)
glScalef(0.15,0.15,0.0);
glBegin(GL_TRIANGLES);

	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.98);
	glVertex2f(-.89,.88);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,102);
	glVertex2f(-.99,.88);
	glVertex2f(-.94,.80);
	glVertex2f(-.89,.88);
	glEnd();
	glLoadIdentity();




	GLfloat x=-.68f; GLfloat y=0.75; GLfloat radius =.075f;       //moon
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 102);
    int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
//	glTranslatef(.50,.30,0.0);
//	glScalef(0.5,0.5,0.0);


//	glBegin(GL_QUADS);//hot air baloon
//	glColor3ub(255,0,127);
//	glVertex2f(.18,.2);
//	glVertex2f(.25,.2);
//	glVertex2f(.25,.25);
//	glVertex2f(.18,.25);
//	glEnd();
//
//	glBegin(GL_LINES);
//	glColor3f(0.0,0.0,0.0);
//	glVertex2f(.19,.25);
//	glVertex2f(.19,.30);
//	glVertex2f(.24,.25);
//	glVertex2f(.24,.30);
//	glEnd();
//
//
//	x=.215f; y=0.35;  radius =.052f;       //balloonn
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(0, 102, 0);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
	glLoadIdentity();






//	glBegin(GL_QUADS);//car
//	glColor3ub(0,153,76);
//	glVertex2f(.78,-.23);
//	glVertex2f(.91,-.23);
//	glVertex2f(.90,-.19);
//	glVertex2f(.79,-.19);
//	glEnd();
//
//
//	glBegin(GL_QUADS);
//	glColor3ub(0,153,76);
//	glVertex2f(.75,-.27);
//	glVertex2f(.93,-.27);
//	glVertex2f(.93,-.23);
//	glVertex2f(.75,-.23);
//	glEnd();
//
//
//	x=.78f; y=-0.28;  radius =.02f;       //first wheel
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(0, 102, 0);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//
//	x=.88f; y=-0.28;  radius =.02f;       //second wheel
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(0, 102, 0);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//

    glBegin(GL_QUADS);//1st building
	glColor3ub(64,64,64);
	glVertex2f(-1.0,0.0);
	glVertex2f(-.92,0.0);
	glVertex2f(-.92,.2);
	glVertex2f(-1.0,.2);
	glEnd();

	glBegin(GL_QUADS);//1st building window
	glColor3ub(229,204,255);
	glVertex2f(-.96,0.07);
	glVertex2f(-.94,0.07);
	glVertex2f(-.94,.1);
	glVertex2f(-.96,.1);
	glEnd();
	glBegin(GL_QUADS);//1st building window
	glColor3ub(229,204,255);
	glVertex2f(-.96,0.12);
	glVertex2f(-.94,0.12);
	glVertex2f(-.94,.15);
	glVertex2f(-.96,.15);
	glEnd();


	glBegin(GL_QUADS);//2nd building
	glColor3ub(64,64,64);
	glVertex2f(-.91,0.0);
	glVertex2f(-.85,0.0);
	glVertex2f(-.85,.25);
	glVertex2f(-.91,.25);
	glEnd();

	glBegin(GL_QUADS);//2nd building window
	glColor3ub(229,204,255);
	glVertex2f(-.89,0.07);
	glVertex2f(-.87,0.07);
	glVertex2f(-.87,.1);
	glVertex2f(-.89,.1);
	glEnd();

	glBegin(GL_QUADS);//2nd building window
	glColor3ub(229,204,255);
	glVertex2f(-.89,0.12);
	glVertex2f(-.87,0.12);
	glVertex2f(-.87,.15);
	glVertex2f(-.89,.15);
	glEnd();

	glBegin(GL_QUADS);//2nd building window
	glColor3ub(229,204,255);
	glVertex2f(-.89,0.18);
	glVertex2f(-.87,0.18);
	glVertex2f(-.87,.21);
	glVertex2f(-.89,.21);
	glEnd();

	glBegin(GL_QUADS);//watch tower
	glColor3ub(0,102,51);
	glVertex2f(-.83,0.0);
	glVertex2f(-.80,0.0);
	glVertex2f(-.80,.15);
	glVertex2f(-.83,.15);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(64,64,64);
	glVertex2f(-.83,.15);
	glVertex2f(-.80,.15);
	glVertex2f(-.815,.25);
	glEnd();

	x=-.815f; y=0.12;  radius =.01f;       //watch
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//3rd building
	glColor3ub(64,64,64);
	glVertex2f(-.79,0.0);
	glVertex2f(-.74,0.0);
	glVertex2f(-.74,.25);
	glVertex2f(-.79,.15);
	glEnd();

	glBegin(GL_QUADS);//3rd building window
	glColor3ub(229,204,255);
	glVertex2f(-.77,0.05);
	glVertex2f(-.75,0.05);
	glVertex2f(-.75,.08);
	glVertex2f(-.77,.08);
	glEnd();

	glBegin(GL_QUADS);//3rd building window
	glColor3ub(229,204,255);
	glVertex2f(-.77,0.09);
	glVertex2f(-.75,0.09);
	glVertex2f(-.75,.12);
	glVertex2f(-.77,.12);
	glEnd();
glPushMatrix();
glTranslatef(position1,0.0,0.0);
	glBegin(GL_TRIANGLES);//plane front
	glColor3ub(96,96,96);
	glVertex2f(.38,.65);
	glVertex2f(.40,.62);
	glVertex2f(.40,.68);
	glEnd();

	glBegin(GL_POLYGON);//plane body
	glColor3ub(179, 177, 234);
	glVertex2f(.40,.62);
	glVertex2f(.49,.62);
	glVertex2f(.52,.71);
	glVertex2f(.50,.71);
	glVertex2f(.49,.68);
	glVertex2f(.40,.68);
	glEnd();


	glBegin(GL_QUADS);//plane wing upper
	glColor3ub(179, 177, 234);
	glVertex2f(.44,.68);
	glVertex2f(.46,.68);
	glVertex2f(.47,.71);
	glVertex2f(.45,.71);
	glEnd();

	glBegin(GL_QUADS);//plane wing lower
	glColor3ub(179, 177, 234);
	glVertex2f(.44,.62);
	glVertex2f(.46,.62);
	glVertex2f(.47,.58);
	glVertex2f(.45,.58);
	glEnd();
	glPopMatrix();



	glBegin(GL_QUADS);//  left 1st building
	glColor3ub(64,64,64);
	glVertex2f(-.42,0.0);
	glVertex2f(-.37,0.0);
	glVertex2f(-.37,.30);
	glVertex2f(-.42,.30);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-.42,0.30);
	glVertex2f(-.37,0.30);
	glEnd();
	glBegin(GL_QUADS);//  left 1st building window
	glColor3ub(229,204,255);
	glVertex2f(-.405,0.10);
	glVertex2f(-.385,0.10);
	glVertex2f(-.385,.15);
	glVertex2f(-.405,.15);
	glEnd();
	glBegin(GL_QUADS);//  left 1st building window
	glColor3ub(229,204,255);
	glVertex2f(-.405,0.18);
	glVertex2f(-.385,0.18);
	glVertex2f(-.385,.23);
	glVertex2f(-.405,.23);
	glEnd();


	glBegin(GL_TRIANGLES);//left triangle
	glColor3ub(64,64,64);
	glVertex2f(-.42,.30);
	glVertex2f(-.37,.30);
	glVertex2f(-.395,.48);
	glEnd();


	glBegin(GL_QUADS);//  left 2nd building(left)
	glColor3ub(64,64,64);
	glVertex2f(-.58,0.0);
	glVertex2f(-.53,0.0);
	glVertex2f(-.53,.30);
	glVertex2f(-.58,.28);
	glEnd();
	glBegin(GL_QUADS);//  left 2nd building(left) window
	glColor3ub(229,204,255);
	glVertex2f(-.565,0.10);
	glVertex2f(-.545,0.10);
	glVertex2f(-.545,.15);
	glVertex2f(-.565,.15);
	glEnd();
	glBegin(GL_QUADS);//  left 2nd building(left) window
	glColor3ub(229,204,255);
	glVertex2f(-.565,0.18);
	glVertex2f(-.545,0.18);
	glVertex2f(-.545,.23);
	glVertex2f(-.565,.23);
	glEnd();

	glBegin(GL_QUADS);//  left 2nd building(left)up
	glColor3ub(64,64,64);
	glVertex2f(-.57,0.284);
	glVertex2f(-.53,0.30);
	glVertex2f(-.53,.35);
	glVertex2f(-.57,.33);
	glEnd();


	glBegin(GL_QUADS);//  left 2nd building(right)
	glColor3ub(64,64,64);
	glVertex2f(-.53,0.0);
	glVertex2f(-.48,0.0);
	glVertex2f(-.48,.28);
	glVertex2f(-.53,.30);
	glEnd();
	glBegin(GL_QUADS);//  left 2nd building(right) window
	glColor3ub(229,204,255);
	glVertex2f(-.515,0.10);
	glVertex2f(-.495,0.10);
	glVertex2f(-.495,.15);
	glVertex2f(-.515,.15);
	glEnd();
	glBegin(GL_QUADS);//  left 2nd building(right) window
	glColor3ub(229,204,255);
	glVertex2f(-.515,0.18);
	glVertex2f(-.495,0.18);
	glVertex2f(-.495,.23);
	glVertex2f(-.515,.23);
	glEnd();
	glBegin(GL_QUADS);//  left 2nd building(right)up
	glColor3ub(64,64,64);
	glVertex2f(-.53,0.30);
	glVertex2f(-.49,0.284);
	glVertex2f(-.49,.33);
	glVertex2f(-.53,.35);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-.53,0.0);
	glVertex2f(-.53,0.34);
	glEnd();



	glBegin(GL_QUADS);//  right 1nd building
	glColor3ub(64,64,64);
	glVertex2f(0.0,0.0);
	glVertex2f(.05,0.0);
	glVertex2f(.05,.20);
	glVertex2f(0.0,.17);
	glEnd();
	glBegin(GL_QUADS);//  right 1nd building window
	glColor3ub(229,204,255);
	glVertex2f(0.0205,0.10);
	glVertex2f(.045,0.10);
	glVertex2f(.045,.15);
	glVertex2f(0.0205,.15);
	glEnd();
//	glBegin(GL_LINES);
//	glColor3ub(255,255,255);
//	glVertex2f(.05,0.0);
//	glVertex2f(0.05,.20);
//	glEnd();

	glBegin(GL_QUADS);//  right 1nd building
	glColor3ub(64,64,64);
	glVertex2f(0.05,0.0);
	glVertex2f(.10,0.0);
	glVertex2f(.10,.20);
	glVertex2f(0.05,.20);
	glEnd();
	glBegin(GL_QUADS);//  right 1nd building window
	glColor3ub(229,204,255);
	glVertex2f(0.075,0.07);
	glVertex2f(.095,0.07);
	glVertex2f(.095,.12);
	glVertex2f(0.075,.12);
	glEnd();
	glBegin(GL_QUADS);//  right 1nd building window
	glColor3ub(229,204,255);
	glVertex2f(0.075,0.15);
	glVertex2f(.095,0.15);
	glVertex2f(.095,.20);
	glVertex2f(0.075,.20);
	glEnd();
//	glBegin(GL_LINES);
//	glColor3ub(255,255,255);
//	glVertex2f(.10,0.0);
//	glVertex2f(0.10,.20);
//	glEnd();

	glBegin(GL_QUADS);//  right 1nd building
	glColor3ub(64,64,64);
	glVertex2f(0.10,0.0);
	glVertex2f(.15,0.0);
	glVertex2f(.15,.20);
	glVertex2f(0.10,.20);
	glEnd();

//	glBegin(GL_LINES);
//	glColor3ub(255,255,255);
//	glVertex2f(.15,0.0);
//	glVertex2f(0.15,.20);
//	glEnd();

	glBegin(GL_QUADS);//  right 1nd building
	glColor3ub(64,64,64);
	glVertex2f(0.15,0.0);
	glVertex2f(.20,0.0);
	glVertex2f(.20,.17);
	glVertex2f(0.15,.20);
	glEnd();



	glBegin(GL_QUADS);// upper right 1nd building
	glColor3ub(64,64,64);
	glVertex2f(0.05,0.20);
	glVertex2f(.10,0.20);
	glVertex2f(.10,.38);
	glVertex2f(0.05,.38);
	glEnd();

	glBegin(GL_QUADS);// upper right 1nd building
	glColor3ub(64,64,64);
	glVertex2f(0.10,0.20);
	glVertex2f(.15,0.20);
	glVertex2f(.15,.38);
	glVertex2f(0.10,.38);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(.10,0.20);
	glVertex2f(0.10,.38);
	glEnd();
//	glBegin(GL_LINES);
//	glColor3ub(255,255,255);
//	glVertex2f(.05,0.20);
//	glVertex2f(0.15,.20);
//	glEnd();
    glBegin(GL_QUADS);//  right 3rd building
	glColor3ub(64,64,64);
	glVertex2f(0.25,0.0);
	glVertex2f(.30,0.0);
	glVertex2f(.30,.20);
	glVertex2f(0.25,.20);
	glEnd();
	glBegin(GL_QUADS);//  right 3rd building window
	glColor3ub(229,204,255);
	glVertex2f(0.265,0.10);
	glVertex2f(.285,0.10);
	glVertex2f(.285,.15);
	glVertex2f(0.265,.15);
	glEnd();
	glBegin(GL_QUADS);//  right 3rd building window
	glColor3ub(229,204,255);
	glVertex2f(0.265,0.05);
	glVertex2f(.285,0.05);
	glVertex2f(.285,.08);
	glVertex2f(0.265,.08);
	glEnd();


	glBegin(GL_QUADS);//  right 4th building
	glColor3ub(64,64,64);
	glVertex2f(0.35,0.0);
	glVertex2f(.40,0.0);
	glVertex2f(.40,.40);
	glVertex2f(0.35,.35);
	glEnd();
	glBegin(GL_QUADS);//  right 4th building window
	glColor3ub(229,204,255);
	glVertex2f(0.365,0.10);
	glVertex2f(.385,0.10);
	glVertex2f(.385,.15);
	glVertex2f(0.365,.15);
	glEnd();
	glBegin(GL_QUADS);//  right 4th building window
	glColor3ub(229,204,255);
	glVertex2f(0.365,0.18);
	glVertex2f(.385,0.18);
	glVertex2f(.385,.23);
	glVertex2f(0.365,.23);
	glEnd();

	glBegin(GL_QUADS);//  right 5th building
	glColor3ub(64,64,64);
	glVertex2f(0.45,0.0);
	glVertex2f(.50,0.0);
	glVertex2f(.50,.25);
	glVertex2f(0.45,.17);
	glEnd();
	glBegin(GL_QUADS);//  right 5th building window
	glColor3ub(229,204,255);
	glVertex2f(0.465,0.10);
	glVertex2f(.485,0.10);
	glVertex2f(.485,.12);
	glVertex2f(0.465,.12);
	glEnd();
	glBegin(GL_QUADS);//  right 5th building window
	glColor3ub(229,204,255);
	glVertex2f(0.465,0.14);
	glVertex2f(.485,0.14);
	glVertex2f(.485,.16);
	glVertex2f(0.465,.16);
	glEnd();

	glBegin(GL_QUADS);//  tree 1
	glColor3ub(64,64,64);
	glVertex2f(0.80,0.0);
	glVertex2f(.81,0.0);
	glVertex2f(.81,.10);
	glVertex2f(0.80,.10);
	glEnd();

	x=.805f; y=0.11;  radius =.03f;       //tree1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(60, 128, 72);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();



		glBegin(GL_QUADS);//  tree 2
	glColor3ub(64,64,64);
	glVertex2f(0.83,0.0);
	glVertex2f(.84,0.0);
	glVertex2f(.84,.07);
	glVertex2f(0.83,.07);
	glEnd();
	x=.835f; y=0.07;  radius =.02f;       //tree2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(60, 128, 72);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//  tree 3
	glColor3ub(64,64,64);
	glVertex2f(0.85,0.0);
	glVertex2f(.86,0.0);
	glVertex2f(.86,.07);
	glVertex2f(0.85,.07);
	glEnd();
	x=.855f; y=0.08;  radius =.02f;       //tree3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(60, 128, 72);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//  tree 4
	glColor3ub(64,64,64);
	glVertex2f(0.89,0.0);
	glVertex2f(.90,0.0);
	glVertex2f(.90,.07);
	glVertex2f(0.89,.07);
	glEnd();
	x=.895f; y=0.08;  radius =.03f;       //tree4
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(60, 128, 72);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	glBegin(GL_QUADS);//  tree 5
	glColor3ub(64,64,64);
	glVertex2f(0.92,0.0);
	glVertex2f(.93,0.0);
	glVertex2f(.93,.07);
	glVertex2f(0.92,.07);
	glEnd();
	x=.925f; y=0.08;  radius =.03f;       //tree5
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(60, 128, 72);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//  tree -1
	glColor3ub(64,64,64);
	glVertex2f(-0.72,0.0);
	glVertex2f(-.71,0.0);
	glVertex2f(-.71,.04);
	glVertex2f(-0.72,.04);
	glEnd();
	x=-.7155f; y=0.05;  radius =.015f;       //tree-1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(60, 128, 72);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//  tree -2
	glColor3ub(64,64,64);
	glVertex2f(-0.69,0.0);
	glVertex2f(-.68,0.0);
	glVertex2f(-.68,.04);
	glVertex2f(-0.69,.04);
	glEnd();
	x=-.685f; y=0.05;  radius =.020f;       //tree-2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(60, 128, 72);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//  tree -3
	glColor3ub(64,64,64);
	glVertex2f(-0.67,0.0);
	glVertex2f(-.66,0.0);
	glVertex2f(-.66,.06);
	glVertex2f(-0.67,.06);
	glEnd();
	x=-.665f; y=0.07;  radius =.025f;       //tree-3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(60, 128, 72);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);//  tree -4
	glColor3ub(64,64,64);
	glVertex2f(-0.64,0.0);
	glVertex2f(-.63,0.0);
	glVertex2f(-.63,.04);
	glVertex2f(-0.64,.04);
	glEnd();
	x=-.635f; y=0.05;  radius =.020f;       //tree-4
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(60, 128, 72);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

//	glBegin(GL_QUADS);//boat deck
//	glColor3ub(0, 102, 0);
//	glVertex2f(.55,-.6);
//	glVertex2f(.65,-.7);
//	glVertex2f(.80,-.7);
//	glVertex2f(.90,-.6);
//	glEnd();

//    glTranslatef(.45,-.8,0.0);//ship 1
//    glScalef(0.55,0.55,0.0);
//
//    glBegin(GL_QUADS);
//	glColor3ub(255,255,0);
//	glVertex2f(.2,.2);
//	glVertex2f(.35,-.1);
//	glVertex2f(.6,-.1);
//	glVertex2f(.75,.2);
//	glEnd();
//	glBegin(GL_QUADS);
//	glColor3ub(51,51,255);
//	glVertex2f(.42,.2);
//	glVertex2f(.68,.2);
//	glVertex2f(.68,.3);
//	glVertex2f(.42,.3);
//	glEnd();
//
//
//
//	 x=.48f; y=0.25;  radius =.025f;       //first window
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 204, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//	  x=.58f; y=0.25;  radius =.025f;       //second window
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 204, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//	glBegin(GL_QUADS);
//	glColor3ub(255,255,0);
//	glVertex2f(.50,.3);
//	glVertex2f(.68,.3);
//	glVertex2f(.68,.35);
//	glVertex2f(.50,.35);
//	glEnd();
//
//	glBegin(GL_QUADS);
//	glColor3ub(204,102,0);
//	glVertex2f(.68,.2);
//	glVertex2f(.75,.2);
//	glVertex2f(.75,.50);
//	glVertex2f(.68,.50);
//	glEnd();




glLoadIdentity();




    glTranslatef(.30,0.0,0.0);
    glBegin(GL_QUADS);//  right 1st building
	glColor3ub(64,64,64);
	glVertex2f(-.42,0.0);
	glVertex2f(-.37,0.0);
	glVertex2f(-.37,.30);
	glVertex2f(-.42,.30);
	glEnd();
	glBegin(GL_QUADS);//  right 1st building window
	glColor3ub(229,204,255);
	glVertex2f(-.405,0.10);
	glVertex2f(-.385,0.10);
	glVertex2f(-.385,.15);
	glVertex2f(-.405,.15);
	glEnd();
	glBegin(GL_QUADS);//  right 1st building window
	glColor3ub(229,204,255);
	glVertex2f(-.405,0.18);
	glVertex2f(-.385,0.18);
	glVertex2f(-.385,.23);
	glVertex2f(-.405,.23);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-.42,0.30);
	glVertex2f(-.37,0.30);
	glEnd();


	glBegin(GL_TRIANGLES);//left triangle
	glColor3ub(64,64,64);
	glVertex2f(-.42,.30);
	glVertex2f(-.37,.30);
	glVertex2f(-.395,.48);
	glEnd();
	glLoadIdentity();

	glTranslatef(.35,0.0,0.0);
	glBegin(GL_QUADS);//  right 3nd building
	glColor3ub(64,64,64);
	glVertex2f(0.35,0.0);
	glVertex2f(.40,0.0);
	glVertex2f(.40,.40);
	glVertex2f(0.35,.45);
	glEnd();
	glLoadIdentity();

	glBegin(GL_QUADS);//road black
	glColor3ub(32,32,32);
	glVertex2f(-1.0,-0.0);
	glVertex2f(-1.0,-.15);
	glVertex2f(1.0,-.15);
	glVertex2f(1.0,-0.0);
	glEnd();

	glBegin(GL_QUADS);//road black
	glColor3ub(32,32,32);
	glVertex2f(-1.0,-0.18);
	glVertex2f(-1.0,-.35);
	glVertex2f(1.0,-.35);
	glVertex2f(1.0,-0.18);
	glEnd();

	 ////Border///

     glBegin(GL_POLYGON);
     glColor3f(0.2,0.098 , 0.0);
     glVertex2f(-1.0f, -0.33f);
     glVertex2f(1.0f, -0.33f);
     glVertex2f(1.0f, -0.416f);
     glVertex2f(-1.0f, -0.416f);
       glEnd();
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.0 , 0.0);
     glVertex2f(-1.0f, -0.35f);
     glVertex2f(1.0f, -0.35f);
     glVertex2f(1.0f, -0.33f);
     glVertex2f(-1.0f, -0.33f);
     glEnd();




glPushMatrix();
glTranslatef(.48,-.18,0.0);
glScalef(0.4,0.4,0.0);
glTranslatef(position2,0.0,0.0);
     glBegin(GL_POLYGON);//boat2
     glColor3f(0.4,0.0 , 0.0);
     glVertex2f(-0.833f, -0.66f);
     glVertex2f(-0.33f, -0.66f);
     glVertex2f(-0.25f, -0.583f);
     glVertex2f(-0.916f, -0.583f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0 , 0.4);
     glVertex2f(-0.833f, -0.583f);
     glVertex2f(-0.33f, -0.583f);
     glVertex2f(-0.416f, -0.5f);
     glVertex2f(-0.75f, -0.5f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.4 , 0.698);
     glVertex2f(-0.66f, -0.5f);
     glVertex2f(-0.5f, -0.5f);
     glVertex2f(-0.583f, -0.33f);
     glEnd();
     glBegin(GL_LINES);
     glColor3f(0.0,0.0 , 0.0);
     glVertex2f(-0.583f, -0.33f);
     glVertex2f(-0.583f, -0.166f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.583f, -0.283);
     glVertex2f(-0.55f, -0.25f);
     glVertex2f(-0.583f, -0.2166f);
     glEnd();

     ////Boatwindows//
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.75f,-0.566f);
     glVertex2f(-0.7f,-0.566f);
     glVertex2f(-0.7,-0.516f);
     glVertex2f(-0.75f,-0.516f);
     glEnd();
          glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.633f,-0.566f);
     glVertex2f(-0.583f,-0.566f);
     glVertex2f(-0.583,-0.516f);
     glVertex2f(-0.633f,-0.516f);
     glEnd();
          glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.516f,-0.566f);
     glVertex2f(-0.46f,-0.566f);
     glVertex2f(-0.46f,-0.516f);
     glVertex2f(-0.516f,-0.516f);
     glEnd();
 glBegin(GL_POLYGON);
     glColor3f(0.0,0.56 , 0.698);
     glVertex2f(-0.833f,-0.6833f);
     glVertex2f(-0.33f,-0.6833f);
     glVertex2f(-0.33f,-0.66f);
     glVertex2f(-0.833f,-0.66f);
     glEnd();
     glLoadIdentity();
     glPopMatrix();

      ////Bus///
      glPushMatrix();

      glTranslatef(.25,.00,0.0);
glScalef(0.5,0.5,0.0);
glTranslatef(position,0.0,0.0);
  glBegin(GL_POLYGON);
         glColor3f(1.0,0.0,0.0);
        glVertex2f(0.5f, -0.166f);
        glVertex2f(1.0f, -0.166f);
         glVertex2f(1.0f, 0.0f);
          glVertex2f(0.55f, 0.0f);
          glVertex2f(0.5f, -0.033f);
	glEnd();
	  glBegin(GL_POLYGON);
         glColor3f(1.0,1.0,0.0);
        glVertex2f(0.5f, -0.1f);
        glVertex2f(0.5166f, -0.1f);
         glVertex2f(0.5166f, -0.066f);
          glVertex2f(0.5f, -0.066f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.0,0.0,0.0);
        glVertex2f(0.55f, 0.0f);
        glVertex2f(1.0f, 0.0f);
         glVertex2f(1.0f, 0.116f);
          glVertex2f(0.55f, 0.116f);
	glEnd();

	////Buswindows///
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.5833f, 0.016f);
        glVertex2f(0.633f, 0.016f);
         glVertex2f(0.633f, 0.1f);
          glVertex2f(0.5833f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.65f, 0.016f);
        glVertex2f(0.7f, 0.016f);
         glVertex2f(0.7f, 0.1f);
          glVertex2f(0.65f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.716f, 0.016f);
        glVertex2f(0.766f, 0.016f);
         glVertex2f(0.766f, 0.1f);
          glVertex2f(0.716f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.783f, 0.016f);
        glVertex2f(0.833f, 0.016f);
         glVertex2f(0.833f, 0.1f);
          glVertex2f(0.783f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.85f, 0.016f);
        glVertex2f(0.9f, 0.016f);
         glVertex2f(0.9f, 0.1f);
          glVertex2f(0.85f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex2f(0.916f, 0.016f);
        glVertex2f(0.966f, 0.016f);
         glVertex2f(0.966f, 0.1f);
          glVertex2f(0.916f, 0.1f);
	glEnd();

x=.58f; y=-0.18;  radius =.025f;       //first wheel
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=.88f; y=-0.18;  radius =.025f;       //second wheel
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();





glLoadIdentity();
glPopMatrix();


////bus2
//glPushMatrix();
//
// glTranslatef(.05,-.20,0.0);
//glScalef(0.5,0.5,0.0);
//glTranslatef(position,0.0,0.0);
//  glBegin(GL_POLYGON);
//         glColor3f(1.0,0.0,0.0);
//        glVertex2f(0.5f, -0.166f, 0.0f);
//        glVertex2f(1.0f, -0.166f, 0.0f);
//         glVertex2f(1.0f, 0.0f, 0.0f);
//          glVertex2f(0.55f, 0.0f, 0.0f);
//          glVertex2f(0.5f, -0.033f, 0.0f);
//	glEnd();
//	  glBegin(GL_POLYGON);
//         glColor3f(1.0,1.0,0.0);
//        glVertex2f(0.5f, -0.1f, 0.0f);
//        glVertex2f(0.5166f, -0.1f, 0.0f);
//         glVertex2f(0.5166f, -0.066f, 0.0f);
//          glVertex2f(0.5f, -0.066f, 0.0f);
//	glEnd();
//	glBegin(GL_POLYGON);
//         glColor3f(1.0,0.0,0.0);
//        glVertex2f(0.55f, 0.0f, 0.0f);
//        glVertex2f(1.0f, 0.0f, 0.0f);
//         glVertex2f(1.0f, 0.116f, 0.0f);
//          glVertex2f(0.55f, 0.116f, 0.0f);
//	glEnd();
//
//	////Buswindows///
//	glBegin(GL_POLYGON);
//         glColor3f(0.26,0.26,0.26);
//        glVertex2f(0.5833f, 0.016f, 0.0f);
//        glVertex2f(0.633f, 0.016f, 0.0f);
//         glVertex2f(0.633f, 0.1f, 0.0f);
//          glVertex2f(0.5833f, 0.1f, 0.0f);
//	glEnd();
//	glBegin(GL_POLYGON);
//         glColor3f(0.26,0.26,0.26);
//        glVertex2f(0.65f, 0.016f, 0.0f);
//        glVertex2f(0.7f, 0.016f, 0.0f);
//         glVertex2f(0.7f, 0.1f, 0.0f);
//          glVertex2f(0.65f, 0.1f, 0.0f);
//	glEnd();
//	glBegin(GL_POLYGON);
//         glColor3f(0.26,0.26,0.26);
//        glVertex2f(0.716f, 0.016f, 0.0f);
//        glVertex2f(0.766f, 0.016f, 0.0f);
//         glVertex2f(0.766f, 0.1f, 0.0f);
//          glVertex2f(0.716f, 0.1f, 0.0f);
//	glEnd();
//	glBegin(GL_POLYGON);
//         glColor3f(0.26,0.26,0.26);
//        glVertex2f(0.783f, 0.016f, 0.0f);
//        glVertex2f(0.833f, 0.016f, 0.0f);
//         glVertex2f(0.833f, 0.1f, 0.0f);
//          glVertex2f(0.783f, 0.1f, 0.0f);
//	glEnd();
//	glBegin(GL_POLYGON);
//         glColor3f(0.26,0.26,0.26);
//        glVertex2f(0.85f, 0.016f, 0.0f);
//        glVertex2f(0.9f, 0.016f, 0.0f);
//         glVertex2f(0.9f, 0.1f, 0.0f);
//          glVertex2f(0.85f, 0.1f, 0.0f);
//	glEnd();
//	glBegin(GL_POLYGON);
//         glColor3f(0.26,0.26,0.26);
//        glVertex2f(0.916f, 0.016f, 0.0f);
//        glVertex2f(0.966f, 0.016f, 0.0f);
//         glVertex2f(0.966f, 0.1f, 0.0f);
//          glVertex2f(0.916f, 0.1f, 0.0f);
//	glEnd();
//
//x=.58f; y=-0.18;  radius =.025f;       //first wheel
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 204, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//
//	x=.88f; y=-0.18;  radius =.025f;       //second wheel
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3ub(255, 204, 255);
//     i;
//	 lineAmount = 100; //# of triangles used to draw circle
//
//	//GLfloat radius = 0.8f; //radius
//	 twicePi = 2.0f * PI;
//		for(i = 0; i <= lineAmount;i++) {
//			glVertex2f(
//			    x + (radius * cos(i *  twicePi / lineAmount)),
//			    y + (radius* sin(i * twicePi / lineAmount))
//			);
//		}
//	glEnd();
//	glLoadIdentity();
//	glPopMatrix();

























































glFlush();
glutSwapBuffers();
}

void swap()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 0.0);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

glPushMatrix();
     glBegin(GL_POLYGON);
     glColor3f(0.49, 1.0, 1.0); //sky
     glVertex2f(-25, 0.0);
     glVertex2f(-25, 11.5);
     glVertex2f(25, 11.5);
     glVertex2f(25, 0.0);
     glEnd();
     glPopMatrix();

     //Sun//
     glPushMatrix();
    //glTranslatef(6,0,0);
   glTranslatef(0.8, 0.8, 0.0);
   glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	////Sunrays////
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.8,0.6);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.7,0.6);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.9,0.6);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.8,1.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.9,1.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.7,1.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(1.2,1.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(1.0,0.8);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(1.0,0.6);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.5,0.7);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.5,0.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.8,0.8);
	glVertex2f(0.5,0.9);
	glEnd();

	GLfloat  x=-.97f;GLfloat y=0.88; GLfloat radius =.035f;       //cloud1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
    int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	  x=-.92f; y=0.88;  radius =.055f;       //cloud1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	 x=-.86f; y=0.88;  radius =.035f;       //cloud1
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();



	 x=-.57f; y=0.88;  radius =.035f;       //cloud2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	 x=-.52f; y=0.88;  radius =.055f;       //cloud2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=-.46f; y=0.88;  radius =.035f;       //cloud2
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();



	x=.46f; y=0.88;  radius =.035f;       //cloud3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	 x=.52f; y=0.88;  radius =.055f;       //cloud3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=.57f; y=0.88;  radius =.035f;       //cloud3
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
     i;
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	////Bird///
	 glPushMatrix();
//	 glTranslatef(_move5, 0.0f, 0.0f);

	 //tail//
	  glBegin(GL_POLYGON);
     glColor3f(0.0,0.0 , 0.0);
     glVertex2f(0.933f, 0.4f);
     glVertex2f(1.0f, 0.4166f);
     glVertex2f(0.966f, 0.45f);
     glEnd();

     //body//
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0, 0.0);
     glVertex2f(0.933f, 0.4f);
     glVertex2f(0.966f, 0.45f);
      glVertex2f(0.933f, 0.466f);
      glVertex2f(0.85f, 0.466f);
      glVertex2f(0.883f, 0.4166f);
     glEnd();

////lip///
      glBegin(GL_POLYGON);
     glColor3f(0.37,0.37 , 0.37);
      glVertex2f(0.833f,0.4f);
     glVertex2f(0.883f, 0.433f);
    glVertex2f(0.85f,0.466f);
    glEnd();

    //wings//
      glBegin(GL_POLYGON);
     glColor3f(0.0,0.0 , 0.0);
      glVertex2f(0.866f,0.466f);
     glVertex2f(0.916f,0.466f);
    glVertex2f(0.883f,0.533f);
    glEnd();
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.0 , 0.0);
     glVertex2f(0.9f,0.466f);
    glVertex2f(0.933f,0.466f);
    glVertex2f(0.925f,0.512f);
    glEnd();

      glPopMatrix();



     ////Road////
     glPushMatrix();
     glBegin(GL_POLYGON);
     glColor3f(0.698,0.745 , 0.7098);
     glVertex2f(-1.0f, -0.33f);
     glVertex2f(1.0f, -0.33f);
     glVertex2f(1.0f, 0.0f);
     glVertex2f(-1.0f, 0.0f);
     glEnd();
     glPopMatrix();



     ////Lake///
     glPushMatrix();
      glBegin(GL_POLYGON);
     glColor3f(0.23,0.70 , 0.81);
     glVertex2f(-1.0f, -1.0f);
     glVertex2f(1.0f, -1.0f);
     glVertex2f(1.0f, -0.00f);
     glVertex2f(-1.0f, -0.00f);
     glEnd();

     glPushMatrix();

     ////Border///
      glPushMatrix();

     glBegin(GL_POLYGON);
     glColor3f(0.2,0.098 , 0.0);
     glVertex2f(-1.0f, -0.13f);
     glVertex2f(1.0f, -0.13f);
     glVertex2f(1.0f, -0.0f);
     glVertex2f(-1.0f, -0.0f);
       glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.0,0.0 , 0.0);
     glVertex2f(-1.0f, -0.15f);
     glVertex2f(1.0f, -0.15f);
     glVertex2f(1.0f, -0.02f);
     glVertex2f(-1.0f, -0.02f);
     glEnd();

     glPushMatrix();

     /////Waves///

     ////1////
     glPushMatrix();
     //glTranslatef(_move1, 0.0f, 0.0f);
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.56 , 0.698);
     glVertex2f(-1.0f, -0.5f);
     glVertex2f(-0.966f, -0.416f);
     glVertex2f(-0.933f, -0.5f);
     glVertex2f(-0.9f, -0.416f);
     glVertex2f(-0.866f, -0.5f);
     glVertex2f(-0.833f, -0.416f);
     glVertex2f(-0.8f, -0.5f);
     glEnd();
          glPopMatrix();

          ////2////
           glPushMatrix();
     //glTranslatef(_move2, 0.0f, 0.0f);
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.56 , 0.698);
     glVertex2f(0.8f, -0.66f);
     glVertex2f(0.833f, -0.583f);
     glVertex2f(0.866f, -0.66f);
     glVertex2f(0.9f, -0.583f);
     glVertex2f(0.933f, -0.66f);
     glVertex2f(0.966f, -0.583f);
     glVertex2f(1.0f, -0.66f);
     glEnd();

    glPushMatrix();
	//glTranslatef(_move, 0.0f, 0.0f);








	  /////Boat/////
               glPushMatrix();
//     glTranslatef(_move3, 0.0f, 0.0f);
     glBegin(GL_POLYGON);
     glColor3f(0.4,0.0 , 0.0);
     glVertex2f(-0.833f, -0.66f);
     glVertex2f(-0.33f, -0.66f);
     glVertex2f(-0.25f, -0.583f);
     glVertex2f(-0.916f, -0.583f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0 , 0.4);
     glVertex2f(-0.833f, -0.583f);
     glVertex2f(-0.33f, -0.583f);
     glVertex2f(-0.416f, -0.5f);
     glVertex2f(-0.75f, -0.5f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.4 , 0.698);
     glVertex2f(-0.66f, -0.5f);
     glVertex2f(-0.5f, -0.5f);
     glVertex2f(-0.583f, -0.33f);
     glEnd();
     glBegin(GL_LINES);
     glColor3f(0.0,0.0 , 0.0);
     glVertex2f(-0.583f, -0.33f);
     glVertex2f(-0.583f, -0.166f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.583f, -0.283f);
     glVertex2f(-0.55f, -0.25f);
     glVertex2f(-0.583f, -0.2166f);
     glEnd();

     ////Boatwindows//
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.75f,-0.566f);
     glVertex2f(-0.7f,-0.566f);
     glVertex2f(-0.7,-0.516f);
     glVertex2f(-0.75f,-0.516f);
     glEnd();
          glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.633f,-0.566f);
     glVertex2f(-0.583f,-0.566f);
     glVertex2f(-0.583,-0.516f);
     glVertex2f(-0.633f,-0.516f);
     glEnd();
          glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.516f,-0.566f);
     glVertex2f(-0.46f,-0.566f);
     glVertex2f(-0.46f,-0.516f);
     glVertex2f(-0.516f,-0.516f);
     glEnd();
 glBegin(GL_POLYGON);
     glColor3f(0.0,0.56 , 0.698);
     glVertex2f(-0.833f,-0.6833f);
     glVertex2f(-0.33f,-0.6833f);
     glVertex2f(-0.33f,-0.66f);
     glVertex2f(-0.833f,-0.66f);
     glEnd();
     glLoadIdentity();

       glPopMatrix();

       glBegin(GL_TRIANGLES);//left mountain
       glColor3ub(0,102,0);
       glVertex2f(-.90,0.0);
       glVertex2f(-.85,0.20);
       glVertex2f(-.80,0.0);
       glEnd();

        glBegin(GL_TRIANGLES);//right mountain
       glColor3ub(0,102,0);
       glVertex2f(-.80,0.0);
       glVertex2f(-.75,0.30);
       glVertex2f(-.70,0.0);
       glEnd();

//        glBegin(GL_TRIANGLES);//right mountain
//       glColor3ub(0,102,0);
//       glVertex2f(-.83,0.001);
//       glVertex2f(-.80,0.18);
//       glVertex2f(-.77,0.001);
//       glEnd();
       glBegin(GL_TRIANGLES);//middle mountain
       glColor3ub(0,102,0);
       glVertex2f(-.30,0.0);
       glVertex2f(-.25,0.30);
       glVertex2f(-.20,0.0);
       glEnd();
       glBegin(GL_TRIANGLES);//middle mountain
       glColor3ub(0,102,0);
       glVertex2f(-.20,0.0);
       glVertex2f(-.15,0.40);
       glVertex2f(.00,0.0);
       glEnd();
        glBegin(GL_TRIANGLES);//middle mountain
       glColor3ub(0,102,0);
       glVertex2f(.00,0.0);
       glVertex2f(.10,0.10);
       glVertex2f(.25,0.0);
       glEnd();



       glBegin(GL_TRIANGLES);//last mountain
       glColor3ub(0,102,0);
       glVertex2f(.80,0.0);
       glVertex2f(1.0,0.40);
       glVertex2f(1.5,0.0);
       glEnd();


        /////Boat2/////
               glPushMatrix();
    glTranslatef(.75, 0.10f, 0.0f);
    glScalef(0.5,0.5,0.0);
     glBegin(GL_POLYGON);
     glColor3f(0.4,0.0 , 0.0);
     glVertex2f(-0.833f, -0.66f);
     glVertex2f(-0.33f, -0.66f);
     glVertex2f(-0.25f, -0.583f);
     glVertex2f(-0.916f, -0.583f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0 , 0.4);
     glVertex2f(-0.833f, -0.583f);
     glVertex2f(-0.33f, -0.583f);
     glVertex2f(-0.416f, -0.5f);
     glVertex2f(-0.75f, -0.5f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.4 , 0.698);
     glVertex2f(-0.66f, -0.5f);
     glVertex2f(-0.5f, -0.5f);
     glVertex2f(-0.583f, -0.33f);
     glEnd();
     glBegin(GL_LINES);
     glColor3f(0.0,0.0 , 0.0);
     glVertex2f(-0.583f, -0.33f);
     glVertex2f(-0.583f, -0.166f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.583f, -0.283f);
     glVertex2f(-0.55f, -0.25f);
     glVertex2f(-0.583f, -0.2166f);
     glEnd();

     ////Boatwindows//
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.75f,-0.566f);
     glVertex2f(-0.7f,-0.566f);
     glVertex2f(-0.7,-0.516f);
     glVertex2f(-0.75f,-0.516f);
     glEnd();
          glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.633f,-0.566f);
     glVertex2f(-0.583f,-0.566f);
     glVertex2f(-0.583,-0.516f);
     glVertex2f(-0.633f,-0.516f);
     glEnd();
          glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex2f(-0.516f,-0.566f);
     glVertex2f(-0.46f,-0.566f);
     glVertex2f(-0.46f,-0.516f);
     glVertex2f(-0.516f,-0.516f);
     glEnd();
 glBegin(GL_POLYGON);
     glColor3f(0.0,0.56 , 0.698);
     glVertex2f(-0.833f,-0.6833f);
     glVertex2f(-0.33f,-0.6833f);
     glVertex2f(-0.33f,-0.66f);
     glVertex2f(-0.833f,-0.66f);
     glEnd();
     glLoadIdentity();

       glPopMatrix();


     ////TreesFront row///
	glPushMatrix();
	glTranslatef(-.52,0.055,0.0);
	glScalef(0.2,0.2,0.0);
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.298,0.0);
        glVertex2f(-0.6f, -0.33f);
        glVertex2f(-0.566f, -0.33f);
         glVertex2f(-0.566f, 0.166f);
          glVertex2f(-0.6f, 0.166f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.298,0.0);
        glVertex2f(-0.1f, -0.33f);
        glVertex2f(-0.066f, -0.33f);
         glVertex2f(-0.066f, 0.166f);
          glVertex2f(-0.1f, 0.166f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.298,0.0);
        glVertex2f(0.4f, -0.33f);
        glVertex2f(0.433f, -0.33f);
         glVertex2f(0.433f, 0.166f);
          glVertex2f(0.4f, 0.166f);
	glEnd();

	glBegin(GL_POLYGON);
         glColor3f(0.6,0.298,0.0);
        glVertex2f(0.9f, -0.33f);
        glVertex2f(0.933f, -0.33f);
         glVertex2f(0.933f, 0.166f);
          glVertex2f(0.9f, 0.166f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.0);
        glVertex2f(-0.65f, -0.166f);
        glVertex2f(-0.516f, -0.166f);
         glVertex2f(-0.583f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.0);
        glVertex2f(-0.15f, -0.166f);
        glVertex2f(-0.016f, -0.166f);
         glVertex2f(-0.0833f, 0.0f);
	glEnd();
		glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.0);
        glVertex2f(0.35f, -0.166f);
        glVertex2f(0.483f, -0.166f);
         glVertex2f(0.4166f, 0.0f);
	glEnd();
		glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.0);
        glVertex2f(0.85f, -0.166f);
        glVertex2f(0.983f, -0.166f);
         glVertex2f(0.9166f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.4,0.8,0.0);
        glVertex2f(-0.65f, -0.05f);
        glVertex2f(-0.516f, -0.05f);
         glVertex2f(-0.583f, 0.33f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.4,0.8,0.0);
        glVertex2f(-0.15f, -0.05f);
        glVertex2f(-0.016f, -0.05f);
         glVertex2f(-0.0833f, 0.33f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.4,0.8,0.0);
        glVertex2f(0.35f, -0.05f);
        glVertex2f(0.483f, -0.05f);
         glVertex2f(0.416f, 0.33f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.4,0.8,0.0);
        glVertex2f(0.85f, -0.05f);
        glVertex2f(0.983f, -0.05f);
         glVertex2f(0.9166f, 0.33f);
	glEnd();
	glLoadIdentity();


	glFlush();        //Works only on single buffer
glutSwapBuffers();
}
void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'p':
    speed = 0.0f;
    glutTimerFunc(100, update, 0);
    break;
case 'd':
     glutDisplayFunc(day);
     glutPostRedisplay();
    break;
    case 'n':
    glutDisplayFunc(night);
    glutPostRedisplay();
    break;
    case 's':
    glutDisplayFunc(swap);
    glutPostRedisplay();
    break;


glutPostRedisplay();


	}


}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(600, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   //glutDisplayFunc(display);
    glutDisplayFunc(swap);
   glutKeyboardFunc(handleKeypress);
    //glutMouseFunc(handleMouse);
   //init();

//  glutTimerFunc(100, update, 0);
//   glutTimerFunc(100, update1, 0);
//   glutTimerFunc(100, update2, 0);
 glutSpecialFunc(SpecialInput);
   glutMainLoop();
   return 0;
}


