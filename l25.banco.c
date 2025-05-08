#include<stdio.h>
#include<stdlib.h>

main()
{
    int i, contador=0, tarifa[3], indice=0;
    char banco[3][10], maior;

    for (i=0; i<3; i++)
    {
        printf("\nBanco %d: ", i+1);
        scanf("%s", banco[i]);

        printf("Valor Tarifa: ");
        scanf("%d", & tarifa[i]);

        if (tarifa[i] > maior)
        {
            maior = tarifa[i];
            indice = i;
        }

        if (tarifa[i] >= 8 && tarifa[i] <= 12)
        {
            contador += 1;
        }
    }

    printf("\n\nBanco de maior tarifa: %s \nValor: %d", banco[indice], maior);
    printf("\nBancos no intervalo: %d", contador);
}