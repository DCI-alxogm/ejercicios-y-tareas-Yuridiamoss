/* 
19 de Febrero 2025
*/

#include <stdio.h>
#include <math.h>

int main(){
     float x, y, z; //coordenadas cartesianas 
     float r, theta, phi; //coordenadas esfericas de salida
     float rc, theta_c, zc; //coordenadaas cilindricas de salida

     printf("Introduce los valores de las variables x, y, z que quieres convertir \n");
     scanf ("%f", &x);
     scanf ("%f", &y);
     scanf ("%f", &z);

     //Realizo tranformacion de coordendas
     //Coordenadaas esfericas
     r = sqrt (x*x+y*y+z*z);
     theta = atan(y/x);
     phi = acos(z/r);

     //Coordenadas cilindricas
     rc = sqrt (x*x+y*y);
     theta_c = atan(y/x);
     zc = z;

     //SALIDA
     printf ("Coordenadas esfericas son r=%f, theta=%f, phi=%f \n", r, theta, phi);
     printf ("Coordenadas cilindricas son r=%f, theta=%f, z=%f \n", rc, theta_c, zc);
     //exit(0);
}