#include <stdio.h>

/* Elaborar una aplicación de línea de comandos en C que pueda 
   calcular y presentar cuántas cifras tiene un determinado valor 
   numérico introducido por teclado. */

int main() {
    int numero, c = 0;

    printf("\nIngresa un numero: ");
    scanf("%d", &numero);

    while(numero > 0) {
        numero = numero / 10;
        c++;  
        }

    printf("\n Este numero contiene %d cifras.\n\n", c);

    return 0;
}