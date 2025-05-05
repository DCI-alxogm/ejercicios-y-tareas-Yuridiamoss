#include <stido.h>

int main() {

    FILE *archivo;
    float var1, var2;
    
    var1=0.15
    var2=100.8;

    archivo = fopen ("test.txt", "w");
    fputs("Esta es una prueba de la instruccion fputs...\n", archivo);
    fprintf(archivo; "Esta es otra prueba usando fprintf\n...");
    fclose(archivo);
    return(0);
