#include <stdlib.h>
#include <stdio.h>
#include <math.h>

  int main(){

    int	i,N=10;
    float numeros[N], func_eval[N];//o float numeros[10] 
    
    for(i = 0; i<N; i++){
      //Asigna el valor de 0 al i-esimo elemento del areglo
        scanf("%f", &numeros[i]);
        
       }

    for (i=0; i <N;i++ ){
     //Asigna el valor dado por la operacion indicada al i-esimo elemento del arreglo
       func_eval[i]=exp(numeros[i]);
       printf("%d \t %f \t %f 't %f \n", i, numeros[i]), func_eval[i]);
  return 0;

}
