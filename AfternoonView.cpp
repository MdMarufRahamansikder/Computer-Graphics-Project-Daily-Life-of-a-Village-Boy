#include<windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
#include "GlobalVariables.h"
#include "GlobalFunctions.h"
#include "AfternoonView.h"

void AfternoonView()
{
   glClearColor(0.98f, 0.773f, 0.357f, 0.0f); // Set background color to sky blue //Sky
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)



	 glPushMatrix();
    //glTranslatef(0.0f,position3, 0.0f);///translation of sun
 glPushMatrix();
{


   int i;

	GLfloat x=-0.19f; GLfloat y=0.82f; GLfloat radius =.09f;///sun
	int triangleAmount = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

    //glTranslatef(0.0f,-0.38f, 0.0f);
	glColor3f(0.972f, 0.667f, 0.357f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

   glPopMatrix();
   glPopMatrix();}
    //River:
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.588f, 1.0f); //Bright blue

    glVertex2f(-1.0f, 0.450f);
    glVertex2f(1.0f, 0.450f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);

    glEnd();

    //Ground:
    //First Green part of ground:
    glBegin(GL_POLYGON);
    glColor3f(0.133f, 0.545f, 0.133f); //Forest Green

    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, 0.45f);
    glVertex2f(-0.27f, 0.45f);
    glVertex2f(-0.32f, 0.36f);
    glVertex2f(-0.23f, 0.07f);
    glVertex2f(0.07f, -0.08f);
    glVertex2f(0.04f, -0.35f);
    glVertex2f(0.51f, -0.48f);
    glVertex2f(0.96f, -0.38f);
    glVertex2f(1.0f, -0.4f);
    glVertex2f(1.0f, -1.0f);

    glEnd();

    //Second Green part of ground:
    glBegin(GL_POLYGON);
    glColor3f(0.133f, 0.545f, 0.133f); //Forest Green

    glVertex2f(0.11f, 0.45f);
    glVertex2f(0.15f, 0.32f);
    glVertex2f(0.44f, -0.07f);
    glVertex2f(0.86f, -0.01f);
    glVertex2f(1.0f, -0.06f);
    glVertex2f(1.0f, 0.45f);

    glEnd();

    //First Brown part of First Ground:
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

    glVertex2f(-0.27f, 0.45f);
    glVertex2f(-0.27f, 0.41f);
    glVertex2f(-0.31f, 0.32f);
    glVertex2f(-0.32f, 0.36f);

    glEnd();

    //Second Brown part of First Ground:
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

    glVertex2f(0.06f, -0.3f);
    glVertex2f(0.07f, -0.36f);
    glVertex2f(0.04f, -0.35f);
    glVertex2f(0.07f, -0.08f);
    glVertex2f(0.07f, -0.2f);

    glEnd();

    //Second Brown part of Second Ground:
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

    glVertex2f(0.44f, -0.07f);
    glVertex2f(0.15f, 0.32f);
    glVertex2f(0.11f, 0.45f);
    glVertex2f(0.11f, 0.34f);
    glVertex2f(0.44f, -0.13f);
    glVertex2f(0.86f, -0.06f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, -0.06f);
    glVertex2f(0.86f, -0.01f);

    glEnd();

    //Road:
    glBegin(GL_POLYGON);
    glColor3f(0.588f, 0.412f, 0.098f); //Golden Brown

    glVertex2f(-0.44f, -0.59f);
    glVertex2f(-0.75f, 0.12f);
    glVertex2f(-0.48f, 0.12f);
    glVertex2f(-0.25f, -0.41f);
    glVertex2f(1.0f, -0.7f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(0.82f, -1.0f);

    glEnd();

    //Rimon
    //tree hill
    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(-0.76f, 0.45f);
    glVertex2f(-0.72f,0.55f);
    glVertex2f(-0.67f, 0.61f);
    glVertex2f(-0.66f, 0.61f);
    glVertex2f(-0.6f, 0.55f);
    glVertex2f(-0.555f, 0.45f);
    glVertex2f(-0.76f, 0.45f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(-0.555f, 0.45f);
    glVertex2f(-0.515f, 0.55f);
    glVertex2f(-0.465f, 0.61f);
    glVertex2f(-0.455f, 0.61f);
    glVertex2f(-0.395f, 0.55f);
    glVertex2f(-0.35f, 0.45f);
    glVertex2f(-0.555f, 0.45f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(-0.35f, 0.45f);
    glVertex2f(-0.29f, 0.55f);
    glVertex2f(-0.24f, 0.61f);
    glVertex2f(-0.23f, 0.61f);
    glVertex2f(-0.19f, 0.55f);
    glVertex2f(-0.13f, 0.45f);
    glVertex2f(-0.35f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(-0.14f, 0.45f);
    glVertex2f(-0.1f, 0.55f);
    glVertex2f(-0.05f, 0.61f);
    glVertex2f(-0.04f, 0.61f);
    glVertex2f(0.02f, 0.55f);
    glVertex2f(0.065f, 0.45f);
    glVertex2f(-0.14f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(0.06f, 0.45f);
    glVertex2f(0.1f, 0.56f);
    glVertex2f(0.15f, 0.61f);
    glVertex2f(0.16f, 0.61f);
    glVertex2f(0.22f, 0.56f);
    glVertex2f(0.255f, 0.45f);
    glVertex2f(0.06f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(0.25f, 0.45f);
    glVertex2f(0.3f, 0.56f);
    glVertex2f(0.36f, 0.61f);
    glVertex2f(0.37f, 0.61f);
    glVertex2f(0.43f, 0.56f);
    glVertex2f(0.48f, 0.45f);
     glVertex2f(0.25f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(0.48f, 0.45f);
    glVertex2f(0.52f, 0.55f);
    glVertex2f(0.57f, 0.61f);
    glVertex2f(0.58f, 0.61f);
    glVertex2f(0.64f, 0.55f);
    glVertex2f(0.685f, 0.45f);
    glVertex2f(0.48f, 0.45f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(0.685f, 0.45f);
    glVertex2f(0.725f, 0.55f);
    glVertex2f(0.775f, 0.61f);
    glVertex2f(0.785f, 0.61f);
    glVertex2f(0.845f, 0.55f);
    glVertex2f(0.89f, 0.45f);
    glVertex2f(0.685f, 0.45f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.858f, 0.45f); //Green

    glVertex2f(0.89f, 0.45f);
    glVertex2f(0.93f, 0.55f);
    glVertex2f(0.98f, 0.61f);
    glVertex2f(0.99f, 0.61f);
    /*glVertex2f(0.845f, 0.55f);
    glVertex2f(0.89f, 0.45f);*/
    glVertex2f(1.0f, 0.45f);
    glVertex2f(0.89f, 0.45f);


    glEnd();

    //Small Trees in Back:
    glBegin(GL_LINES);
    glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

    glVertex2f(-0.35f, 0.58f);
    glVertex2f(-0.35f, 0.45f);

    glEnd();



    //tree leaf

 glBegin(GL_POLYGON);
  glColor3f(0.0f, 1.0f, 0.0f); //green


    glVertex2f(-1.0f, 0.45f);
    glVertex2f(-1.0f, 0.85f);
    glVertex2f(-.96f, 0.85f);
    glVertex2f(-0.99f, 0.83f);
    glVertex2f(-0.84f, 0.84f);
    glVertex2f(-0.93f, 0.81f);
    glVertex2f(-0.81f, 0.81f);
    glVertex2f(-0.86f, 0.79f);
    glVertex2f(-0.76f, 0.77f);
    glVertex2f(-0.82f, 0.75f);
    glVertex2f(-0.75f, 0.73f);
    glVertex2f(-0.8f, 0.71f);
    glVertex2f(-0.69f, 0.69f);

    glVertex2f(-0.75f, 0.67f);
    glVertex2f(-0.63f, 0.65f);
    glVertex2f(-0.67f, 0.61f);
    glVertex2f(-0.6f, 0.61f);
    glVertex2f(-0.64f, 0.59f);
    glVertex2f(-0.61f, 0.57f);
    glVertex2f(-0.63f, 0.54f);
    glVertex2f(-0.57f, 0.52f);

    glVertex2f(-0.65f, 0.5f);

    glVertex2f(-0.61f, 0.49f);

    glVertex2f(-0.7f, 0.46f);
    glVertex2f(-0.66f, 0.45f);
    glVertex2f(-0.75f, 0.42f);
    glVertex2f(-0.71f, 0.41f);
    glVertex2f(-0.79f, 0.39f);

    glVertex2f(-0.76f, 0.37f);
    glVertex2f(-0.89f, 0.35f);
    glVertex2f(-1.0f, 0.33f);
    glEnd();

    //Tree Trunk:
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

    glVertex2f(-1.0f, 0.35f);
    glVertex2f(-0.91f, 0.35f);
    glVertex2f(-0.9f, -0.2f);
    glVertex2f(-1.0f, -0.2f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

    glVertex2f(-0.91f, 0.35f);
    glVertex2f(-0.78f, 0.53f);
    glVertex2f(-0.81f, 0.58f);
    glVertex2f(-1.0f, 0.29f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

    glVertex2f(-0.88f, 0.45f);
    glVertex2f(-0.86f, 0.5f);
    glVertex2f(-0.89f, 0.55f);
    glVertex2f(-0.91f, 0.53f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

    glVertex2f(-0.96f, 0.29f);
    glVertex2f(-1.0f, 0.45f);
    glVertex2f(-1.0f, 0.35f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

    glVertex2f(-0.98f, -0.2f);
    glVertex2f(-0.9f, -0.2f);
    glVertex2f(-0.81f, -0.37f);
    glVertex2f(-0.88f, -0.34f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.255f, 0.125f); //Dark brown

    glVertex2f(-0.98f, -0.2f);;
    glVertex2f(-1.0f, -0.24f);
    glVertex2f(-1.0f, -0.2f);

    glEnd();


    //Raiyan
    //Back House:
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.6f); //Light Yellow 2

    glVertex2f(-0.59f, 0.31f);
    glVertex2f(-0.59f, 0.13f);
    glVertex2f(-0.38f, 0.13f);
    glVertex2f(-0.38f, 0.31f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.6f); //Light Yellow 2

    glVertex2f(-0.59f, 0.13f);
    glVertex2f(-0.67f, 0.13f);
    glVertex2f(-0.67f, 0.28f);
    glVertex2f(-0.62f, 0.41f);
    glVertex2f(-0.59f, 0.31f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.59f, 0.31f);
    glVertex2f(-0.59f, 0.13f);

    glEnd();

    glBegin(GL_POLYGON);  //Roof
    glColor3f(0.502f, 0.275f, 0.303f); //Russet

    glVertex2f(-0.64f, 0.43f);
    glVertex2f(-0.59f, 0.26f);
    glVertex2f(-0.34f, 0.26f);
    glVertex2f(-0.38f, 0.43f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.275f, 0.303f); //Russet

    glVertex2f(-0.64f, 0.43f);
    glVertex2f(-0.69f, 0.28f);
    glVertex2f(-0.67f, 0.28f);
    glVertex2f(-0.62f, 0.41f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.490f, 0.976f, 1.0f); //Electric Blue //Window

    glVertex2f(-0.56f, 0.23f);
    glVertex2f(-0.56f, 0.2f);
    glVertex2f(-0.53f, 0.2f);
    glVertex2f(-0.53f, 0.23f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.490f, 0.976f, 1.0f); //Electric Blue

    glVertex2f(-0.43f, 0.23f);
    glVertex2f(-0.43f, 0.2f);
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(-0.4f, 0.23f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.490f, 0.976f, 1.0f); //Electric Blue //Window

    glVertex2f(-0.64f, 0.26f);
    glVertex2f(-0.64f, 0.23f);
    glVertex2f(-0.61f, 0.23f);
    glVertex2f(-0.61f, 0.26f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.275f, 0.303f); //Russet //Door

    glVertex2f(-0.49f, 0.18f);
    glVertex2f(-0.47f, 0.18f);
    glVertex2f(-0.47f, 0.13f);
    glVertex2f(-0.49f, 0.13f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.275f, 0.303f); //Russet

    glVertex2f(-0.371f, 0.13f);
    glVertex2f(-0.36f, 0.12f);
    glVertex2f(-0.69f, 0.12f);
    glVertex2f(-0.67f, 0.13f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.67f, 0.13f);
    glVertex2f(-0.38f, 0.13f);

    glEnd();

    //House-1:
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.6f); //Light Yellow 2

    glVertex2f(-0.82f, 0.19f);
    glVertex2f(-0.82f, 0.01f);
    glVertex2f(-0.61f, 0.01f);
    glVertex2f(-0.61f, 0.19f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.6f); //Light Yellow 2

    glVertex2f(-0.82f, 0.01f);
    glVertex2f(-0.9f, 0.01f);
    glVertex2f(-0.9f, 0.16f);
    glVertex2f(-0.85f, 0.29f);
    glVertex2f(-0.82f, 0.19f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.82f, 0.19f);
    glVertex2f(-0.82f, 0.01f);

    glEnd();

    glBegin(GL_POLYGON);  //Roof
    glColor3f(0.502f, 0.275f, 0.303f); //Russet

    glVertex2f(-0.87f, 0.31f);
    glVertex2f(-0.82f, 0.14f);
    glVertex2f(-0.57f, 0.14f);
    glVertex2f(-0.61f, 0.31f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.275f, 0.303f); //Russet

    glVertex2f(-0.87f, 0.31f);
    glVertex2f(-0.92f, 0.16f);
    glVertex2f(-0.9f, 0.16f);
    glVertex2f(-0.85f, 0.29f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.490f, 0.976f, 1.0f); //Electric Blue //Window

    glVertex2f(-0.79f, 0.11f);
    glVertex2f(-0.79f, 0.08f);
    glVertex2f(-0.76f, 0.08f);
    glVertex2f(-0.76f, 0.11f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.490f, 0.976f, 1.0f); //Electric Blue

    glVertex2f(-0.66f, 0.11f);
    glVertex2f(-0.66f, 0.08f);
    glVertex2f(-0.63f, 0.08f);
    glVertex2f(-0.63f, 0.11f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.490f, 0.976f, 1.0f); //Electric Blue //Window

    glVertex2f(-0.87f, 0.14f);
    glVertex2f(-0.87f, 0.11f);
    glVertex2f(-0.84f, 0.11f);
    glVertex2f(-0.84f, 0.14f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.275f, 0.303f); //Russet //Door

    glVertex2f(-0.72f, 0.06f);
    glVertex2f(-0.7f, 0.06f);
    glVertex2f(-0.7f, 0.01f);
    glVertex2f(-0.72f, 0.01f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.275f, 0.303f); //Russet

    glVertex2f(-0.61f, 0.01f);
    glVertex2f(-0.59f, 0.0f);
    glVertex2f(-0.92f, 0.00f);
    glVertex2f(-0.9f, 0.01f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.9f, 0.01f);
    glVertex2f(-0.61f, 0.01f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.87f, 0.31f);
    glVertex2f(-0.61f, 0.31f);

    glEnd();

    //House in second ground:
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.6f); //Light Yellow 2

    glVertex2f(0.74f, 0.4f);
    glVertex2f(0.74f, 0.22f);
    glVertex2f(0.95f, 0.22f);
    glVertex2f(0.95f, 0.4f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.6f); //Light Yellow 2

    glVertex2f(0.74f, 0.22f);
    glVertex2f(0.66f, 0.22f);
    glVertex2f(0.66f, 0.37f);
    glVertex2f(0.71f, 0.5f);
    glVertex2f(0.74f, 0.4f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.74f, 0.4f);
    glVertex2f(0.74f, 0.22f);

    glEnd();

    glBegin(GL_POLYGON);  //Roof
    glColor3f(0.502f, 0.275f, 0.303f); //Russet

    glVertex2f(0.69f, 0.52f);
    glVertex2f(0.74f, 0.35f);
    glVertex2f(0.99f, 0.35f);
    glVertex2f(0.95f, 0.52f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.275f, 0.303f); //Russet

    glVertex2f(0.69f, 0.52f);
    glVertex2f(0.64f, 0.37f);
    glVertex2f(0.66f, 0.37f);
    glVertex2f(0.71f, 0.5f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.490f, 0.976f, 1.0f); //Electric Blue //Window

    glVertex2f(0.77f, 0.32f);
    glVertex2f(0.77f, 0.29f);
    glVertex2f(0.8f, 0.29f);
    glVertex2f(0.8f, 0.32f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.490f, 0.976f, 1.0f); //Electric Blue

    glVertex2f(0.9f, 0.32f);
    glVertex2f(0.9f, 0.29f);
    glVertex2f(0.93f, 0.29f);
    glVertex2f(0.93f, 0.32f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.490f, 0.976f, 1.0f); //Electric Blue //Window

    glVertex2f(0.69f, 0.35f);
    glVertex2f(0.69f, 0.32f);
    glVertex2f(0.72f, 0.32f);
    glVertex2f(0.72f, 0.35f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.275f, 0.303f); //Russet //Door

    glVertex2f(0.84f, 0.27);
    glVertex2f(0.86f, 0.27f);
    glVertex2f(0.86f, 0.22f);
    glVertex2f(0.84f, 0.22f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.275f, 0.303f); //Russet

    glVertex2f(0.95f, 0.22f);
    glVertex2f(0.97f, 0.21f);
    glVertex2f(0.64f, 0.21f);
    glVertex2f(0.66f, 0.22f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.66f, 0.22f);
    glVertex2f(0.95f, 0.22f);

    glEnd();

    //Shihab
    //Boat2:
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);//boat2
    glVertex2f(0.03f, -0.2f);
    glVertex2f(0.14, -0.3f);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(0.4f, -0.2f);
    glEnd();

   glBegin(GL_QUADS);
   glColor3f(0.75f, 0.55f, 0.0f);
   glVertex2f(0.11f, -0.2f);
   glVertex2f( 0.33f, -0.2f);
    glVertex2f( 0.3f, - 0.11f);
    glVertex2f(0.15f,  -0.11f);//boat2
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.05f, -0.23f);
    glVertex2f(0.05f, -0.12f);

    glEnd();


   //Boat1:
   glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);//boat1
    glVertex2f(-0.18f, 0.29f);
    glVertex2f( 0.11, 0.29f);
    glVertex2f( 0.05f,  0.23f);
    glVertex2f(-0.09f,  0.23f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.75f, 0.55f, 0.0f);//boat1
    glVertex2f(-0.1f, 0.29f);
    glVertex2f( 0.06, 0.29f);
    glVertex2f( 0.03f,  0.35f);
    glVertex2f(-0.07f,  0.35f);
    glEnd();

   glBegin(GL_LINES);
   glColor3f(0.01f, 0.0f, 0.0f);
    glVertex2f(-0.14f, 0.35f);
    glVertex2f( -0.16, 0.24f);
    glEnd();


   glBegin(GL_POLYGON);
   glColor3f(0.01f, 0.0f, 0.0f);
    glVertex2f( -0.16, 0.24f);
    glVertex2f(-0.17f, 0.22f);
    glVertex2f(-0.15f, 0.22f);
    glEnd();

    //Rimon



  glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);////translate


	GLfloat x=-0.19f; GLfloat y=0.82f; GLfloat radius =.09f;
	GLfloat x0=-0.54f+xr; GLfloat y0=-0.08f+yr; GLfloat r0 =.01f;
	GLfloat x00=-0.54f+xr; GLfloat y00=-0.08f+yr; GLfloat r00 =.007f;
	GLfloat x1=-0.63; GLfloat y1=0.83f; GLfloat r1 =.05f;
   GLfloat x2=-0.59f; GLfloat y2=0.83f;GLfloat r2 =.05f;
	GLfloat x3=-0.53f; GLfloat y3=0.86f;GLfloat r3 =.06f;
	GLfloat x4=-0.45f; GLfloat y4=0.84f;GLfloat r4 =.06f;
	GLfloat x5=-0.39f; GLfloat y5=0.79f;GLfloat r5 =.05f;
	GLfloat x6=-0.49f; GLfloat y6=0.75f;GLfloat r6 =.065f;
	GLfloat x7=-0.56f; GLfloat y7=0.71f;GLfloat r7=.056f;
	GLfloat x10=-0.64f; GLfloat y10=0.75f;GLfloat r10=.05f;
	GLfloat x11=-0.57f; GLfloat y11=0.77f;GLfloat r11=.07f;
	//2nd cloud
	GLfloat x12=0.37f; GLfloat y12=0.76f;GLfloat r12=.045f;
	GLfloat x13=0.4; GLfloat y13=0.81f;GLfloat r13=.056f;
	GLfloat x14=0.46f; GLfloat y14=0.82f;GLfloat r14=.05f;
	GLfloat x15=0.52f; GLfloat y15=0.81f;GLfloat r15=.053f;
    GLfloat x16=0.57f; GLfloat y16=0.77f;GLfloat r16=.05f;
	GLfloat x17=0.60f; GLfloat y17=0.73f;GLfloat r17=.052f;
	GLfloat x18=0.56f; GLfloat y18=0.69f;GLfloat r18=.05f;
	GLfloat x19=0.49f; GLfloat y19=0.72f;GLfloat r19=.053f;
	GLfloat x20=0.42f; GLfloat y20=0.71f;GLfloat r20=.05f;
	GLfloat x21=0.45f; GLfloat y21=0.8f;GLfloat r21=.06f;
	GLfloat x22=-0.95f; GLfloat y22=-0.55f;GLfloat r22=0.05f;
	GLfloat x23=-0.85f; GLfloat y23=-0.55f;GLfloat r23=0.05f;
	GLfloat x24=-0.77f; GLfloat y24=-0.6f;GLfloat r24=0.05f;
	GLfloat x25=-0.71f; GLfloat y25=-0.66f;GLfloat r25=0.05f;
	GLfloat x26=-0.69f; GLfloat y26=-0.73f;GLfloat r26=0.05f;
	GLfloat x27=-0.65f; GLfloat y27=-0.76f;GLfloat r27=0.05f;
	GLfloat x28=-0.61f; GLfloat y28=-0.82f;GLfloat r28=0.05f;
	GLfloat x29=-0.59f; GLfloat y29=-0.88f;GLfloat r29=0.05f;
	GLfloat x30=-0.59f; GLfloat y30=-0.92f;GLfloat r30=0.05f;
	GLfloat x31=-0.57f; GLfloat y31=-0.97f;GLfloat r31=0.05f;


//cloud
	int triangleAmount = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

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

	//2nd


    glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x12, y12); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x12+ (r12 * cos(i *  twicePi / triangleAmount)),
                        y12 + (r12 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x13, y13); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x13+ (r13* cos(i *  twicePi / triangleAmount)),
                        y13 + (r13 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();


glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x14, y14); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x14+ (r14 * cos(i *  twicePi / triangleAmount)),
                        y14 + (r14 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x15, y15); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x15+ (r15 * cos(i *  twicePi / triangleAmount)),
                        y15 + (r15* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();
glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x16, y16); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x16+ (r16 * cos(i *  twicePi / triangleAmount)),
                        y16 + (r16 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x17, y17); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x17+ (r17 * cos(i *  twicePi / triangleAmount)),
                        y17 + (r17 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x18, y18); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x18+ (r18 * cos(i *  twicePi / triangleAmount)),
                        y18 + (r18 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x19, y19); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x19+ (r19 * cos(i *  twicePi / triangleAmount)),
                        y19 + (r19* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();
glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x20, y20); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x20+ (r20* cos(i *  twicePi / triangleAmount)),
                        y20 + (r20* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x21, y21); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x21+ (r21* cos(i *  twicePi / triangleAmount)),
                        y21+ (r21* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();



glPopMatrix();

 glPushMatrix();
    glTranslatef(position,0.0f,0.0f);////translate
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
	///2nd bird////
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


glPopMatrix();








//Bush:
	glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); //Green

    glVertex2f(-1.0f, -0.54f);
    glVertex2f( -1.0f, -1.0f);
    glVertex2f(-0.51f, -1.0f);
    glVertex2f(-0.83f, -0.56f);


    glEnd();

    glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x22, y22); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x22+ (r22* cos(i *  twicePi / triangleAmount)),
                        y22+ (r22* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x23, y23); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x23+ (r23* cos(i *  twicePi / triangleAmount)),
                        y23+ (r23* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x24, y24); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x24+ (r24* cos(i *  twicePi / triangleAmount)),
                        y24+ (r24* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x25, y25); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x25+ (r25* cos(i *  twicePi / triangleAmount)),
                        y25+ (r25* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x26, y26); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x26+ (r26* cos(i *  twicePi / triangleAmount)),
                        y26+ (r26* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x27, y27); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x27+ (r27* cos(i *  twicePi / triangleAmount)),
                        y27+ (r27* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x28, y28); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x28+ (r28* cos(i *  twicePi / triangleAmount)),
                        y28+ (r28* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x29, y29); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x29+ (r29* cos(i *  twicePi / triangleAmount)),
                        y29+ (r29* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x30, y30); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x30+ (r30* cos(i *  twicePi / triangleAmount)),
                        y30+ (r30* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x31, y31); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x31+ (r31* cos(i *  twicePi / triangleAmount)),
                        y31+ (r31* sin(i * twicePi / triangleAmount)) );
		}
	glEnd();


///Boy

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

	///rooster crow

	 glPushMatrix();

glTranslatef(-0.50f, 0.50f, 0.0f);
glScalef(0.09,.09,0);
	glBegin(GL_TRIANGLES);
    glColor3f(1.0f,0.0f, 0.0f); //Green

    glVertex2f(-0.7f, 0.65f);
    glVertex2f( -0.63f, 0.87f);
    glVertex2f(-0.55f, 0.83f);



    glEnd();
    	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); //Green


    glVertex2f(-0.55f, 0.83f);
    glVertex2f(-0.51f, 0.93f);
    glVertex2f( -0.45f, 0.89f);


    glEnd();
    	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); //Green



    glVertex2f( -0.45f, 0.89f);
    glVertex2f(-0.41f, 0.98f);
    glVertex2f(-0.31f, 0.89f);

    glEnd();

glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.31f, 0.89f);
    glVertex2f(-0.34f,0.75f);
    glVertex2f(-0.47f,0.72f);
    glVertex2f(-0.48f,0.58f);
    glVertex2f(-0.54f,0.57f);
   glVertex2f(-0.61f,0.65f);
   glVertex2f(-0.7f, 0.65f);
   glVertex2f(-0.55f, 0.83f);
   glVertex2f( -0.45f, 0.89f);

    glEnd();
glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f); //Green




    glVertex2f(-0.54f,0.57f);
    glVertex2f(-0.61f,0.65f);
    glVertex2f(-0.71f, 0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);
     glColor3f(1.0f, 1.0f, 0.0f); //Green



     glVertex2f(-0.48f,0.58f);
    glVertex2f(-0.54f,0.57f);
    glVertex2f(-0.5f, 0.54f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(-0.34f,0.75f);
    glVertex2f(-0.47f,0.72f);
    glVertex2f(-0.48f,0.58f);
    glVertex2f(-0.27f,0.59f);
   glVertex2f(-0.26f,0.64f);
   glVertex2f(-0.34f, 0.69f);



    glEnd();
     glBegin(GL_POLYGON);
glColor3f(1.0f, .0f, 0.0f);

    glVertex2f(-0.54f,0.57f);
    glVertex2f(-0.62f,0.36f);
    glVertex2f(-0.48f,0.28f);
   glVertex2f(-0.27f,0.59f);




    glEnd();
glBegin(GL_TRIANGLES);
     glColor3f(1.0f, 1.0f, 0.0f); //Green



     glVertex2f(-0.48f,0.58f);
    glVertex2f(-0.54f,0.57f);
    glVertex2f(-0.5f, 0.54f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(-0.55f,0.31f);
    glVertex2f(-0.71f,-0.05f);
    glVertex2f(-0.27f,-0.07f);
 glVertex2f(-0.27f,0.59f);



    glEnd();
glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);


 glVertex2f(-0.27f,0.59f);
glVertex2f(-0.3f,0.21f);
    glVertex2f(-0.27f,-0.24f);
    glVertex2f(-0.08f,0.03f);
    glVertex2f(-0.05f,0.01f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 1.0f);



    glVertex2f(-0.27f,-0.24f);
    glVertex2f(-0.08f,0.03f);
    glVertex2f(.21f,-0.09f);
    glVertex2f(0.13f,-0.32f);

    glVertex2f(.21f,-0.33f);
    glVertex2f(.25f,-0.43f);
    glVertex2f(.13f,-0.44f);
      glVertex2f(.06f,-0.51f);
     glVertex2f(-0.21f,-0.37f);




    glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);




      glVertex2f(.06f,-0.51f);
     glVertex2f(-0.21f,-0.37f);
      glVertex2f(-0.27f,-0.24f);

    glVertex2f(-0.3f,-0.07f);
     glVertex2f(-0.66f,-0.05f);
      glVertex2f(-0.66f,-0.28f);
       glVertex2f(-0.33f,-0.52f);
        glVertex2f(-0.32f,-0.62f);
         glVertex2f(-0.16f,-0.64f);
          glVertex2f(-0.16f,-0.53f);
        glVertex2f(-0.08f,-0.62f);
         glVertex2f(0.07f,-0.64f);




    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.0f, 0.0f);




      glVertex2f(-.24f,-0.63f);
     glVertex2f(-0.24f,-0.8f);
      glVertex2f(-0.48f,-0.86f);

    glVertex2f(-0.47f,-0.88f);
     glVertex2f(-0.29f,-0.86f);

     glVertex2f(-.31f,-0.89f);
     glVertex2f(-0.27f,-0.89f);
      glVertex2f(-0.22f,-0.83f);

    glVertex2f(-0.14f,-0.86f);
     glVertex2f(-0.22f,-0.83f);
     glVertex2f(-0.21f,-0.81f);
     glVertex2f(-0.19f,-0.63f);
glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.0f, 0.0f);




      glVertex2f(-.04f,-0.63f);
     glVertex2f(-0.04f,-0.8f);
      glVertex2f(-0.15f,-0.86f);

    glVertex2f(-0.15f,-0.88f);
     glVertex2f(-0.13f,-0.86f);

     glVertex2f(-.04f,-0.89f);
     glVertex2f(-0.03f,-0.89f);
      glVertex2f(0.01f,-0.83f);

    glVertex2f(0.12f,-0.86f);
     glVertex2f(0.1f,-0.83f);
     glVertex2f(0.01f,-0.81f);
     glVertex2f(0.03f,-0.63f);
glEnd();


glBegin(GL_POLYGON);
    glColor3f(1.1f, 1.1f, 1.1f);///tails




      glVertex2f(.15f,-0.15f);
     glVertex2f(0.26f,-0.16f);
      glVertex2f(0.26f,0.37f);

    glVertex2f(0.78f,0.4f);
     glVertex2f(0.84f,0.19f);

     glVertex2f(.6f,0.33f);
     glVertex2f(0.59f,0.33f);
      glVertex2f(0.59f,-0.06f);

    glVertex2f(0.47f,0.09f);
     glVertex2f(0.49f,-0.37f);
     glVertex2f(0.15f,-0.23f);

