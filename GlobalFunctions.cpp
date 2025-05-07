#include<windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
#include "GlobalVariables.h"
#include "GlobalFunctions.h"

void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void ub(int value) {

    if(pb<-1.0)
        pb=- 0.06f;

    pb-= sb;

	glutPostRedisplay();


	glutTimerFunc(100, ub, 0);
}

void update(int value) {

    if(position >1.0)
        position =- 1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}



void update1(int value1) {

    if(position1 <-1.0)
        position1 = 1.0f;

    position1 -= speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void update3(int value1) {

    if(position3 >0.83 ){
        position3= 0.35f;}

    else position3 += speed3;

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}
void update2(int value2) {

    if(position2>1.0)
        position2 =- 1.0f;

    position2+= speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}
void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:

yr=yr+0.015;
break;

case GLUT_KEY_DOWN:

yr=yr-0.015;
break;
case GLUT_KEY_LEFT:


xr=xr-0.015;
break;
case GLUT_KEY_RIGHT:
    xr=xr+0.015;
break;
}
glutPostRedisplay();
}


