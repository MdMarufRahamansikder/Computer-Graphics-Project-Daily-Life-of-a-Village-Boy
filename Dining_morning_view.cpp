#include<windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
#include "GlobalVariables.h"
#include "GlobalFunctions.h"
#include "Dining_morning_view.h"

void Dining_morning_view() //Dining Room
{

     //Raiyan Sayeed (22-46494-1)
    glClearColor(0.647f, 0.518f, 0.412f, 0.0f); // Set background color to Muted Terracotta //Dinning Room
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    glBegin(GL_LINE_STRIP);
    glColor3f(0.361f, 0.251f, 0.2f); //Dark Brown

    glVertex2f(0.41f, 1.0f);
    glVertex2f(0.41f, 0.54f);
    glVertex2f(1.0f, 0.54f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.361f, 0.251f, 0.2f); //Dark Brown

    glVertex2f(0.41f, 0.54f);
    glVertex2f(-1.0f, -0.49f);

    glEnd();





    ////SHIHAB-----
	////Boy



    //Cupboard
    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(-0.88f, 0.06f);
    glVertex2f(-0.88f, -0.56f);
    glVertex2f(-0.52f, -0.26f);
    glVertex2f(-0.52f, 0.25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(-0.88f, 0.06f);
    glVertex2f(-0.52f, 0.25f);
    glVertex2f(-0.58f, 0.39f);
    glVertex2f(-0.96f, 0.23f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.96f, 0.23f);
    glVertex2f(-0.88f, 0.06f);
    glVertex2f(-0.88f, -0.56f);
    glVertex2f(-0.95f, -0.45f);

    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.88f, 0.06f);
    glVertex2f(-0.88f, -0.56f);
    glVertex2f(-0.52f, -0.26f);
    glVertex2f(-0.52f, 0.25f);

    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.88f, 0.06f);
    glVertex2f(-0.52f, 0.25f);
    glVertex2f(-0.58f, 0.39f);
    glVertex2f(-0.96f, 0.23f);

    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.96f, 0.23f);
    glVertex2f(-0.88f, 0.06f);
    glVertex2f(-0.88f, -0.56f);
    glVertex2f(-0.95f, -0.45f);

    glEnd();

    //Drawers:
    glBegin(GL_LINE_LOOP);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.85f, -0.22f);
    glVertex2f(-0.85f, -0.37f);
    glVertex2f(-0.55f, -0.15f);
    glVertex2f(-0.55f, -0.03f);

    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.85f, 0.01f);
    glVertex2f(-0.85f, -0.12f);
    glVertex2f(-0.55f, 0.06f);
    glVertex2f(-0.55f, 0.17f);

    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.85f, -0.44f);
    glVertex2f(-0.85f, -0.53f);
    glVertex2f(-0.55f, -0.28f);
    glVertex2f(-0.55f, -0.2f);


    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.68f, -0.3f);
    glVertex2f(-0.68f, -0.39f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.72f, 0.03f);
    glVertex2f(-0.72f, 0.02f);
    glVertex2f(-0.69f, 0.04f);
    glVertex2f(-0.69f, 0.05f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.71f, -0.19f);
    glVertex2f(-0.71f, -0.2f);
    glVertex2f(-0.68f, -0.18f);
    glVertex2f(-0.68f, -0.17f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.7f, -0.38f);
    glVertex2f(-0.69f, -0.37f);
    glVertex2f(-0.69f, -0.34f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.67f, -0.325f);
    glVertex2f(-0.67f, -0.355f);
    glVertex2f(-0.66f, -0.345f);
    glVertex2f(-0.66f, -0.315f);

    glEnd();

    //Outside door
    glBegin(GL_POLYGON);
    glColor3f(0.529f, 0.808f, 0.922f); //Sky Blue

    glVertex2f(-0.44f, -0.08f);
    glVertex2f(-0.22f, 0.08f);
    glVertex2f(-0.22f, 0.56f);
    glVertex2f(-0.44f, 0.48f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.133f, 0.545f, 0.133f); //Forest Green

    glVertex2f(-0.44f, 0.18f);
    glVertex2f(-0.44f, -0.08f);
    glVertex2f(-0.22f, 0.08f);
    glVertex2f(-0.22f, 0.29f);
    glVertex2f(-0.33f, 0.26f);

    glEnd();

    //Back forest:
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.9f, 0.0f); //Forest Green

    glVertex2f(-0.44f, 0.22f);
    glVertex2f(-0.38f, 0.28f);
    glVertex2f(-0.34f, 0.3f);
    glVertex2f(-0.33f, 0.33f);
    glVertex2f(-0.32f, 0.34f);
    glVertex2f(-0.3f, 0.33f);
    glVertex2f(-0.26f, 0.35f);
    glVertex2f(-0.22f, 0.36f);
    glVertex2f(-0.22f, 0.29f);
    glVertex2f(-0.33f, 0.26f);
    glVertex2f(-0.44f, 0.18f);

    glEnd();

    //Distant House:
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.6f); //Light Yellow

    glVertex2f(-0.28f, 0.31f);
    glVertex2f(-0.28f, 0.27f);
    glVertex2f(-0.25f, 0.28f);
    glVertex2f(-0.25f, 0.31f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.6f); //Light Yellow

    glVertex2f(-0.28f, 0.31f);
    glVertex2f(-0.28f, 0.27f);
    glVertex2f(-0.3f, 0.26f);
    glVertex2f(-0.3f, 0.31f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.6f);

    glVertex2f(-0.28f, 0.31f);
    glVertex2f(-0.28f, 0.27f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.275f, 0.303f); //Russet

    glVertex2f(-0.29f, 0.32f);
    glVertex2f(-0.28f, 0.31f);
    glVertex2f(-0.25f, 0.31f);
    glVertex2f(-0.26f, 0.32f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.275f, 0.303f); //Russet

    glVertex2f(-0.3f, 0.31f);
    glVertex2f(-0.29f, 0.32f);
    glVertex2f(-0.28f, 0.31f);


    glEnd();

    //Tree top:
    glBegin(GL_POLYGON);
    glColor3f(0.133f, 0.545f, 0.133f); //Forest Green

    glVertex2f(-0.44f, 0.37f);
    glVertex2f(-0.41f, 0.38f);
    glVertex2f(-0.42f, 0.37f);
    glVertex2f(-0.41f, 0.36f);
    glVertex2f(-0.42f, 0.34f);
    glVertex2f(-0.4f, 0.335f);
    glVertex2f(-0.41f, 0.33f);
    glVertex2f(-0.37f, 0.33f);
    glVertex2f(-0.41f, 0.29f);
    glVertex2f(-0.4f, 0.29f);
    glVertex2f(-0.44f, 0.26f);

    glEnd();

    //Tree stem:
    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.275f, 0.303f); //Russet

    glVertex2f(-0.44f, 0.18f);
    glVertex2f(-0.41f, 0.2f);
    glVertex2f(-0.43f, 0.28f);
    glVertex2f(-0.42f, 0.31f);
    glVertex2f(-0.44f, 0.31f);

    glEnd();

    //Outside door frame:
    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood brown

    glVertex2f(-0.44f, 0.48f);
    glVertex2f(-0.44f, -0.08f);
    glVertex2f(-0.46f, -0.095f);
    glVertex2f(-0.46f, 0.48f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(-0.22f, 0.08f);
    glVertex2f(-0.22f, 0.56f);
    glVertex2f(-0.21f, 0.57f);
    glVertex2f(-0.21f, 0.085f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(-0.46f, 0.49f);
    glVertex2f(-0.46f, 0.47f);
    glVertex2f(-0.21f, 0.56f);
    glVertex2f(-0.21f, 0.59f);

    glEnd();

    //Window
    glBegin(GL_POLYGON);
    glColor3f(0.529f, 0.808f, 0.922f); //Sky Blue

    glVertex2f(-0.08f, 0.63f);
    glVertex2f(0.17f, 0.72f);
    glVertex2f(0.17f, 0.5f);
    glVertex2f(-0.08f, 0.35f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.212f, 0.271f, 0.310f); //Charcoal

    glVertex2f(-0.1f, 0.64f);
    glVertex2f(-0.08f, 0.64f);
    glVertex2f(-0.08f, 0.31f);
    glVertex2f(-0.1f, 0.31f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.439f, 0.502f, 0.565f); //Slate Gray

    glVertex2f(-0.08f, 0.64f);
    glVertex2f(-0.08f, 0.63f);
    glVertex2f(0.18f, 0.72f);
    glVertex2f(0.18f, 0.74f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.439f, 0.502f, 0.565f); //Slate Gray

    glVertex2f(0.17f, 0.72f);
    glVertex2f(0.17f, 0.5f);
    glVertex2f(0.18f, 0.5f);
    glVertex2f(0.18f, 0.72f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.439f, 0.502f, 0.565f); //Slate Gray

    glVertex2f(-0.08f, 0.35f);
    glVertex2f(-0.08f, 0.31f);
    glVertex2f(0.18f, 0.48f);
    glVertex2f(0.18f, 0.51f);

    glEnd();

    //Railing
    glBegin(GL_POLYGON);
    glColor3f(0.212f, 0.271f, 0.310f); //Charcoal

    glVertex2f(-0.06f, 0.64f);
    glVertex2f(-0.04f, 0.645f);
    glVertex2f(-0.04f, 0.37f);
    glVertex2f(-0.06f, 0.36f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.212f, 0.271f, 0.310f); //Charcoal

    glVertex2f(-0.02f, 0.65f);
    glVertex2f(-0.00f, 0.66f);
    glVertex2f(-0.00f, 0.39f);
    glVertex2f(-0.02f, 0.38f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.212f, 0.271f, 0.310f); //Charcoal

    glVertex2f(0.02f, 0.665f);
    glVertex2f(0.04f, 0.675f);
    glVertex2f(0.04f, 0.42f);
    glVertex2f(0.02f, 0.41f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.212f, 0.271f, 0.310f); //Charcoal

    glVertex2f(0.07f, 0.68f);
    glVertex2f(0.09f, 0.69f);
    glVertex2f(0.09f, 0.45f);
    glVertex2f(0.07f, 0.44f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.212f, 0.271f, 0.310f); //Charcoal

    glVertex2f(0.12f, 0.7f);
    glVertex2f(0.14f, 0.71f);
    glVertex2f(0.14f, 0.48f);
    glVertex2f(0.12f, 0.47f);

    glEnd();

    //Boy's Room's Door:
    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.63f, 0.54f);
    glVertex2f(0.62f, 0.54f);
    glVertex2f(0.62f, 0.77f);
    glVertex2f(0.63f, 0.77f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.73f, 0.77f);
    glVertex2f(0.73f, 0.54f);
    glVertex2f(0.75f, 0.54f);
    glVertex2f(0.75f, 0.78f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.62f, 0.77f);
    glVertex2f(0.63f, 0.78f);
    glVertex2f(0.75f, 0.78f);
    glVertex2f(0.73f, 0.77f);

    glEnd();

    //Table Surface:
    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(-0.03f, -0.12f);
    glVertex2f(0.65f, -0.12f);
    glVertex2f(0.74f, 0.15f);
    glVertex2f(0.22f, 0.15f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.74f, 0.15f);
    glVertex2f(0.22f, 0.15f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(-0.03f, -0.12f);
    glVertex2f(0.65f, -0.12f);
    glVertex2f(0.65f, -0.15f);
    glVertex2f(-0.03f, -0.15f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.65f, -0.15f);
    glVertex2f(0.65f, -0.12f);
    glVertex2f(0.74f, 0.15f);
    glVertex2f(0.74f, 0.12f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(-0.03f, -0.15f);
    glVertex2f(-0.03f, -0.44f);
    glVertex2f(-0.02f, -0.44f);
    glVertex2f(-0.02f, -0.15f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.02f, -0.44f);
    glVertex2f(-0.02f, -0.15f);
    glVertex2f(0.0f, -0.15f);
    glVertex2f(0.0f, -0.42f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.65f, -0.15f);
    glVertex2f(0.65f, -0.44f);
    glVertex2f(0.63f, -0.44f);
    glVertex2f(0.63f, -0.15f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.03f, -0.12f);
    glVertex2f(0.65f, -0.12f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.65f, -0.15f);
    glVertex2f(0.65f, -0.44f);
    glVertex2f(0.66f, -0.42f);
    glVertex2f(0.66f, -0.12f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.73f, -0.21f);
    glVertex2f(0.73f, 0.10f);
    glVertex2f(0.74f, 0.12f);
    glVertex2f(0.74f, -0.19f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.73f, -0.21f);
    glVertex2f(0.73f, 0.10f);
    glVertex2f(0.72f, 0.06f);
    glVertex2f(0.72f, -0.21f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.27f, -0.15f);
    glVertex2f(0.28f, -0.15f);
    glVertex2f(0.28f, -0.21f);
    glVertex2f(0.27f, -0.21f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.28f, -0.15f);
    glVertex2f(0.28f, -0.21f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.29f, -0.15f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(-0.02f, -0.15f);
    glVertex2f(0.63f, -0.15f);

    glEnd();



    ///Boy's chair:



    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.44f, 0.26f);
    glVertex2f(0.44f, 0.15f);
    glVertex2f(0.28f, 0.15f);
    glVertex2f(0.28f, 0.26f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.44f, 0.26f);
    glVertex2f(0.44f, 0.15f);
    glVertex2f(0.45f, 0.15f);
    glVertex2f(0.45f, 0.27f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.45f, 0.27f);
    glVertex2f(0.44f, 0.26f);
    glVertex2f(0.28f, 0.26f);
    glVertex2f(0.29f, 0.27f);

    glEnd();


	 glPushMatrix();
	 glTranslatef(+0.87f, 0.365f, 0.0f);///translation for boy
	 glScalef(1.0f,0.9f,0.0f);

	 glBegin(GL_QUADS);
    glColor3f(0.95f, 0.85f, 0.95f);
    glVertex2f(-0.54f, -0.15f);/////////BOY NECK
    glVertex2f(-0.5f, -0.15f);
    glVertex2f(-0.5f, -0.17f);
    glVertex2f(-0.54f, -0.17f);
    glEnd();


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
     glBegin(GL_QUADS);
    glColor3f(0.15f, 0.15f, 0.95f);
    glVertex2f(-0.55f, -0.17f);/////////BOY CHEST
    glVertex2f(-0.55f, -0.24f);
    glVertex2f(-0.49f, -0.24f);
    glVertex2f(-0.49f, -0.17f);
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
GLfloat x0=-0.54f; GLfloat y0=-0.08f; GLfloat r0 =.01f;
	GLfloat x00=-0.54f; GLfloat y00=-0.08f; GLfloat r00 =.007f;

int i;
	int triangleAmount = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

   	glColor3f(1.0f, 1.0f, 1.0f);///EYE--1
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x0, y0); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x0+ (r0 * cos(i *  twicePi / triangleAmount)),
                        y0 + (r0 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();


   	glColor3f(0.0f, 0.0f, 0.0f);///EYE--1
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x00, y00); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x00+ (r00 * cos(i *  twicePi / triangleAmount)),
                        y00+ (r00 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

	 glPushMatrix();
	 glTranslatef(+0.052f, 0.0f, 0.0f);///translation for BOY EYE

	 	glColor3f(1.0f, 1.0f, 1.0f);///EYE--2
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x0, y0); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x0+ (r0 * cos(i *  twicePi / triangleAmount)),
                        y0 + (r0 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();


   	glColor3f(0.0f, 0.0f, 0.0f);///EYE--2
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x00, y00); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x00+ (r00 * cos(i *  twicePi / triangleAmount)),
                        y00+ (r00 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();




    glPopMatrix();
    glPopMatrix();
/* glBegin(GL_POLYGON);
glColor3f(0.25f, 0.12f, 0.15f);
    glVertex2f(0.09f,0.0f);
    glVertex2f(0.09f,0.05f);
    glVertex2f(0.19f,0.09f);
    glVertex2f(0.18f,0.06f);
    glVertex2f(0.2f,0.0f);*/
    //glVertex2f(0.13f,0.0f);

   // glEnd();



    ///Chairs (Mother's)

     glPushMatrix();
	 glTranslatef(+0.98f, 0.07f, 0.0f);
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
 glPopMatrix();


    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.53f, -0.02f);
    glVertex2f(0.53f, -0.32f);
    glVertex2f(0.38f, -0.32f);
    glVertex2f(0.38f, -0.02f);

    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.53f, -0.02f);
    glVertex2f(0.53f, -0.32f);
    glVertex2f(0.38f, -0.32f);
    glVertex2f(0.38f, -0.02f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.38f, -0.32f);
    glVertex2f(0.38f, -0.5f);
    glVertex2f(0.39f, -0.5f);
    glVertex2f(0.39f, -0.32f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.39f, -0.32f);
    glVertex2f(0.39f, -0.5f);
    glVertex2f(0.4f, -0.47f);
    glVertex2f(0.4f, -0.32f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.53f, -0.32f);
    glVertex2f(0.52f, -0.32f);
    glVertex2f(0.52f, -0.5f);
    glVertex2f(0.53f, -0.5f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.53f, -0.02f);
    glVertex2f(0.53f, -0.5f);
    glVertex2f(0.54f, -0.48f);
    glVertex2f(0.54f, 0.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.53f, -0.02f);
    glVertex2f(0.54f, 0.0f);
    glVertex2f(0.39f, 0.0f);
    glVertex2f(0.38f, -0.02f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.53f, -0.29f);
    glVertex2f(0.53f, -0.32f);
    glVertex2f(0.56f, -0.23f);
    glVertex2f(0.56f, -0.2f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.290f, 0.016f, 0.016f); //Oxblood Brown

    glVertex2f(0.56f, -0.23f);
    glVertex2f(0.56f, -0.4f);
    glVertex2f(0.55f, -0.41f);
    glVertex2f(0.55f, -0.24f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.55f, -0.41f);
    glVertex2f(0.54f, -0.41f);
    glVertex2f(0.54f, -0.28f);
    glVertex2f(0.55f, -0.24);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.514f, 0.263f, 0.2f); //Cognag

    glVertex2f(0.56f, -0.2f);
    glVertex2f(0.54f, -0.26f);
    glVertex2f(0.54f, -0.2f);

    glEnd();


    glPushMatrix();
	 glTranslatef(+0.66f, 0.07f, 0.0f);
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
 glPopMatrix();



    ///Chairs (Father's)
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


    //glFlush(); // Render now
    //glutTimerFunc(12000,gSchool_,0);

   glFlush();

}
