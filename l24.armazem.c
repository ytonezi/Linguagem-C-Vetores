#include<stdio.h>
#include<stdlib.h>

main()
{
    char nome[3][10];
    int i, z, quantidade[3], produto=0;
    float preco[3], valorestoquetotal=0, valorestoqueindividual, maior=0;

    for (i=0, z=1; i<3; i++, z++)
    {
        printf("\nNome do produto: ");
        scanf("%s", & nome[i]);

        printf("Quantidade: ");
        scanf("%d", & quantidade[i]);

        printf("Preco: ");
        scanf("%f", & preco[i]);

        valorestoqueindividual = quantidade[i] * preco[i];

        valorestoquetotal += quantidade[i] * preco[i];

        printf("\nValor em estoque produto (%s): %0.2f", nome[i], valorestoqueindividual);

        if (valorestoqueindividual > maior)
        {
            produto = i+1;
            maior = valorestoqueindividual;
        }
    }

    printf("\n\nValor do estoque total: %0.2f", valorestoquetotal);
    printf("\n\nProduto de maior valor em estoque: %d \nValor: %0.2f", produto, maior);
}
