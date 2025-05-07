#include<windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
#include "GlobalVariables.h"
#include "GlobalFunctions.h"
#include "School_morning_view.h"

void School_morning_view() {
glClearColor(0.529f, 0.808f, 0.922f, 0.0f);// Set background color to Sky blue
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

 {  int i;
        GLfloat x=-0.80f; GLfloat y=0.66f; GLfloat radius =.07f;
        GLfloat x12=-0.47f; GLfloat y12=0.125f;GLfloat r12=.01f;
        	int triangleAmount = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	//Sun:
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x12, y12); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x12+ (r12* cos(i *  twicePi / triangleAmount)),
                        y12+ (r12 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

    }

    ///cloud
  glPushMatrix();
    glTranslatef(position3,0.0f,0.0f);////translate

    glTranslatef(+0.0f, -0.1f, 0.0f);

  int i;


	GLfloat x1=-0.58; GLfloat y1=0.83f; GLfloat r1 =.05f;
   GLfloat x2=-0.54f; GLfloat y2=0.83f;GLfloat r2 =.05f;
	GLfloat x3=-0.48f; GLfloat y3=0.86f;GLfloat r3 =.06f;
	GLfloat x4=-0.40f; GLfloat y4=0.84f;GLfloat r4 =.06f;
	GLfloat x5=-0.34f; GLfloat y5=0.79f;GLfloat r5 =.05f;
	GLfloat x6=-0.44f; GLfloat y6=0.75f;GLfloat r6 =.06f;
	GLfloat x7=-0.51f; GLfloat y7=0.71f;GLfloat r7=.056f;
	GLfloat x10=-0.59f; GLfloat y10=0.75f;GLfloat r10=.05f;
	GLfloat x11=-0.52f; GLfloat y11=0.77f;GLfloat r11=.07f;

	int triangleAmount = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


//cloud
     	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x1+ (r1 * cos(i *  twicePi / triangleAmount)),
                        y1 + (r1 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x2+ (r2* cos(i *  twicePi / triangleAmount)),
                        y2 + (r2 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

     glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
		glVertex2f( x3+ (r3 * cos(i *  twicePi / triangleAmount)),
                        y3 + (r3 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x4+ (r4 * cos(i *  twicePi / triangleAmount)),
                        y4 + (r4 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x5+ (r5 * cos(i *  twicePi / triangleAmount)),
                        y5 + (r5* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();
glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x6+ (r6 * cos(i *  twicePi / triangleAmount)),
                        y6 + (r6 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x7+ (r7 * cos(i *  twicePi / triangleAmount)),
                        y7 + (r7 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y10); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x10+ (r10 * cos(i *  twicePi / triangleAmount)),
                        y10 + (r10 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x11, y11); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x11+ (r11* cos(i *  twicePi / triangleAmount)),
                        y11+ (r11 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();
	glLoadIdentity();
	    glPopMatrix();





    glBegin(GL_POLYGON);
    glColor3f(0.133f, 0.545f, 0.133f); //Forest Green

    glVertex2f(-1.0f, 0.06f);
    glVertex2f(1.0f, 0.06f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);

    glEnd();

    //Background forest
       {   glLoadIdentity();                // Reset the model-view matrix

    glTranslatef(+0.0f, 0.0f, 0.0f);
     glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(-1.0f, 0.06f);
    glVertex2f(-0.96f,0.160f);
    glVertex2f(-0.91f, 0.22f);
    glVertex2f(-0.9f, 0.22f);
    glVertex2f(-0.84f, 0.16f);
    glVertex2f(-0.795f, 0.06f);
    glVertex2f(-1.0f, 0.06f);

    glEnd();

   glLoadIdentity();                // Reset the model-view matrix

   glTranslatef(+0.19f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(-1.0f, 0.06f);
    glVertex2f(-0.96f,0.160f);
    glVertex2f(-0.91f, 0.22f);
    glVertex2f(-0.9f, 0.22f);
    glVertex2f(-0.84f, 0.16f);
    glVertex2f(-0.795f, 0.06f);
    glVertex2f(-1.0f, 0.06f);

    glEnd();

      glLoadIdentity();

    glTranslatef(+0.38f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(-1.0f, 0.06f);
    glVertex2f(-0.96f,0.160f);
    glVertex2f(-0.91f, 0.22f);
    glVertex2f(-0.9f, 0.22f);
    glVertex2f(-0.84f, 0.16f);
    glVertex2f(-0.795f, 0.06f);
    glVertex2f(-1.0f, 0.06f);

    glEnd();

      glLoadIdentity();
//4

    glTranslatef(+0.56f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(-1.0f, 0.06f);
    glVertex2f(-0.96f,0.160f);
    glVertex2f(-0.91f, 0.22f);
    glVertex2f(-0.9f, 0.22f);
    glVertex2f(-0.84f, 0.16f);
    glVertex2f(-0.795f, 0.06f);
    glVertex2f(-1.0f, 0.06f);

    glEnd();

      glLoadIdentity();
      //5
    glTranslatef(+1.56f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(-1.0f, 0.06f);
    glVertex2f(-0.96f,0.160f);
    glVertex2f(-0.91f, 0.22f);
    glVertex2f(-0.9f, 0.22f);
    glVertex2f(-0.84f, 0.16f);
    glVertex2f(-0.795f, 0.06f);
    glVertex2f(-1.0f, 0.06f);

    glEnd();
    glLoadIdentity();
    //6
    glTranslatef(+1.85f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(-1.0f, 0.06f);
    glVertex2f(-0.96f,0.160f);
    glVertex2f(-0.91f, 0.22f);
    glVertex2f(-0.9f, 0.22f);
    glVertex2f(-0.84f, 0.16f);
    glVertex2f(-0.795f, 0.06f);
    glVertex2f(-1.0f, 0.06f);

    glEnd();
glLoadIdentity();

       }

    /*glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(-0.795f, 0.06f);
    glVertex2f(-0.755f,0.160f);
    glVertex2f(-0.705f, 0.22f);
    glVertex2f(-0.695f, 0.22f);
    glVertex2f(-0.635f, 0.16f);
    glVertex2f(-0.59f, 0.06f);
    glVertex2f(-0.795f, 0.06f);

    glEnd();*/



    glBegin(GL_POLYGON);
    glColor3f(0.588f, 0.412f, 0.098f); //Light Yellow 2

    glVertex2f(-0.35f, 0.46f);
    glVertex2f(-0.35f, -0.09f);
    glVertex2f(0.3f, -.24f);
    glVertex2f(0.3f, 0.66f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.41f, 0.0283f, 0.50f); //Amber

   glVertex2f(0.3f, 0.66f);
    glVertex2f(0.3f, -.24f);
    glVertex2f(0.56f, -.24f);
    glVertex2f(0.56f, 0.66f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 0.647f, 0.0f); //Orange

    glVertex2f(0.3f, 0.66f);
    glVertex2f(0.3f, -.24f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.749f, 0.0f); //Amber

    glVertex2f(-0.35f, 0.46f);
    glVertex2f(-0.35f, .37f);
    glVertex2f(0.3f, .66f);
    glVertex2f(0.3f, 0.85f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.46f, 0.36f); //Light Yellow 2


    glVertex2f(0.3f, 0.85f);
    glVertex2f(0.3f, .66f);;
    glVertex2f(0.32f, 0.66f);
    glVertex2f(0.32f, .85f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.647f, 0.0f); //Orange

    glVertex2f(-0.35f, .16f);
    glVertex2f(-0.35f, 0.14f);
    glVertex2f(0.3f, 0.2f);
    glVertex2f(0.3f, .24f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.373f, 0.122f); //Neon Orange


    glVertex2f(0.3f, .24f);
    glVertex2f(0.3f, 0.2f);

    glVertex2f(0.56f, 0.2f);
    glVertex2f(0.56f, .24f);

    glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.49f, 0.976f, 1.0f); //Electric blue

    glVertex2f(0.34f, -0.01f);
    glVertex2f(0.52f, -0.01f);
    glVertex2f(0.52f, .10f);
    glVertex2f(0.34f, .10f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49f, 0.976f, 1.0f); //Electric blue

    glVertex2f(0.34f, 0.47f);
    glVertex2f(0.52f, 0.47f);
    glVertex2f(0.52f, 0.56f);
    glVertex2f(0.34f, 0.56f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49f, 0.976f, 1.0f); //Electric blue



    glVertex2f(0.13f, 0.42f);
    glVertex2f(0.27f, 0.47f);
    glVertex2f(0.27f, 0.56f);
    glVertex2f(0.13f, 0.51f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49f, 0.976f, 1.0f); //Electric blue

    glVertex2f(0.09f, 0.01f);
    glVertex2f(0.28f, 0.01f);
    glVertex2f(0.28f, 0.11f);
    glVertex2f(0.09f, 0.11f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49f, 0.976f, 1.0f); //Electric blue

    glVertex2f(-0.09f, 0.36f);
    glVertex2f(0.05f, .4f);
    glVertex2f(0.05f, 0.48f);
    glVertex2f(-0.09f, 0.43f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49f, 0.976f, 1.0f); //Electric blue

    glVertex2f(-0.3f, 0.29f);
    glVertex2f(-0.18f, .32f);
    glVertex2f(-0.18f, 0.39f);
    glVertex2f(-0.3f, 0.34f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49f, 0.976f, 1.0f); //Electric blue


    glVertex2f(-0.3f, 0.03f);
    glVertex2f(-0.18f, .03f);
    glVertex2f(-0.18f, 0.1f);
    glVertex2f(-0.3f, 0.1f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(-0.1f, -0.15f);
    glVertex2f(.04f, -.18f);
    glVertex2f(.04,.08f);
    glVertex2f(-0.1f, 0.08f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.29f, 0.016f, 0.016f); //Oxblood brown

    glVertex2f(.04,-0.18f);
    glVertex2f(.04f, 0.08f);
    glVertex2f(.02,.08f);
    glVertex2f(.02f, -0.18f);

    glEnd();

    glBegin(GL_POLYGON);
   glColor3f(0.6f, 0.46f, 0.36f); //Golden Brown



    glVertex2f(-.20,-0.12f);
    glVertex2f(-.26f, -0.31f);
    glVertex2f(.073,-.49f);
    glVertex2f(.09f, -0.18f);

    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3f(0.588f, 0.412f, 0.098f); //Golden Brown
glColor3f(0.6f, 0.46f, 0.36f);
    glVertex2f(-.26f, -0.31f);
    glVertex2f(-1.00,-.66f);
    glVertex2f(-.72f, -1.00f);
    glVertex2f(.073,-.49f);


    glEnd();

    glBegin(GL_POLYGON);
   // glColor3f(0.588f, 0.412f, 0.098f); //Golden Brown
   glColor3f(0.6f, 0.46f, 0.36f);
    glVertex2f(-1.00,-.66f);
    glVertex2f(-1.00,-1.00f);
    glVertex2f(-.72f, -1.00f);

    glEnd();


  	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3f(0.29f, 0.016f, 0.016f); //Oxblood brown
	glVertex2f(-0.54f, -0.12f);
	glVertex2f(-.54f, 0.18f);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.133f, 0.545f, 0.133f); //Forest Green
 glVertex2f(-0.54f,.08f);
    glVertex2f(-.4,.08f);
  glVertex2f(-.4f, 0.16f);
  glVertex2f(-.54f, 0.16f);
glEnd();






                                                                                         // Tree




               {
                    int i;

	GLfloat x=0.72f; GLfloat y=0.31f; GLfloat radius =.07f;
	GLfloat x1=0.63; GLfloat y1=0.36f; GLfloat r1 =.07f;
   GLfloat x2=0.61f; GLfloat y2=0.50f;GLfloat r2 =.07f;
	GLfloat x3=0.62f; GLfloat y3=0.64f;GLfloat r3 =.07f;
	GLfloat x4=0.7f; GLfloat y4=0.75f;GLfloat r4 =.07f;
	GLfloat x5=0.8f; GLfloat y5=0.86f;GLfloat r5 =.08f;
	GLfloat x6=0.92f; GLfloat y6=0.8f;GLfloat r6 =.07f;
	GLfloat x7=0.99f; GLfloat y7=0.71f;GLfloat r7=.07f;
	GLfloat x10=0.91f; GLfloat y10=0.33f;GLfloat r10=.06f;



	int triangleAmount = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

     glColor3f(0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x1+ (r1 * cos(i *  twicePi / triangleAmount)),
                        y1 + (r1 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x2+ (r2* cos(i *  twicePi / triangleAmount)),
                        y2 + (r2 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

   glColor3f(0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
		glVertex2f( x3+ (r3 * cos(i *  twicePi / triangleAmount)),
                        y3 + (r3 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x4+ (r4 * cos(i *  twicePi / triangleAmount)),
                        y4 + (r4 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x5+ (r5 * cos(i *  twicePi / triangleAmount)),
                        y5 + (r5* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();
glColor3f(0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x6+ (r6 * cos(i *  twicePi / triangleAmount)),
                        y6 + (r6 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x7+ (r7 * cos(i *  twicePi / triangleAmount)),
                        y7 + (r7 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y10); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x10+ (r10 * cos(i *  twicePi / triangleAmount)),
                        y10 + (r10 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();





               }


        glBegin(GL_POLYGON);
       glColor3f(0.0f, 1.0f, 0.0f); //green

       glVertex2f(0.6f, 0.68f);
       glVertex2f(0.83f, 0.85f);
       glVertex2f(1.0f, 0.68f);
       glVertex2f(1.0f, 0.31f);
        glVertex2f(0.58f, 0.31f);
        glVertex2f(0.6f, 0.68f);
         glEnd();


      glBegin(GL_POLYGON);
      glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

      glVertex2f(0.68f, 0.54f);
      glVertex2f(0.71f, 0.57f);
      glVertex2f(0.79f, 0.39f);
       glVertex2f(0.74f, 0.37f);
       glVertex2f(0.68f, 0.54f);
       glEnd();

      glBegin(GL_POLYGON);
   glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

      glVertex2f(0.75f, -0.14f);
      glVertex2f(0.85f, -0.14f);
      glVertex2f(0.89f, -0.28f);
      glVertex2f(0.71f, -0.27f);
      glVertex2f(0.75f, -0.14f);
       glEnd();

       glBegin(GL_POLYGON);
      glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

      glVertex2f(0.79f, 0.39f);
       glVertex2f(0.9f, 0.55f);
       glVertex2f(0.93f, 0.52f);
       glVertex2f(0.85f, 0.35f);
        glVertex2f(0.79f, 0.39f);

       glEnd();

        glBegin(GL_POLYGON);
         glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

       glVertex2f(0.74f, 0.37f);
       glVertex2f(0.8f, 0.40f);
       glVertex2f(0.85f, 0.35f);
       glVertex2f(0.85f, -0.17f);
        glVertex2f(0.75f, -0.16f);
        glVertex2f(0.74f, 0.37f);

         glEnd();



     /* glBegin(GL_POLYGON);
     glColor3f(0.0f, 1.0f, 0.0f); //green
      glVertex2f(0.9f, 0.56f);
      glVertex2f(0.84f, 0.35f);
      glVertex2f(0.84f, 0.33f);
      glVertex2f(0.86f, -0.17f);
      glVertex2f(0.89f, -0.28f);
      glVertex2f(0.7f, -0.27f);
      glVertex2f(0.76f, -0.18f);
      glVertex2f(0.75f, 0.33f);
      glVertex2f(0.68f, 0.54f);

    glEnd();*/

     glLoadIdentity();
                  // Reset the model-view matrix









	glLoadIdentity();
    //Bird
///Bird
 glPushMatrix();
    glTranslatef(position,0.0f,0.0f);////translate

    glTranslatef(+0.0f, -0.1f, 0.0f);

    glTranslatef(position,0.0f,0.0f);////translate




    glTranslatef(-0.2f, 0.0f, 0.0f);

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();
     glLoadIdentity();

 glPushMatrix();
    glTranslatef(position,0.0f,0.0f);////translate

    glTranslatef(+0.0f, -0.1f, 0.0f);
        glPopMatrix();


	/////////2nd bird////
	glPushMatrix();
    glTranslatef(position,0.0f,0.0f);////translate


                  // Reset the model-view matrix

   glTranslatef(-0.2f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.f, 00.0f, 0.0f);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();
     glLoadIdentity();
                  // Reset the model-view matrix

    glTranslatef(+0.49f, 0.05f, 0.0f);
	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.f, 00.0f, 0.0f);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();

     glLoadIdentity();

     glLoadIdentity();

glPopMatrix();
/// Man BoY 1

       glLoadIdentity();
                     //Flower  1////
{    glTranslatef(0.0f, -0.10f, 0.0f);
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

  glLoadIdentity();
               // Reset the model-view matrix
   glTranslatef(-0.91f, +0.13f, 0.0f); // Translate x right and y up

                       //Flower2////
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
   glLoadIdentity();
//glutTimerFunc(12000,display1,0);


                       //Flowe3////
{    glTranslatef(-0.75f, +0.2f, 0.0f);// Translate x right and y up

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
   glLoadIdentity();


                          //Flower4////
{   glTranslatef(-0.60f, +0.25f, 0.0f);// Translate x right and y up

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
   glLoadIdentity();




                          //Flower5////
{    glTranslatef(-0.32f, +0.40f, 0.0f); // Translate x right and y up

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
   glLoadIdentity();


                          //Flower6////
{  glTranslatef(0.20f,- 0.10f, 0.0f);
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
   glLoadIdentity();


                          //Flower7////
{ glTranslatef(0.40f,- 0.10f, 0.0f);
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
   glLoadIdentity();


                          //Flower8////
{    glTranslatef(0.60f,- 0.10f, 0.0f); // Translate x right and y up

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
   glLoadIdentity();


                             //Flower9////
{    glTranslatef(0.80f,- 0.10f, 0.0f); // Translate x right and y up

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
   glLoadIdentity();



                             //Flower10////
{    glTranslatef(0.95f,- 0.10f, 0.0f); // Translate x right and y up

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
   glLoadIdentity();

                          //Flower11////
{    glTranslatef(-0.20f,- 0.10f, 0.0f); // Translate x right and y up

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
   glLoadIdentity();

   glColor3f(1.0,0.0,0.0);
renderBitmapString(-0.08f, 0.6f, 0.5f, GLUT_BITMAP_TIMES_ROMAN_24, "Ptoltuli High School");

///Boy

glPushMatrix();
	 glTranslatef(-0.49f, -0.53f, 0.0f);

	 glPushMatrix();
	 glTranslatef(+0.05f, 0.0f, 0.0f);///translation for boy

	 glBegin(GL_QUADS);
    glColor3f(0.95f, 0.85f, 0.95f);
    glVertex2f(-0.54f+xr, -0.15f+yr);/////////BOY NECK
    glVertex2f(-0.5f+xr, -0.15f+yr);
    glVertex2f(-0.5f+xr, -0.17f+yr);
    glVertex2f(-0.54f+xr, -0.17f+yr);
    glEnd();


	///boy head
	 glBegin(GL_POLYGON);
    glColor3f(0.25f, 0.12f, 0.15f);///
    glVertex2f(-0.53f+xr,-0.16f+yr);
    glVertex2f(-0.5f+xr,-0.16f+yr);
    glVertex2f(-0.48f+xr,-0.14f+yr);
    glVertex2f(-0.46f+xr,-0.1f+yr);
    glVertex2f(-0.57f+xr,-0.1f+yr);
    glVertex2f(-0.56f+xr,-0.14f+yr);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.25f, 0.12f, 0.15f);////BLACK BOY HAIR
    glVertex2f(-0.46f+xr,-0.1f+yr);
     glVertex2f(-0.57f+xr,-0.1f+yr);
    glVertex2f(-0.58f+xr,0.0f+yr);
    glVertex2f(-0.56f+xr,0.05f+yr);
    glVertex2f(-0.52f+xr,0.08f+yr);
    glVertex2f(-0.46f+xr,0.04f+yr);
    glVertex2f(-0.45f+xr,0.01f+yr);
glEnd();
     glBegin(GL_QUADS);
    glColor3f(0.15f, 0.15f, 0.95f);
    glVertex2f(-0.55f+xr, -0.17f+yr);/////////BOY CHEST
    glVertex2f(-0.55f+xr, -0.26f+yr);
    glVertex2f(-0.49f+xr, -0.26f+yr);
    glVertex2f(-0.49f+xr, -0.17f+yr);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    /////////BOY CHEST
    glVertex2f(-0.55f+xr, -0.26f+yr);
    glVertex2f(-0.49f+xr, -0.26f+yr);
    glVertex2f(-0.49f+xr, -0.3f+yr);
    glVertex2f(-0.55f+xr, -0.3f+yr);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.55f+xr, -0.3f+yr);/////////BOY LEG--1
    glVertex2f(-0.53f+xr, -0.3f+yr);
    glVertex2f(-0.53f+xr, -0.37f+yr);
    glVertex2f(-0.55f+xr, -0.37f+yr);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.51f+xr, -0.3f+yr);/////////BOY LEG--2
    glVertex2f(-0.49f+xr, -0.3f+yr);
    glVertex2f(-0.49f+xr, -0.37f+yr);
    glVertex2f(-0.51f+xr, -0.37f+yr);
    glEnd();

      glBegin(GL_POLYGON);
    glColor3f(0.15f, 0.15f, 0.95f);////BLUE BOY HAND--1
    glVertex2f(-0.488f+xr,-0.2f+yr);
     glVertex2f(-0.44f+xr,-0.29f+yr);
    glVertex2f(-0.43f+xr,-0.27f+yr);
    glVertex2f(-0.48f+xr,-0.18f+yr);
    glVertex2f(-0.49f+xr,-0.18f+yr);
    glVertex2f(-0.49f+xr,-0.21f+yr);
   glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.91f, 0.75f, 0.67f+yr);////skin color
    glVertex2f(-0.45f+xr, -0.27f+yr);
    glVertex2f(-0.44f+xr,-0.29f+yr);
    glVertex2f(-0.43f+xr,-0.27f+yr);/////////HAND1
    glVertex2f(-0.44f+xr, -0.25f+yr);

    glEnd();

       glBegin(GL_POLYGON);
    glColor3f(0.15f, 0.15f, 0.95f);////BLUE BOY HAND--2
    glVertex2f(-0.55f+xr,-0.2f+yr);
    glVertex2f(-0.55f+xr,-0.18f+yr);
    glVertex2f(-0.56f+xr,-0.18f+yr);
    glVertex2f(-0.59f+xr,-0.25f+yr);
    glVertex2f(-0.58f+xr,-0.27f+yr);

   glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.91f, 0.75f, 0.67f);////skin color
   glVertex2f(-0.59f+xr,-0.25f+yr);
    glVertex2f(-0.58f+xr,-0.27f+yr);
    glVertex2f(-0.59f+xr,-0.29f+yr);
    glVertex2f(-0.6f+xr,-0.275f+yr);

    glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.25f, 0.12f, 0.15f);////FACE
    glVertex2f(-0.565f+xr,-0.1f+yr);
    glVertex2f(-0.565f+xr,-0.07f+yr);
    glVertex2f(-0.56f+xr,-0.04f+yr);
    glVertex2f(-0.56f+xr,-0.02f+yr);
    glVertex2f(-0.51f+xr,-0.03f+yr);
    glVertex2f(-0.465f+xr,-0.01f+yr);
    glVertex2f(-0.465f+xr,-0.04f+yr);
    glVertex2f(-0.462f+xr,-0.07f+yr);
    glVertex2f(-0.462f+xr,-0.1f+yr);


   glEnd();




	//boy head


    glPopMatrix();
    glPopMatrix();
    glPopMatrix();


glFlush();

    /*glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(10, 250, -10, 130); // Set the 2D coordinate system
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    const char* text = "Ptoltuli High School we ar here for your care"; // Text to display
    renderText(100, 100, GLUT_BITMAP_9_BY_15, text);

    glEnd();



     glFlush(); // Render now*/
}


