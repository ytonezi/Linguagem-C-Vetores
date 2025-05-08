#include<stdio.h>
#include<stdlib.h>

main()
{
    int i, num[5], maior=0, posicao=5;

    for (i=0;i<5;i++)
    {
        printf("Numero = ");
        scanf("%d", & num[i]);

        if (num[i] > maior)
        {
            posicao = i - 1;
            maior = num[i];
        }
    }
    printf("Maior numero: %d\nPosicao: %d", maior, posicao+2);
}

