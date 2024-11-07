#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include "Display.h"
#include "create_bloc.h"
#include "new_line.h"

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
    glColor3d(1.0,1.0,0);
    glMatrixMode(GL_MODELVIEW);

    new_line();
    glEnd();

    glutSwapBuffers();
}
