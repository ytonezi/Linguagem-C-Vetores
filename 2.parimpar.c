#include<stdio.h>
#include<stdlib.h>

main()
{
    int i,  num[6], par=0, impar=0;

    for (i=0;i<5;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", & num[i]);

        if (num[i] % 2 == 0)
        {
            par += 1;
        }
        else
            {
                impar += 1;
            }
    }

    printf("\nImpar = %d", impar);
    printf("\nPar = %d", par);
}