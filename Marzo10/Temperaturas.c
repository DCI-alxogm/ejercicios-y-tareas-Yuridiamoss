#include <stdio.h>

int main (){
     float Kelvin, Celsius;
     char op;
     printf("Selecciona una opcion \n");
     printf(" 'c' para convertir °C a K\n");
     printf(" 'k' para convertir K a °C\n");
     scanf("%s", & op);

     printf("Ingresa el valor de la temperatura: ");
     scanf("%f", &valor);

     switch(op){
            case 'a': // Convertir Celsius a Kelvin
                    resultado = valor +273.15;
                    printf("%.2°C es igual a %.2K\n", valor, resultado);
                    break;
            case 'b': // Convertir Kelvin a Celsius
                    resultado = valor - 273.15;
                    printf("%.2fK es igual a %.2f°C\n", valo0r, resultado);
                    break;
            default:
                   printf("Opción no valida \n");
                   break;
      }
      printf("Fin \n");
      return(0);
}