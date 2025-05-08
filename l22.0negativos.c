#include<stdio.h>
#include<stdlib.h>

main()
{
    int num[5], i, z;

    for(i=0, z=1; i<=4; i++, z++)
    {
        printf("\nDigite o numero: ");
        scanf("%d", & num[i]);

        if (num[i] < 0)
        {
            num[i] = 0;
        }
    }

    for (i=0; i<=4; i++)
    {
        printf("\nNovo vetor: %d", num[i]);
    }

}