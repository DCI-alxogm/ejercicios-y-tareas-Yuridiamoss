#include <stdio.h>
#include <stdlib.h>

double funcion(double x) {

    return x * x + 1;

}

int main() {

    FILE *fentrada, *fsalida;
    int n;
    double a, b;

    // Abrir archivo de entrada

    fentrada = fopen("entrada.txt", "r");

    if (fentrada == NULL) {

        printf("No se pudo abrir el archivo de entrada.\n");

        return 1;

    }
    // Leer número de evaluaciones, límite inferior y superior
    fscanf(fentrada, "%d %lf %lf", &n, &a, &b);
    fclose(fentrada);

    // Abrir archivo de salida

    fsalida = fopen("parábola.txt", "w");

    if (fsalida == NULL) {

        printf("No se pudo abrir el archivo de salida.\n");
        return 1;

    }

    // Evaluar y escribir resultados
    double paso = (n > 1) ? (b - a) / (n - 1) : 0;

    for (int i = 0; i < n; i++) {
        double x = a + i * paso;
        double y = funcion(x);

        fprintf(fsalida, "x = %.4f, f(x) = %.4f\n", x, y);
    }
    fclose(fsalida);
    return 0;

}
 
