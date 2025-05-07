#include<windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
#include "GlobalVariables.h"
#include "GlobalFunctions.h"
#include "BoysRoom_night_view.h"

void BoysRoom_night_view() //Boy's Room
{

  glClearColor(0.647f, 0.518f, 0.412f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  //glEnable(GL_DEPTH_TEST);

    //River:
    //glBegin(GL_POLYGON);
    //glColor3f(0.0f, 0.588f, 1.0f); //Bright blue
     glBegin(GL_LINES);
     glColor3f(0.0f, 0.04f, 0.0f);/////walls lines

     glVertex2f(-1.0f, 0.97f);
    glVertex2f(-0.27f, 0.24f);

    glVertex2f(-0.27f, 0.24f);
    glVertex2f(0.23f, 0.24f);

    glVertex2f(0.23f, 0.24f);
    glVertex2f(1.0f, 1.0f);

    glVertex2f(-0.27f, 0.24f);
    glVertex2f(-0.27f, -0.24f);

    glVertex2f(-0.27f, -0.24f);
    glVertex2f(0.23f, -0.24f);

    glVertex2f(0.23f, -0.24f);
    glVertex2f(0.23f, 0.24f);

    glVertex2f(0.23f, -0.24f);
    glVertex2f(1.0f,-1.0f);

    glVertex2f(-0.27f, -0.24f);
    glVertex2f(-0.58f, -0.55f);

    glEnd();



    //chair



     glPushMatrix();//glPushMatrix copies the tp matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(0.1,-0.3,0.2);

    glScalef(0.9,0.9,0.0);

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.21f, -0.02f);
    glVertex2f(0.21f, -0.32f);
    glVertex2f(0.06f, -0.32f);
    glVertex2f(0.06f, -0.02f);

    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.21f, -0.02f);
    glVertex2f(0.21f, -0.32f);
    glVertex2f(0.06f, -0.32f);
    glVertex2f(0.06f, -0.02f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.06f, -0.32f);
    glVertex2f(0.06f, -0.5f);
    glVertex2f(0.07f, -0.5f);
    glVertex2f(0.07f, -0.32f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.07f, -0.32f);
    glVertex2f(0.07f, -0.5f);
    glVertex2f(0.08f, -0.47f);
    glVertex2f(0.08f, -0.32f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.21f, -0.32f);
    glVertex2f(0.2f, -0.32f);
    glVertex2f(0.2f, -0.5f);
    glVertex2f(0.21f, -0.5f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.21f, -0.02f);
    glVertex2f(0.21f, -0.5f);
    glVertex2f(0.22f, -0.48f);
    glVertex2f(0.22f, 0.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.21f, -0.02f);
    glVertex2f(0.22f, 0.0f);
    glVertex2f(0.07f, 0.0f);
    glVertex2f(0.06f, -0.02f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.21f, -0.29f);
    glVertex2f(0.21f, -0.32f);
    glVertex2f(0.24f, -0.23f);
    glVertex2f(0.24f, -0.2f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.24f, -0.23f);
    glVertex2f(0.24f, -0.4f);
    glVertex2f(0.23f, -0.41f);
    glVertex2f(0.23f, -0.24f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.23f, -0.41f);
    glVertex2f(0.22f, -0.41f);
    glVertex2f(0.22f, -0.28f);
    glVertex2f(0.23f, -0.24);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.24f, -0.2f);
    glVertex2f(0.22f, -0.26f);
    glVertex2f(0.22f, -0.2f);

    glEnd();


       glPopMatrix();








    //table


glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f);

    //glVertex2f(0.37f, -0.35f);
     glVertex2f(0.69f, -0.35f);

    glVertex2f(0.69f, 0.02f);
    glVertex2f(0.55f, 0.03f);

    glVertex2f(0.53f, -0.01f);
    glVertex2f(0.52f, -0.27f);
    glVertex2f(0.31f, -0.27f);
      glVertex2f(0.37f, -0.35f);


    glEnd();

    //glVertex2f(0.67f, -0.02f);

     glBegin(GL_QUADS);
      glColor3f(0.290f, 0.016f, 0.016f);//table
     glVertex2f(0.37f, -0.35f);
      glVertex2f(0.69f, -0.35f);
      glVertex2f( 0.68f,  -0.67f);
      glVertex2f(0.37f,  -0.67f);
        glEnd();

        glBegin(GL_QUADS);
      glColor3f(0.290f, 0.016f, 0.016f);//table
      glVertex2f(0.53f, -0.01f);
      glVertex2f(0.66f, -0.02f);
      glVertex2f(0.69f, 0.02f);
       glVertex2f(0.55f, 0.03f);
              glEnd();

               glBegin(GL_QUADS);
      glColor3f(0.290f, 0.016f, 0.016f);//table

      glVertex2f(0.66f, -0.02f);
      glVertex2f(0.69f, 0.02f);
        glVertex2f(0.69f, -0.35f);
        glVertex2f(0.66f, -0.35f);

              glEnd();


               glBegin(GL_LINES);
      glColor3f(0.290f, 0.016f, 0.016f);//table

      glVertex2f(0.55f, -0.07f);
      glVertex2f(0.67f, -0.07f);

      glVertex2f(0.55f, -0.13f);
      glVertex2f(0.67f, -0.13f);

        glVertex2f(0.55f, -0.19f);
        glVertex2f(0.67f, -0.19f);

        glVertex2f(0.55f, -0.25f);
        glVertex2f(0.67f, -0.25f);

              glEnd();

                 glBegin(GL_QUADS);
      glColor3f(0.290f, 0.016f, 0.016f);//table
      glVertex2f(0.53f, -0.01f);
    glVertex2f(0.52f, -0.27f);
      glVertex2f(0.54f, -0.29f);
       glVertex2f(0.55f, 0.03f);
              glEnd();

              glBegin(GL_LINES);
      glColor3f(0.290f, 0.016f, 0.016f);//table

      glVertex2f(0.52f, -0.27f);
      glVertex2f(0.67f, -0.35f);
      glEnd();


                 glBegin(GL_QUADS);
      glColor3f(0.290f, 0.016f, 0.016f);//table
      glVertex2f(0.31f, -0.27f);
       glVertex2f(0.31f, -0.56f);
      glVertex2f(0.37f, -0.56f);
       glVertex2f(0.37f, -0.35f);

        glEnd();

         glBegin(GL_QUADS);
      glColor3f(0.514f, 0.2f, 0.2f);//table

      glVertex2f(0.31f, -0.27f);
       glVertex2f(0.31f, -0.35f);
       glVertex2f(0.37f, -0.42f);
       glVertex2f(0.37f, -0.35f);

        glEnd();
















//maruf part
//Tubelight


 glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); //black part
    glVertex2f(-0.16f, 0.24f);
    glVertex2f(0.13f, 0.24f);
    glVertex2f(0.13f, 0.2f);

    glVertex2f(-0.16f, 0.2f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f); //white part
    glVertex2f(-0.14f, 0.23f);
    glVertex2f(0.11f, 0.23f);
    glVertex2f(0.11f, 0.21f);

    glVertex2f(-0.14f, 0.21f);

    glEnd();






