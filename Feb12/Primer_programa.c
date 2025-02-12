/*
Febrero 12 de 2025
Yuridia Mosqueda Vaca
Primer programa mostrando variables
*/


#include <stdlib.h> 
#include <stdio.h> 

int main( )
{
     char nombre [10];
     int edad;
     float temperatura;
     //Cuerpo del programa; 
     printf ("¿Cual es tu nombre? \n");
     scanf ("%s", nombre);
     printf ("Hola, %s este es el primer programa del curso PB2025\n", nombre);

     printf ("Introuce tu edad \n");
     scanf("%19", &edad); //
     printf ("¿Que temperatura marco el termometro la ultima vez que fuiste al supermercado? \n");
     scanf ("%36.8", &temperatura);

     printf("Tu edad es: %19\n", edad);
     printf("Tu ultimo registro de temperarura fue: %36.8\n", temperatura);

}