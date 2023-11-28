#include <stdio.h>
#include <stdlib.h>

int main () {

/*Crie um software que leia 5 números inteiros e, em seguida, mostre na tela:
A quantidade de números ímpares;
A quantidade de números negativos;
O maior e o menor número;
A média de números pares;
A média de números inseridos*/

   int numeros[5];
    int i;
    int numerosImpares = 0;
    int numerosNegativos = 0;
    int maior, menor;
    int somaPares = 0;
    int somaTotal = 0;
    int numerosPares = 0;
    
    

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 != 0)
        {
            numerosImpares++;
        }

        if (numeros[i] < 0)
        {
            numerosNegativos++;
        }

        if (i == 0 || numeros[i] > maior)
        {
            maior = numeros[i];
        }
        if (i == 0 || numeros[i] < menor)
        {
            menor = numeros[i];
        }

        if (numeros[i] % 2 == 0)
        {
            numerosPares++;
            somaPares += numeros[i];
        }

        somaTotal += numeros[i];
    }

    printf("\nQuantidade de numeros impares: %d\n", numerosImpares);
    printf("Quantidade de numeros negativos: %d\n", numerosNegativos);
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    if (numerosPares > 0)
    {
        printf("Media de numeros pares: %.1f\n", (float)somaPares / numerosPares);
    }
    else
    {
        printf("Nao tem nenhum numero par.\n");
    }

    printf("Media de todos os numeros: %.1f\n", (float)somaTotal / 5);

    
    return 0;
}