//Door

 glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); //inner frame black
    glVertex2f(-0.09f, 0.12f);
    glVertex2f(0.07f, 0.12f);
    glVertex2f(0.07f, -0.24f);

    glVertex2f(-0.09f, -0.24f);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.267f, 0.510f); //outer frame white
    glVertex2f(-0.08f, 0.11f);
    glVertex2f(0.05f, 0.11f);
    glVertex2f(0.05f, -0.24f);

    glVertex2f(-0.08f, -0.24f);

    glEnd();



    //Window


     glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); //inner frame black
    glVertex2f(-0.74f, 0.28f);
    glVertex2f(-0.72f, 0.28f);
    glVertex2f(-0.71f, -0.08f);

    glVertex2f(-0.73f, -0.08f);

    glEnd();


 glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);//inner frame black
    glVertex2f(-0.72f, 0.27f);
    glVertex2f(-0.43f, 0.17f);
    glVertex2f(-0.42f, -0.05f);

    glVertex2f(-0.71f, -0.07f);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.267f, 0.510f); //outer frame white
    glVertex2f(-0.72f, 0.27f);
    glVertex2f(-0.44f, 0.16f);
    glVertex2f(-0.44f, -0.04f);

    glVertex2f(-0.71f, -0.07f);

    glEnd();

     //window grills
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); //grill 1
    glVertex2f(-0.69f, 0.26f);
    glVertex2f(-0.67f, 0.25f);
    glVertex2f(-0.67f, -0.07f);

    glVertex2f(-0.69f, -0.07f);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); //grill 2
    glVertex2f(-0.64f, 0.24f);
    glVertex2f(-0.62f, 0.23f);
    glVertex2f(-0.62f, -0.065f);

    glVertex2f(-0.64f, -0.065f);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); //grill 3
    glVertex2f(-0.59f, 0.23f);
    glVertex2f(-0.58f, 0.22f);
    glVertex2f(-0.58f, -0.06f);

    glVertex2f(-0.59f, -0.06f);

     glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); //grill 4
    glVertex2f(-0.55f, 0.21f);
    glVertex2f(-0.54f, 0.20f);
    glVertex2f(-0.54f, -0.064f);

    glVertex2f(-0.55f, -0.05f);

     glEnd();

      glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); //grll 5
    glVertex2f(-0.5f, 0.19f);
    glVertex2f(-0.48f, 0.18f);
    glVertex2f(-0.48f, -0.05f);

    glVertex2f(-0.5f, -0.05f);

     glEnd();














 //float k = 0.0f;
 //glPushMatrix(); //glPushMatrix copies the tp matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    //glTranslatef(0.0f,0.0,0.0f);
    //glutPostRedisplay();
    //glMatrixMode(GL_MODELVIEW);
        //glRotatef(i ,1.0f,0.0f,1.0f);
        //glRotatef()


     int j;

	GLfloat x=-0.05f; GLfloat y=0.56f; GLfloat radius =.04f;  ////circle
	GLfloat x1=-0.05f; GLfloat y1=0.56f; GLfloat radius1 =.015f;  ////circle
   GLfloat x2=0.8f; GLfloat y2=0.38f;GLfloat r2 =.05f;
	//GLfloat x3=-0.69f; GLfloat y3=0.91f;GLfloat r3 =.03f;

	int triangleAmount = 150; //# of lines used to draw circle
	int lineAmount = 150; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glColor3f(1.0f, 1.0f, 1.0f);////fan circle
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f( x + (radius * cos(j *  twicePi / triangleAmount)),
                        y + (radius * sin(j * twicePi / triangleAmount)) );
		}
	glEnd();

	/*glColor3f(1.0f, 1.0f, 0.0f);////wall clock
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x2 + (radius * cos(i *  twicePi / triangleAmount)),
                        y2 + (radius * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();*/

	glPushMatrix();

	 glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);//fan
      glVertex2f(-0.03f, 0.55f);
      glVertex2f( -0.03, 0.58f);
      glVertex2f( 0.09f,  0.58f);
      glVertex2f(0.09f,  0.55f);
        glEnd();


         glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);//fan
      glVertex2f(-0.065f, 0.52f);
      glVertex2f( -0.04, 0.52f);
      glVertex2f( -0.04f,  0.43f);
      glVertex2f(-0.065f,  0.43f);
        glEnd();

        glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);//fan
      glVertex2f(-0.06f, 0.58f);
      glVertex2f( -0.04f, 0.58f);
      glVertex2f( -0.04f,  0.73f);
      glVertex2f(-0.06f,  0.73f);

        glEnd();

          glPushMatrix();
         glScalef(0.9,0.95,0.0);
       glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);//fan
      glVertex2f(-0.07f, 0.56f);
      glVertex2f( -0.07f, 0.59f);
      glVertex2f( -0.21f,  0.6f);
      glVertex2f(-0.21f,  0.57f);
        glEnd();

        glPopMatrix();
        // Center of the fan blades
