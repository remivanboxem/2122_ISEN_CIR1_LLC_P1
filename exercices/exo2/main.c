#include <stdio.h>

void recursCompteurDecrement(int compteur){
    if(compteur > 0){
        printf("%d\n", compteur);
        recursCompteurDecrement(compteur - 1);
    }
    return;
}

int main (void) {
    int compteur = 10;
    recursCompteurDecrement(compteur);
    return 0;
}