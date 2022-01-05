#include <stdlib.h>
#include <stdio.h>

#define TAILLE 10

// Initialisation tableau deux dimensions de taille n*m
void init_tab(int tab[][TAILLE], int n, int m);

// Affichage tableau deux dimensions de taille n*m
void affiche_tab(int tab[][TAILLE], int n, int m);

// Copie symétrie tableau deux dimensions de taille n*m
void sym_tab(int tab[][TAILLE], int tab_deux[][TAILLE], int n, int m);
