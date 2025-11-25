// Ejercicio 2: Calculadora simple

#include <stdio.h>

// para el sebastian del futuro: si quieres divisiones con decimales, cambia int por float
int main()
{
    int num1, num2, resultado; 
    char op; 
    
    printf("====Caculadora====\n");
    printf(" ===Opciones===\n\n");
    printf("1) Suma \n");
    printf("2) Resta \n");
    printf("3) Multiplicacion \n");
    printf("4) Division \n");
    printf("5) Salir \n");
  
    scanf(" %c",&op); // para el sebastian del futuro: el espacio antes de %c es importante para que no lea un salto de línea pendiente

    printf("Digite Su Primer Numero:");
    scanf("%i", &num1);
    printf("Digite Su Segundo Numero:");
    scanf("%i", &num2);


switch( op )
{
    case '1':
        resultado = num1 + num2;
        break;
        
    case '2':
        resultado = num1 - num2;
        break;
        
    case '3':
        resultado = num1 * num2;
        break;
        
    case '4':
        // para el sebastian del futuro: ojo con division entre cero, podrías hacer un if(num2 != 0) antes de asignar
        resultado = num1 / num2;
        break;
        
    case '5':
        // para el sebastian del futuro: este es el "salir", con return 0 sales del main y el programa termina
        return 0; // break no hace nada después de return, puedes eliminarlo si quieres
    
    default:
        // para el sebastian del futuro: default se ejecuta si ninguna opción coincide; útil para avisar al usuario que la opción es inválida
        printf("Opcion invalida, intentelo de nuevo\n");
        return 0; // o podrías usar un bucle para que vuelva a pedir la opción
}

printf("EL resultado es: %i\n",resultado);

    return 0;
}

