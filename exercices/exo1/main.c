#include <stdio.h>
#include <math.h>

int main (void) {
    int a, b, c;
    printf("Entrez trois nombres : ");
    scanf("%d %d %d", &a, &b, &c);
    // Calcul du discriminant delta
    int delta = (b * b) - (4 * a * c);

    // Si delta est négatif, on affiche "pas de solution"
    if (delta < 0) {
        printf("Pas de solution\n");
        return 0;
    }

    // Si delta est nul, on affiche "une solution"
    else if (delta == 0) {
        printf("Une solution : x = %d\n", (-b / (2 * a)));
        return 0;
    }    
    // Calcul de x1 et x2
    float x1 = (-b + sqrt(delta)) / (2 * a);
    float x2 = (-b - sqrt(delta)) / (2 * a);
    // Affichage des solutions
    printf("x1 = %2.f\nx2 = %2.f\n", x1, x2);
    return 0;
}