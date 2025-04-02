#include <stdio.h>

#include <math.h>
 
int main() {

    double inicio, fin, espaciado, x;
 
    // Solicitar al usuario los parámetros

    printf("Ingrese el valor inicial del intervalo: ");

    scanf("%lf", &inicio);

    printf("Ingrese el valor final del intervalo: ");

    scanf("%lf", &fin);

    printf("Ingrese el espaciado: ");

    scanf("%lf", &espaciado);
 
    // Validar que el espaciado sea positivo

    if (espaciado <= 0) {

        printf("El espaciado debe ser un número positivo.\n");

        return 1;

    }
 
    printf("\nResultados:\n");

    printf("%-10s %-15s %-15s %-15s %-15s %-15s\n", "x", "exp(x)", "log(x)", "sin(x)", "cos(x)", "sqrt(x)");

    printf("\n");
 
    // Usando un ciclo do...while para recorrer el intervalo

    x = inicio; // Inicializamos x antes del ciclo

    do {

        double exp_x = exp(x);

        double log_x = (x > 0) ? log(x) : 0.0; // Evitar error de log(0) o log(negativo)

        double sin_x = sin(x);

        double cos_x = cos(x);

        double sqrt_x = (x >= 0) ? sqrt(x) : 0.0; // Evitar error con raíz negativa
 
        printf("%-10.4f %-15.4f %-15.4f %-15.4f %-15.4f %-15.4f\n", x, exp_x, log_x, sin_x, cos_x, sqrt_x);
 
        x += espaciado; // Incrementamos x en cada iteración

    } while (x <= fin); // La condición de salida del ciclo es que x sea mayor que el valor final
 
    return 0;

}

 
