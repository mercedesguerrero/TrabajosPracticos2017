#include <stdio.h>
#include <stdlib.h>

int tomaNumero(char msg[], float *numeroIngresado, int minimo, int maximo)
{
    int retorno = -1;
    float auxiliar;
    printf( "%s", msg);
    scanf("%f",&auxiliar);

    if (auxiliar< maximo && auxiliar >minimo)
    {
        *numeroIngresado=auxiliar;
        retorno = 0;
    }

    else
    {
        printf("Error");
    }

    return retorno;

}
