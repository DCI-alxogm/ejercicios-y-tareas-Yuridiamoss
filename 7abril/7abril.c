#include <stdio.h>
 
int main() {
    float inicial, final, intervalo;
 
    // Pedir al usuario los valores
    printf("Ingrese el valor inicial, final e intervalo para la temperatura en Celsius: ");
    scanf("%f %f %f", &inicial, &final, &intervalo);
 
    // Calcular el número de elementos en el arreglo
    int num_elementos = (int)((final - inicial) / intervalo) + 1;
 
    // Crear un arreglo bidimensional para almacenar las conversiones (Celsius y Kelvin)
    float valores[num_elementos][2];
 
    // Imprimir los valores
    printf("\nCelsius\tKelvin\n");
    printf("------------------\n");
 
    // Rellenar el arreglo y mostrar las conversiones
    for (int i = 0; i < num_elementos; i++) {
        valores[i][0] = inicial + i * intervalo;       // Almacena el valor en Celsius
        valores[i][1] = valores[i][0] + 273.15;        // Almacena el valor en Kelvin
        printf("%.2f\t%.2f\n", valores[i][0], valores[i][1]);
    }
 
    return 0;
}
