#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{   /*int (entero) %d - float (decimal) %f - char (caracter) %c*/

    int numero1;
    float numero2;
    float resultado;
    char letra;



    printf("ingrese un numero entero: ");
    scanf("%d", &numero1);

    printf("ingrese un numero decimal: ");
    scanf("%f", &numero2);

    printf("ingrese una letra: ");
    /*fflush(stdin); purga el buffer de memoria
    scanf("%c", &letra);*/

    letra = getche();

    resultado = numero1 + numero2;

    printf("\n la suma de los dos numeros es:  %.2f \n", resultado);

    printf("la letra es:  %c", letra);

    /*printf("el numero entero es: %d y el numero flotante es:  %.2f ", numero1, numero2); %.2f para mostrar los 2 primeros numeros despues de la coma*/
    return 0;
}
/*http://www.codeblocks.org/downloads/26 descargar la 4ta opcion codeblocks 17 12mingw*/
