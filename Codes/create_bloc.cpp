#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include "create_bloc.h"

void create_bloc()
{
    float m_carre = 0.22;
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(-m_carre/2/0.85,-m_carre/2);
    glVertex2f(m_carre/2/0.85,-m_carre/2);
    glVertex2f(m_carre/2/0.85,m_carre/2);
    glVertex2f(-m_carre/2/0.85,m_carre/2);
    glEnd();
}
