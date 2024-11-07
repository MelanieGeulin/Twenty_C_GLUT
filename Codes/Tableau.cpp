#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include "Tableau.h"

void Tableau::lines_up()
{
    int tampon[9][7]; //tableau sauvegarde
    int vmax = 3;   //valeur max du tableau

    for(int i = 0; i < 9 ; i++)
    {
        for(int j = 0 ; j < 7; j++)
        {
            tampon[i][j] = m_tab[i][j];
        }
    } //copie du tableau dans la sauvegarde

    for(int i = 0; i < 8 ; i++)
    {
        for(int j = 0 ; j < 7; j++)
        {
            if(m_tab[i][j] > vmax)
            {
                vmax = m_tab[i][j];
            }
        }
    }   //trouver la valeur max du tableau

    for(int i = 0;i<7;i++)
    {
        m_tab[i][0] = rand()%vmax+1;
    }   //nouvelle ligne de nombre aléatoire allant jusqu'à vmax

    for(int i = 0; i < 8 ; i++)
    {
        for(int j = 0 ; j < 7; j++)
        {
            m_tab[i+1][j] = tampon[i][j];
        }
    }   //mise de la sauvegarde à un niveau plus haut dans la tableau
}

void Tableau::init_tab()
{
    for(int i = 0 ; i<9 ; i++)
    {
            for(int j = 0 ; j < 7 ; j++)
            {
                m_tab[i][j] = 0;
            }
    }   //mise à 0 du tableau

    for(int i = 0; i<2 ; i++)
    {
        for(int j = 0 ; j<7 ; j++)
        {
            m_tab[i][j] = rand()%3+1;
        }
    }   //initialisation des 2 premières ligne du tableau avec des nombres aléatoires

}

bool Tableau::game_over()
{
    for(int i = 0; i < 7 ; i++)
    {
        if(m_tab[8][i] =! 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }   //si une valeur n'est plus à 0, alors le tableau à été dépassé et game over
}
