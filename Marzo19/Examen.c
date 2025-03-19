
#include <stdio.h>
#include <math.h>

int main(){
     int opcion;
     float base, altura, area;
     int numero, suma, digito;
     char letra;

     printf("Seleccione una opcion:\n");
     printf("1. Calcular el area de un rectangulo\n");
     printf("2. Convertir grados Celsius a Fahrenheit\n");
     printf("3. Verificar si un numero es multiplo de otro\n");
     printf("4. Sumar los digitos de un numero de dos cifras\n");
     scanf("%d", opcion);

     switch (opcion){
          case 1:
                printf("Ingrese la base y la altura del rectagulo:");
                scanf("%f %d", &base, altura);
                area=base*altura;
                printf("El area del rectangulo es: %d\n", area);
          case 2: 
                printf("INgrese la temperatura en grados Celsius:");
                scanf("%d", &base);
                (base*9/5)+32 = base
                printf("La temperatura en Fahrenheit es: %.2d\n", TF);
                break;
          case 3: 
                printf("Ingrese dos numeros:");
                scanf("%d", numero);
                if (numero >=10 && numero <=99){
                    suma =(numero/10)+ (numero %10);
                    printf("La suma de los digitos es: %.2f\n", suma);
                } else if (numero<10){
                      printf("El numero es de una sola cifra, no se úede realizar la opercaion");
                }
           default:
                  printf("Opcion no valida \n");
}