#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,l, opcao;
    char contatos[10][200]; 
    

printf("quantidade de memoria :\n");
scanf("%d",&l);

    do {
        printf("Escolha uma opção:\n");
        printf("1. Adicionar outros Contatos\n");
        printf("2. Mostrar Contatos\n");
        printf("3. finalizar\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                for (i = 0; i < l; i++) {
                    printf("Adicionar mais  contatos %d:\n", i + 1);
                    scanf("%s", contatos[i]); 
                }
                break;

            case 2:
                for (i = 0; i < l; i++) {
                    printf("Mostrar contato %d: %s\n", i + 1, contatos[i]);
                }
                break;

            case 3:
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}