//Ejercicio 1: Suma de dos números
#include<stdio.h>

int main(){
	
 int num1, num2, suma = 0;

    printf("Digite 2 Numeros: ");
    scanf("%i %i", &num1, &num2);

    suma = num1 + num2;
    
        printf("La Suma Es: %i\n", suma);

    return 0;
}
