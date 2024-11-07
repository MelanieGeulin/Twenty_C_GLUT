#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include "Tableau.h"
#include "Display.h"
#include "init.h"
#include "key.h"
#include "timer.h"

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(500,600);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("Twenty GOGOGO");

    init();

    glutDisplayFunc(display);
    glutTimerFunc()
    glutMainLoop();

    return EXIT_SUCCESS;
}
