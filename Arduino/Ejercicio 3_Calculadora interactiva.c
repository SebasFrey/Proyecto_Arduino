//Ejercicio 3: Calculadora interactiva
#include <stdio.h>

// para el sebastian del futuro: si quieres divisiones con decimales, cambia int por float
int main()
{
    int num1, num2, resultado; 
    char op; 

do{ 
    // para el sebastian del futuro: elegiste do-while.
    // do-while SIEMPRE ejecuta el bloque al menos una vez.
    // está bien para un menú, pero solo si la lógica interna está ordenada.

    // system("cls");
    // para el sebastian del futuro: system("cls") está bien en Windows, 
    // pero no lo uses si estás aprendiendo, te confunde más de lo que ayuda.

    printf("====Caculadora====\n");
    printf(" ===Opciones===\n\n");
    printf("1) Suma \n");
    printf("2) Resta \n");
    printf("3) Multiplicacion \n");
    printf("4) Division \n");
    printf("5) Salir \n");

// para el sebastian del futuro: este while(op != 5) nunca se ejecuta.
// ¿por qué? porque ya usaste return arriba.
// return termina el programa ANTES de llegar aquí.
    scanf(" %c",&op);
    // para el sebastian del futuro: aquí tomas la opción...
    // ...pero inmediatamente después le pides números HASTA SI QUIERE SALIR.
    // por eso tu menú se siente raro: estás pidiendo números antes de validar la opción.

    printf("Digite Su Primer Numero:");
    scanf("%i", &num1);
    printf("Digite Su Segundo Numero:");
    scanf("%i", &num2);
    // para el sebastian del futuro: esto debería ejecutarse solo si op es 1,2,3 o 4.
    // si op es 5, no deberías llegar a este punto.

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
        // para el sebastian del futuro: recuerda validar división entre 0 alguna vez.
        resultado = num1 / num2;
        break;
        
    case '5':
        // para el sebastian del futuro: return 0 mata TODO el programa,
        // incluso si estás dentro de un bucle.
        // por eso nunca llegarás al while(op != 5)
        return 0; 
    
    default:
        // para el sebastian del futuro: este default es útil cuando
        // quieres repetir el menú, pero aquí...
        // ...estás haciendo return, así que NI DEFAULT ENTRA AL BUCLE.
        printf("Opcion invalida, intentelo de nuevo\n");
        return 0; 
}

 }while(op != 5);	

printf("EL resultado es: %i\n",resultado);
// para el sebastian del futuro: esto está fuera del bucle
// por eso solo muestra el resultado al final, cuando ya no se repite nada.

return 0;
}

