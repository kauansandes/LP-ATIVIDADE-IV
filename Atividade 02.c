#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 2

struct dados_alunos
{
    char nome[200];
    char datanasc[200];
    float notas[2];
    float media;
};

float calcularMedia(struct dados_alunos *aluno)
{
    float soma;
    int i,j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0 ; j < 1 ; j++){
        soma += aluno[i].notas[j];
        }
    }
    return soma / i;
}

void aprovados(struct dados_alunos *aluno)
{
    int i, j;

    for (i = 0; i < tam; i++)
    {
        printf("\nNome do %d° aluno:%s\n", i + 1, aluno[i].nome);
        printf("Data Nascimento do %d° aluno:%s\n", i + 1, aluno[i].datanasc);
        for (j = 0; j < 2; j++)
        {
            printf("\n%d° Nota: %.1f\n", j + 1, aluno[i].notas[j]);
        }
        printf("Media:%.1f\n", aluno[i].media);

        if (aluno[i].media > 7)
        {
            printf("\nAprovado\n");
        }
        else
        {
            printf("\nReprovado\n");
        }
    }
}

int main()
{
    struct dados_alunos aluno[tam];
    int i, j;

    for (i = 0; i < tam; i++)
    {
        printf("\nDigite o nome do %d° Aluno:\n", i + 1);
        gets(aluno[i].nome);
        printf("Digite a data de nascimento do %d° Aluno:\n", i + 1);
        gets(aluno[i].datanasc);
        fflush(stdin);
        for (j = 0; j < 2; j++)
        {
            printf("Digite a %d°Nota:\n", j + 1);
            scanf("%f", &aluno[i].notas[j]);
        }
        fflush(stdin);
        system("cls||clear");
    }

    aluno[i].media = calcularMedia(aluno);

    aprovados(aluno);

    return 0;
}
