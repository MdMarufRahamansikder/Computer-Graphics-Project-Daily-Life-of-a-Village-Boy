#ifndef GLOBAL_FUNCTIONS_H
#define GLOBAL_FUNCTIONS_H
#include<windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

void renderBitmapString(float x, float y, float z, void *font, char *string);
void ub(int value);
void update(int value);
void update1(int value1);
void update3(int value1);
void update2(int value2);
void SpecialInput(int key, int x, int y);


#endif
