#include<stdio.h>
#include<stdlib.h>

main()
{
    int i, z, posicao;
    char nome[5][15];
    float altura[5], maior=0;

    for(i=0, z=1; i<=4; i++, z++)
    {
        printf("Nome do Jogador %d: ", z);
        scanf("%s", & nome[i]);

        printf("Altura do jogador %d: ", z);
        scanf("%f", & altura[i]);

        if (altura[i] > maior)
        {
            posicao = nome[i];
            maior = altura[i];
        }
    }

    printf("%s e o maior jogador com %0.2f de altura", posicao, maior);
}