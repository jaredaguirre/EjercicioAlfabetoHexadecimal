#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

//Imprimir alfabeto en forma de tabla de 4 columnas siendo asi la forma:
// A | Valor Decimal | Valor Hexadecimal
int main()
{
    char letra = 65;
    int i;

    while(letra!=58)
    {
        for(i=0;i<4;i++)
        {
            printf("%c | %d | %x \t", letra, letra, letra);
            letra++;
            if(letra==91 || letra==123 || letra==58)
            {
                printf("\n");
                break;
            }
        }
        printf("\n");
        if(letra==91)
            letra = 97;
        else if(letra == 123)
            letra = 48;
    }
    return 0;
}
