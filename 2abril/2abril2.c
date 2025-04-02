#include <stdio.h>

int main() {

    int inicio, fin, incremento, x;

    // Solicitar al usuario los valores de inicio, fin e incremento
    printf("Introduce el valor inicial de X: ");
    scanf("%d", &inicio);

    printf("Introduce el valor final de X: ");
    scanf("%d", &fin);

    printf("Introduce el valor del incremento: ");
    scanf("%d", &incremento);

    // Comprobamos que el incremento no sea un número igual a 0
    if (incremento == 0) {
        printf("El incremento no puede ser cero.\n");
        return 1;  // Salimos del programa si el incremento es 0
    }

    // Iniciar el ciclo con la variable x igual al valor inicial
    x = inicio;

    // Utilizar un do...while para iterar y calcular x^2
    do {
        // Calcular el valor de la función x^2
        printf("El valor de X: %d, su cuadrado es: %d\n", x, x * x);

        // Incrementar x
        x += incremento;

    } while (x <= fin);  // Continuar hasta que x supere el valor final

    return 0;
}
