#include <stdio.h>
#include <stdlib.h>

#include "CALCULADORA.h"
#include "CONSOLA.h"

int main()
{
    float rSuma,rResta,rMulti,rDivision,y,x;

    tomaNumero("Ingrese el primer número : \n", &x, 0, 100);
    printf("Ingrese el segundo numero : \n");
    scanf("%f",&y);

    if(calculadora(&rDivision,&rSuma,&rResta,&rMulti,x,y)== -1)
    {
        printf("Error");
    }
    else
    {
        printf("La division es : %.2f",rDivision);
    }
    printf("\nLa suma es: %.2f", rSuma);
    printf("\nLa resta es: %.2f",rResta);
    printf("\nLa multiplicacion es %.2f", rMulti);

    return 0;

}
