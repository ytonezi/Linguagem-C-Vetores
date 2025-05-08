#include<stdio.h>
#include<stdlib.h>

main()
{
    int num[6], i, negativos=0, somapositivos=0;
    
    for (i=0;i<=5;i++)
    {
        printf("Numeros = ");
        scanf("%d", & num[i]);

        if (num[i] < 0)
        {
            negativos += 1;
        }
        else if (num[i] > 0)
            {
                somapositivos += num[i];
            }
    }

    printf("\nSoma positivos = %d", somapositivos);
    printf("\nQuantidade negativos = %d", negativos);
}