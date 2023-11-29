#include <stdio.h>

int main()
{
    int i,l, opcao;
    char nome[3][200];
    float preco[3],soma=0;
    int quantidade[3];
    
    

    printf("qual a quantidade dos produtos \n");
    scanf("%d", &l);

    fflush(stdin);

    do
    {
        printf("Escolha uma opcao:\n");
        printf("1. Adicionar um produto\n");
        printf("2. Mostrar Contatos\n");
        printf("3. finalizar\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            for (i = 0; i < l; i++)
            {
                printf("nome do produto \n");
                gets(nome[i]);
                fflush(stdin);

                printf("digite  o preco do produto :\n");
                scanf("%f", &preco[i]);
                fflush(stdin);
                printf("digite o preco do produto :\n");
                scanf("%d", &quantidade[i]);

                soma += preco[i] * quantidade[i];
            }
            break;

        case 2:

            printf("valor total da compra:R$%.2f\n", soma);

            break;

        case 3:
            printf("finalizando.\n");
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}