#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include "new_line.h"
#include "create_bloc.h"

void new_line()
{
    glTranslatef(-0.66,-0.80,0.0);
    create_bloc();
    for(int i=1;i<7;i++)
    {
        glTranslatef(0.22,0.0,0.0);
        create_bloc();
    }
}
