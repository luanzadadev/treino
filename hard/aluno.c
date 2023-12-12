#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 3
struct aluno_notas
{

    char nome[200];
    float notas[3];
    float media;
};

float calcularMedia(struct aluno_notas aluno)
{
    int i;
    float somaNotas;
    for (i = 0; i < TAM; i++)
    {
        somaNotas += aluno.notas[i];
    }

    aluno.media = somaNotas / i;
}

int main()
{
    setlocale(LC_ALL, "");
    struct aluno_notas aluno;
    int i;

    printf("Digite seu nome: ");
    scanf("%s", &aluno.nome);

    for (i = 0; i < TAM; i++)
    {
        printf("Digite a %dº nota: ", i + 1);
        scanf("%f", &aluno.notas[i]);
    }

    aluno.media = calcularMedia(aluno);

    printf("\nMédia: %.2f \n", aluno.media);

    return 0;
}