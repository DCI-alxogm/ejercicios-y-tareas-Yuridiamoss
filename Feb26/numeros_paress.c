/* Programa para números pares e impares*/
    
    #include <stdio.h>
    #include <stdlib.h>

    int main ()
    {
    
      int numero;
      int residuo;
      char respuesta[2];

      //Instrucciones inicio
      printf ("Introduce tu numero \n");
      scanf ("%i", &numero);
 
      //Operacion
      residuo=numero%2;

      //Condicionales
      if(residuo==0){
      printf ("Es par \n");}
      else {
      printf("Es impar \n");}
    
      //Instrucciones al usuario
      printf ("¿Quieres consultar otro numero? \n");
      scanf("%s", respuesta);
      if (respuesta=="Si"){
      printf ("Introduce tu numero \n");
      scanf ("%i", &numero);
 
      //Operacion
      residuo=numero%2;

      //Condicionales
      if(residuo==0){
      printf ("Es par \n");}
      else {
      printf("Es impar \n");}
      }
      if(respuesta=="No"){
      exit(0);}
      }