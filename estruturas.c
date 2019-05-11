#include <stdio.h>
#include <stdlib.h>

#define TAM 2

void exibir_pessoas();

typedef struct Pessoa
{

    char nome[30];
    char email[30];

}Pessoa;

Pessoa pessoa[TAM];

int main()
{

  int i;
  
  for(i = 0; i < TAM; i++){
  	printf("Nome: ");
  	gets(pessoa[i].nome);
  	
  	printf("E-mail: ");
  	gets(pessoa[i].email);
  }
    
 
 	exibir_pessoas();
    
    return 0;
}

void exibir_pessoas()
{

	int i;
	
	
	for(i = 0; i < TAM; i++){
		printf("\n%s - %s\n", pessoa[i].nome, pessoa[i].email);
	}
}
