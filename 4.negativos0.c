#include<stdio.h>
#include<stdlib.h>

main()
{
    int lista[5], i=0;

    for (i=0;i<5;i++)
    {
        printf("numero: ");
        scanf("%d", & lista[i]);

        if (lista[i] <= 0)
        {
            lista[i] = 0;
        }
    }
    for (i=0;i<5;i++)
    {
        printf("%d", lista[i]);
    }
}