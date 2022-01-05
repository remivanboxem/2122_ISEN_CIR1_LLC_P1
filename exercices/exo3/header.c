#include "header.h"

// Initialisation tableau deux dimensions de taille n*m avec des valeurs aléatoires compris entre 0 et 20
void init_tab(int tab[][TAILLE], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            tab[i][j] = rand() % 20;
        }
    }
}

void affiche_tab(int tab[][TAILLE], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}
// Copie symétrie tableau deux dimensions de taille n*m
void sym_tab(int tab[][TAILLE], int tab_deux[][TAILLE], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            tab_deux[i][j] = tab[j][i];
        }
    }

}