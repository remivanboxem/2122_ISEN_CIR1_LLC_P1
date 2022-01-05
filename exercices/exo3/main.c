# include "header.h"

int main (void) {
    int tab[TAILLE][TAILLE];
    int tab_sym[TAILLE][TAILLE];

    init_tab(tab, TAILLE, TAILLE);

    // Affichage
    affiche_tab(tab, TAILLE, TAILLE);
    puts("");
    // Copie symétrique
    sym_tab(tab, tab_sym, TAILLE, TAILLE);
    affiche_tab(tab_sym, TAILLE, TAILLE);
}