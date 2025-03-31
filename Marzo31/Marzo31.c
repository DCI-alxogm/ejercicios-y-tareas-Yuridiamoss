#include <stdio.h>
 
int main() {
    int numero;
 
    // Usamos do...while para garantizar que al menos se pida una vez
    do {
        printf("Por favor, ingrese un numero positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);  // Mientras el número sea negativo o cero, repite
 
    printf("¡Gracias! Ingresaste el número positivo: %d\n", numero);
 
    return 0;
}