/*GLfloat fanCenterX = -0.05f;
GLfloat fanCenterY = 0.56f;

// Save the current transformation matrix
glPushMatrix();

// Translate the fan blades to the origin
glTranslatef(-fanCenterX, -fanCenterY, 0.0f);

// Rotate the fan blades
glRotatef(i, 0.0f, 0.0f, 1.0f);

// Translate the fan blades back to their original position
glTranslatef(fanCenterX, fanCenterY, 0.0f);

// Draw the fan blades
glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f);//fan
glVertex2f(-0.03f, 0.55f);
glVertex2f( -0.03, 0.58f);
glVertex2f( 0.09f,  0.58f);
glVertex2f(0.09f,  0.55f);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f);//fan
glVertex2f(-0.065f, 0.52f);
glVertex2f( -0.04, 0.52f);
glVertex2f( -0.04f,  0.43f);
glVertex2f(-0.065f,  0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f);//fan
glVertex2f(-0.06f, 0.58f);
glVertex2f( -0.04f, 0.58f);
glVertex2f( -0.04f,  0.73f);
glVertex2f(-0.06f,  0.73f);
glEnd();

glPushMatrix();
glScalef(0.9,0.95,0.0);
glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f);//fan
glVertex2f(-0.07f, 0.56f);
glVertex2f( -0.07f, 0.59f);
glVertex2f( -0.21f,  0.6f);
glVertex2f(-0.21f,  0.57f);
glEnd();
glPopMatrix();

// Restore the transformation matrix*/


	i += 0.1f; // Adjust the value to control the speed of rotation
if (i >= 360.0f) { // Keep i within the range [0, 360)
    i -= 360.0f;
}
glutPostRedisplay();
 glPopMatrix();


	 glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_LOOP);
		for(j = 0; j <= lineAmount;j++) {
			glVertex2f(
			    x + (radius * cos(j *  twicePi / lineAmount)),
			    y + (radius* sin(j * twicePi / lineAmount))
			);
		}
	glEnd();


	glColor3f(0.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f( x1 + (radius1 * cos(j *  twicePi / triangleAmount)),
                        y1 + (radius1 * sin(j * twicePi / triangleAmount)) );
		}

	glEnd();





//BED
         glBegin(GL_QUADS);
      glColor3f(0.514f, 0.263f, 0.2f);//bed
      glVertex2f(-0.77f, -0.55f);
      glVertex2f( -0.12, -0.55f);
      glVertex2f( -0.15f,  -0.71f);
      glVertex2f(-0.99f,  -0.71f);
        glEnd();

         glBegin(GL_QUADS);
      glColor3f(0.290f, 0.016f, 0.016f);//bed
        glVertex2f( -0.15f,  -0.71f);
      glVertex2f( -0.12, -0.55f);
      glVertex2f( -0.12f,  -0.76f);
      glVertex2f(-0.16f,  -0.99f);
        glEnd();

         glBegin(GL_QUADS);
      glColor3f(0.290f, 0.016f, 0.016f);//bed
        glVertex2f( -0.15f,  -0.71f);
      glVertex2f(-0.16f,  -0.99f);
      glVertex2f(-0.99f,  -0.99f);
      glVertex2f(-0.99f,  -0.71f);
        glEnd();

         glBegin(GL_QUADS);
      glColor3f(0.290f, 0.016f, 0.016f);//bed//0.290f, 0.016f, 0.016f //Oxblood Brown
      glVertex2f(-0.77f, -0.55f);
      glVertex2f( -0.78, -0.32f);
      glVertex2f( -1.0f,  -0.41f);
      glVertex2f(-0.99f,  -0.71f);
        glEnd();


         glBegin(GL_QUADS);
     glColor3f(0.514f, 0.263f, 0.2f);//bed
      glVertex2f( -0.78, -0.32f);
      glVertex2f( -0.81, -0.3f);
      glVertex2f( -1.02f,  -0.38f);
      glVertex2f(-1.0f,  -0.41f);
        glEnd();


        //Bedsheet


         glBegin(GL_POLYGON);
     glColor3f(0.5f, 0.5f, 0.6f);
    glVertex2f(-0.97f, -0.72f);
    glVertex2f(-0.95f, -0.69f);
    glVertex2f(-0.79f, -0.56f);

    glVertex2f(-0.77f, -0.55f);
     glVertex2f(-0.76f, -0.54f);
     glVertex2f(-0.63f, -0.54f);
     glVertex2f(-0.67f, -0.6f);
     glVertex2f(-0.68f, -0.63f);

     glVertex2f(-0.7f, -0.64f);
     glVertex2f(-0.72f, -0.65f);
     glVertex2f(-0.74f, -0.72f);



     glEnd();


     //pillow














