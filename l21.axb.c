#include<stdio.h>
#include<stdlib.h>

main()
{
    int a[5], b[5], r[5], i, z;

    for (i=0, z=1; i<=4; i++, z++)
    {
        printf("Valor de A: ");
        scanf("%d", & a[i]);
    }

    printf("\n");

    for (i=0, z=1; i<=4; i++, z++)
    {
        printf("Valor de B: ");
        scanf("%d", & b[i]);
    }

    for (i=0; i<=4; i++)
    {
        r[i] = a[i] * b[i];
        printf("\n%d", r[i]);
    }
}