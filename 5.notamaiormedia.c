#include<stdio.h>
#include<stdlib.h>

main()
{
    int i, nota[5], soma=0, acima=0;
    float media=0;

    for (i=0; i<5; i++)
    {
        printf("Nota: ");
        scanf("%d", & nota[i]);

        soma += nota[i];
        media = soma/6;

        if (nota[i] > media)
        {
            acima += 1;
        }
    }
    printf("Alunos acima da media: %d", acima);
}