////Boy



	GLfloat x0=-0.54f; GLfloat y0=-0.08f; GLfloat r0 =.01f;
	GLfloat x00=-0.54f; GLfloat y00=-0.08f; GLfloat r00 =.007f;
	int triangleAmount1 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat TwicePi = 2.0f * PI;


	 glLoadIdentity(); // Reset the current matrix


    glPushMatrix();
    glTranslatef(-0.7f, -0.1f, 0);
    glRotatef(90.0f, 0.0, 0.0, 1.0);




    glBegin(GL_QUADS);
    glColor3f(0.95f, 0.85f, 0.95f);
    glVertex2f(-0.54f, -0.15f);/////////BOY NECK
    glVertex2f(-0.5f, -0.15f);
    glVertex2f(-0.5f, -0.17f);
    glVertex2f(-0.54f, -0.17f);
    glEnd();



     glBegin(GL_QUADS);
    glColor3f(0.15f, 0.15f, 0.95f);
    glVertex2f(-0.55f, -0.17f);/////////BOY CHEST
    glVertex2f(-0.55f, -0.26f);
    glVertex2f(-0.49f, -0.26f);
    glVertex2f(-0.49f, -0.17f);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    /////////BOY CHEST
    glVertex2f(-0.55f, -0.26f);
    glVertex2f(-0.49f, -0.26f);
    glVertex2f(-0.49f, -0.3f);
    glVertex2f(-0.55f, -0.3f);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.55f, -0.3f);/////////BOY LEG--1
    glVertex2f(-0.53f, -0.3f);
    glVertex2f(-0.53f, -0.37f);
    glVertex2f(-0.55f, -0.37f);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.51f, -0.3f);/////////BOY LEG--2
    glVertex2f(-0.49f, -0.3f);
    glVertex2f(-0.49f, -0.37f);
    glVertex2f(-0.51f, -0.37f);
    glEnd();

      glBegin(GL_POLYGON);
    glColor3f(0.15f, 0.15f, 0.95f);////BLUE BOY HAND--1
    glVertex2f(-0.488f,-0.2f);
     glVertex2f(-0.44f,-0.29f);
    glVertex2f(-0.43f,-0.27f);
    glVertex2f(-0.48f,-0.18f);
    glVertex2f(-0.49f,-0.18f);
    glVertex2f(-0.49f,-0.21f);
   glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.91f, 0.75f, 0.67f);////skin color
    glVertex2f(-0.45f, -0.27f);
    glVertex2f(-0.44f,-0.29f);
    glVertex2f(-0.43f,-0.27f);/////////HAND1
    glVertex2f(-0.44f, -0.25f);

    glEnd();

       glBegin(GL_POLYGON);
    glColor3f(0.15f, 0.15f, 0.95f);////BLUE BOY HAND--2
    glVertex2f(-0.55f,-0.2f);
    glVertex2f(-0.55f,-0.18f);
    glVertex2f(-0.56f,-0.18f);
    glVertex2f(-0.59f,-0.25f);
    glVertex2f(-0.58f,-0.27f);

   glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.91f, 0.75f, 0.67f);////skin color
   glVertex2f(-0.59f,-0.25f);
    glVertex2f(-0.58f,-0.27f);
    glVertex2f(-0.59f,-0.29f);
    glVertex2f(-0.6f,-0.275f);

    glEnd();

    glPushMatrix();
    glScalef(0.7f,0.7f,0.0f);
    glTranslatef(-0.22, -0.07f, 0.0f);
    //boy head
	 glBegin(GL_POLYGON);
    glColor3f(0.91f, 0.75f, 0.67f);////skin color
    glVertex2f(-0.53f,-0.16f);
    glVertex2f(-0.5f,-0.16f);
    glVertex2f(-0.48f,-0.14f);
    glVertex2f(-0.46f,-0.1f);
    glVertex2f(-0.57f,-0.1f);
    glVertex2f(-0.56f,-0.14f);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.25f, 0.12f, 0.15f);////BLACK BOY HAIR
    glVertex2f(-0.46f,-0.1f);
     glVertex2f(-0.57f,-0.1f);
    glVertex2f(-0.58f,0.0f);
    glVertex2f(-0.56f,0.05f);
    glVertex2f(-0.52f,0.08f);
    glVertex2f(-0.46f,0.04f);
    glVertex2f(-0.45f,0.01f);
glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.91f, 0.75f, 0.67f);////FACE
    glVertex2f(-0.565f,-0.1f);
    glVertex2f(-0.565f,-0.07f);
    glVertex2f(-0.56f,-0.04f);
    glVertex2f(-0.56f,-0.02f);
    glVertex2f(-0.51f,-0.03f);
    glVertex2f(-0.465f,-0.01f);
    glVertex2f(-0.465f,-0.04f);
    glVertex2f(-0.462f,-0.07f);
    glVertex2f(-0.462f,-0.1f);


   glEnd();

   	glColor3f(1.0f, 1.0f, 1.0f);///EYE--1
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x0, y0); // center of circle
		for(int i = 0; i <= triangleAmount1;i++) {
			glVertex2f( x0+ (r0 * cos(i *  TwicePi / triangleAmount1)),
                        y0 + (r0 * sin(i * TwicePi / triangleAmount1)) );
		}
	glEnd();


   	glColor3f(0.0f, 0.0f, 0.0f);///EYE--1
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x00, y00); // center of circle
		for(int i = 0; i <= triangleAmount1;i++) {
			glVertex2f( x00+ (r00 * cos(i *  TwicePi / triangleAmount1)),
                        y00+ (r00 * sin(i * TwicePi / triangleAmount1)) );
		}
	glEnd();

	 glPushMatrix();
	 glTranslatef(+0.052f, 0.0f, 0.0f);///translation for BOY EYE

	 	glColor3f(1.0f, 1.0f, 1.0f);///EYE--2
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x0, y0); // center of circle
		for(int i = 0; i <= triangleAmount1;i++) {
			glVertex2f( x0+ (r0 * cos(i *  TwicePi / triangleAmount1)),
                        y0 + (r0 * sin(i * TwicePi / triangleAmount1)) );
		}
	glEnd();


   	glColor3f(0.0f, 0.0f, 0.0f);///EYE--2
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x00, y00); // center of circle
		for(int i = 0; i <= triangleAmount1;i++) {
			glVertex2f( x00+ (r00 * cos(i *  TwicePi / triangleAmount1)),
                        y00+ (r00 * sin(i * TwicePi / triangleAmount1)) );
		}
	glEnd();


    glPopMatrix();

    glPopMatrix();



    glPopMatrix();




//glutTimerFunc(12000,display2,0);
   glFlush();

}
