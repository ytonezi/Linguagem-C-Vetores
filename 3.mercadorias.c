#include<stdio.h>
#include<stdlib.h>

main()
{
    int i, intervalo=0;
    float valorproduto[5], valortotal=0, valormedio, maiorvalor=0;

    for (i=1;i<6;i++)
    {
        printf("Valor do produto %d: ", i);
        scanf("%f", & valorproduto[i]);

        valortotal += valorproduto[i];

        if (valorproduto[i] >= 23.50 && valorproduto[i] <= 350.00)
        {
            intervalo += 1;
        }

        if (valorproduto[i] > maiorvalor)
        {
            maiorvalor = valorproduto[i];
        }
    }

    valormedio = valortotal/5;

    printf("\nValor total em estoque: %0.2f", valortotal);
    printf("\nValor medio em estoque: %0.2f", valormedio);
    printf("\nProdutos no intervalo: %d", intervalo);
    printf("\nProduto de maior valor: %0.2f", maiorvalor);
}