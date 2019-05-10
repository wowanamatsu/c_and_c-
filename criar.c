#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 20

void cria_arquivo(char nome[20]);
void inserir(char nome[20]);
void ler_arquivo(char nome[20]);
void ler_linha_a_linha(char nome[20]);

int main()
{
  
   /*cria_arquivo("teste2.txt");
   inserir("teste2.txt");
   ler_arquivo("teste2.txt");*/
   ler_linha_a_linha("teste2.txt");
  
    return 0;
}

void inserir(char nome[20])
{
    FILE * arquivo;
    char texto[30];
    
    if((arquivo = fopen(nome, "a")) != NULL)
    {
        printf("Digite um texto para ser armazenado:\n");
        gets(texto);
    
        //usando fprintf para armazenar a string no arquivo
        fprintf(arquivo, "%s\n", texto);
        
    }else{
        printf("O arquivo não pode ser aberto.");
    }
    
    // Fecha o arquivo para liberar a memoria
    fclose(arquivo);
}


void ler_linha_a_linha(char nome[20])
{

    FILE * arquivo;
    char linha[100];
    
    arquivo = fopen(nome, "r");
    
    while(!feof(arquivo))
    {
        fgets(linha, 100, arquivo);
            printf("%s\n", linha);
    }

    fclose(arquivo);

}


void ler_arquivo(char nome[20])
{

    // Cria um ponteiro do tipo arquivo
    FILE * arquivo;
    
    char texto[200];
    
    // Verifica se o arquivo existe
    if((arquivo = fopen(nome, "r")) != NULL)
    {
    
        //enquanto não for fim de arquivo o looping será executado
	    //e será impresso o texto
	    // A função 'fgets' recebe o tipo do dado, tamanho e arquivo de origem
	    while(fgets(texto, 200, arquivo) != NULL)
	    {
	        printf("%s\n", texto);
	    }
        
    }else{
        printf("Arquivo não existe.\n");
    }
    
    // Fecha o arquivo para liberar a memoria
    fclose(arquivo);

}


void cria_arquivo(char nome[20])
{
    FILE * arquivo; // Cria uma variável ponteiro do tipo FILE.
    
    // O argumento "w" cria um arquivo no disco rígido.
    arquivo = fopen(nome, "w");
    
    
    // Fecha o arquivo para liberar a memoria
    fclose(arquivo);
}
