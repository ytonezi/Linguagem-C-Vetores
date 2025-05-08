#include<stdio.h>
#include<stdlib.h>

main()
{
    char nome[3][10];
    int i, locacao[3], gratis[3] = {0};

    for (i=0; i<3; i++)
    {
        printf("\nNome: ");
        scanf("%s", nome[i]);

        printf("Numero de locacoes: ");
        scanf("%d", & locacao[i]);

            if (locacao[i] >= 10 && locacao[i] < 20)
        {
            gratis[i] = 1;
        }
        else if (locacao[i] >=20 && locacao[i] < 30)
            {
                gratis[i] = 2;
            }
            else if (locacao[i] >= 30 && locacao[i] < 40)
                {
                    gratis[i] = 4;
                }
                else
                    {
                        gratis[i] = 6;
                    }  
    }

        for (i=0; i<3; i++)
        {
            printf("\n%s possui %d locacoes gratuitas", nome[i], gratis[i]);
        }        
}