glEnd();
 glPopMatrix();





 //Paddy Fields

    glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPushMatrix();

     glTranslatef(0.1,0.1,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();



     glPushMatrix();

     glTranslatef(0.13,0.13,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


     glPushMatrix();

     glTranslatef(0.08,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


      glPushMatrix();

     glTranslatef(0.07,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();



       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.07,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.04,0.09,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.03,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.02,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.02,0.01,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.02,0.04,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.01,0.02,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.01,0.03,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.03,0.04,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


glPushMatrix();
glTranslatef(0.02,0.1,0.0);


 glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPushMatrix();

     glTranslatef(0.1,0.1,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();



     glPushMatrix();

     glTranslatef(0.13,0.13,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


     glPushMatrix();

     glTranslatef(0.08,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


      glPushMatrix();

     glTranslatef(0.07,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();



       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.07,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.04,0.09,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.03,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.02,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.02,0.01,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.02,0.04,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.01,0.02,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.01,0.03,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.03,0.04,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

     glPopMatrix();


     glPushMatrix();

     glTranslatef(0.0,0.02,0);

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPushMatrix();

     glTranslatef(0.1,0.1,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();



     glPushMatrix();

     glTranslatef(0.13,0.13,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


     glPushMatrix();

     glTranslatef(0.08,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


      glPushMatrix();

     glTranslatef(0.07,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();



       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.07,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.04,0.09,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.03,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.02,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.02,0.01,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.02,0.04,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.01,0.02,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.01,0.03,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.03,0.04,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();



     glPopMatrix();


     glPushMatrix();
     glTranslatef(0.00,-0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPushMatrix();

     glTranslatef(0.1,0.1,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();



     glPushMatrix();

     glTranslatef(0.13,0.13,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


     glPushMatrix();

     glTranslatef(0.08,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


      glPushMatrix();

     glTranslatef(0.07,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();



       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.07,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.04,0.09,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();


       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.03,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.02,0.07,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

       glPushMatrix();

     glTranslatef(0.05,0.08,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.02,0.01,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.02,0.04,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.01,0.02,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.01,0.03,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();

      glPushMatrix();

     glTranslatef(0.03,0.04,0.0);


      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.29f, 0.32f);

     glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.31f, 0.32f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.35f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.36f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

      glBegin(GL_LINES);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, 0.3f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.3f, 0.31f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.33f, 0.29f);

     glEnd();

     glBegin(GL_LINES);
   glColor3f(1.0f, 1.0f, 0.0f);  //yellow
    glVertex2f(0.31f, 0.2f);
    glVertex2f(0.35f, 0.27f);

     glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); //green
    glVertex2f(0.33f, 0.19f);
    glVertex2f(0.36f, 0.28f);

     glEnd();

     glPopMatrix();







     glPopMatrix();




//glutTimerFunc(10000,display1,0);


   glFlush();
}

