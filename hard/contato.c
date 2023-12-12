#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

struct contato
{
    char nome[200], numero[200], email[200];
    
};


int main(){
struct contato usuario[3];
int i, j;

for(i = 0; i < TAM;  i++){

printf("Digite o nome %dº contato: ", i + 1);
gets(usuario[i].nome);
    for ( j = 0; j < TAM; j++)
    {
printf("Digite o seu numero de telefone: ");
gets(usuario[i].numero);

printf("Digite o seu email: ");
gets(usuario[i].email);
        
    }
    





}






    return 0;
}

