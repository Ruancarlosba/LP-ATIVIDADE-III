#include <stdio.h>
#include <stdlib.h>

int main () {

  char nome[5][300];
  float nota[5][3];
  int i,j;
  float soma = 0;
  float media[5];
  int idade[5];
  
  

  for (i = 0; i < 5; i++)
  {
    printf("Digite o nome do %d° aluno: ", i + 1);
    gets(nome[i]);

    printf("Digite a idade do aluno\n: ");
    scanf("%d", &idade[i]);

    for (j = 0; j < 3; j++)
    {
      printf("Digite a %d° nota: ", j + 1);
      scanf("%f", &nota[i][j]);

      //Local para calcular a soma total e depois a média.
      soma += nota[i][j];
    }
      media[i] = soma / j;
      soma = 0;
      fflush(stdin);
  }

  printf("Exibindo o resultado\n");
  
  for (i = 0; i < 5; i++)
  {
    
    printf("Nome do %d° aluno: %s\n", i + 1, nome[i]);
    printf("Idade do aluno: %d\n", idade[i]);
    for (j = 0; j < 3; j++)
    {
      
      printf("%d° Nota: %.1f\n", j + 1, nota[i][j]);
    }
    
    printf("Media do aluno: %.1f\n", media[i]);
    
    
    if (media[i] >= 7)
    {
      printf("Aprovado.");
    } else if (media[i] >= 5)
    {
      printf("Recuperação.");
    } else {
      printf("Reprovado.");
    }
    
    
  }
        

    return 0;
}