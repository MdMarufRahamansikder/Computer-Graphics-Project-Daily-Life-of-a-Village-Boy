#include<windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
#define PI           3.14159265358979323846
#include "GlobalVariables.h"
#include "GlobalFunctions.h"
#include "SunRise.h"
#include "School_morning_view.h"
#include "School_afternoon_view.h"
#include "Dining_morning_view.h"
#include "Dining_night_view.h"
#include "BoysRoom_morning_view.h"
#include "BoysRoom_night_view.h"
#include "DayView.h"
#include "AfternoonView.h"

int currentDisplay = 0;

//void specialKeys(int key, int x, int y)
void handleKeypress(unsigned char key, int x, int y)
{
    switch (key) {
        case 'd':
            // Increment the display function index
            currentDisplay++;

            // Set the display function based on the new index
            switch (currentDisplay) {
                case 0:
                    glutDisplayFunc(SunRise);
                    break;
                case 1:
                    glutDisplayFunc(BoysRoom_morning_view);
                    break;
                case 2:
                    glutDisplayFunc(Dining_morning_view);
                    break;
                case 3:
                    glutDisplayFunc(DayView);
                    break;
                case 4:
                    glutDisplayFunc(School_morning_view);
                    break;
                case 5:
                    glutDisplayFunc(School_afternoon_view);
                    break;
                case 6:
                    glutDisplayFunc(AfternoonView);
                    break;
                case 7:
                    glutDisplayFunc(Dining_night_view);
                    break;
                case 8:
                    glutDisplayFunc(BoysRoom_night_view);
                    break;
                // Add more cases as needed
                default:
                    // If there are no more display functions, reset the index
                    currentDisplay = 0;
                    glutDisplayFunc(SunRise);
                    break;
            }

            // Redraw the window with the new display function
            glutPostRedisplay();
            break;

        default:
            break;
    }
}

void sound()
{

    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("V.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound1()
{



    //Sleep(6000); // Wait for 10 seconds
PlaySound("B.wav", NULL, SND_FILENAME | SND_ASYNC);
Sleep(3000); // Wait for 2 seconds
PlaySound(NULL, 0, 0); // Stop the sound

}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
  glutInitWindowSize(1920, 1080); // Set the window's initial width & height
    glutInitWindowPosition(0, 0);
   glutCreateWindow("Test");
   glutDisplayFunc(SunRise);
    glutSpecialFunc(SpecialInput);
   glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, ub, 0);
    glutKeyboardFunc(handleKeypress);

    sound1();
    sound();


   glutMainLoop();
   return 0;
}


