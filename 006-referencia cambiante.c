#include <stdio.h>

int main(){
    int edad = 45;
    printf("Mi edad es de %d \n",edad);
    printf("La dirección de memoria de la variable es: %p \n",&edad);
    
    int *puntero;
    puntero = &edad; 
    // Puntero NO es igual a 45
    // Puntero es igual a 0061FF1C
    printf("El valor de a quien apunta el puntero A es: %i \n",*puntero);
    
    edad = 46;
    
    printf("El valor de a quien apunta el puntero B es: %i \n",*puntero);
}