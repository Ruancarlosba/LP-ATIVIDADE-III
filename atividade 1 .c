#include <stdio.h>
#include <stdlib.h>

int main () {


/*Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.

- Mostre as informações solicitadas de cada pessoa e informe:
A maior altura e a menor altura.
O maior peso e menor peso;
A maior idade e a menor idade.*/ 

int i;
    char nome[5][500];
    int idade[5];
    float peso[5];
    float altura[5];
    float alto = 0;
    float baixo = 999;
    int velho = 0;
    int novo = 999;
    float gordo = 0;
    float magro = 999;  
    int pessoaAlta = 0;
    int pessoaBaixa = 0;
    int pessoaVelha = 0;
    int pessoaNova = 0;
    int pessoaGorda = 0;
    int pessoaMagra = 0;

    for (i = 0; i < 5; i++)
    {
        printf("qual  seu nome \n: ");
        gets(nome[i]);

        printf("qual sua idade\n: ");
        scanf("%d", &idade[i]);

        printf("Digite o  seu peso\n: ");
        scanf("%f", &peso[i]);

        printf("Digite  a sua altura\n: ");
        scanf("%f", &altura[i]);

        fflush(stdin);

        if (idade[i] > velho)
        {
            velho = idade[i];
            pessoaVelha = i;
        }
        if (idade[i] < novo)
        {
            novo = idade[i];
            pessoaNova = i;
        }

        if (peso[i] > gordo)
        {
            gordo = peso[i];
            pessoaGorda = i;
        }
        if (peso[i] < magro)
        {
            magro = peso[i];
            pessoaMagra = i;
        }

        if (altura[i] > alto)
        {
            alto = altura[i];
            pessoaAlta = i;
        }
        if (altura[i] < baixo)
        {
            baixo = altura[i];
            pessoaBaixa = i;
        }
    }

    system("cls || clear");

    printf("\n Resultados:\n");

    printf("Pessoa mais alta: %s, Altura: %.2f\n", nome[pessoaAlta], alto);
    printf("Pessoa mais baixa: %s, Altura: %.2f\n", nome[pessoaBaixa], baixo);
    printf("Pessoa mais pesada: %s, Peso: %.2f\n", nome[pessoaGorda], gordo);
    printf("Pessoa mais leve: %s, Peso: %.2f\n", nome[pessoaMagra], magro);
    printf("Pessoa mais velha: %s, Idade: %d\n", nome[pessoaVelha], velho);
    printf("Pessoa mais nova: %s, Idade: %d\n", nome[pessoaNova], novo);




    return 0;
}