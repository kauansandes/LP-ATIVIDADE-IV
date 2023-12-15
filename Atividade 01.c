#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define tam 2

struct dados_contatos{
	char nome	[200];
	char numero	[200];
	char email	[200];
	
};

void pesquisarContato (struct dados_contatos *cont, char *contato){
	int i;
	for (i=0 ; i < 3 ; i++ ){
		if(strcmp(cont[i].nome,contato)==0){
			printf ("Nome: %s \n",cont[i].nome);
			printf ("Telefone: %s \n", cont[i].numero);
			printf("Email: %s\n",cont[i].email);
			return;
		}
	}
		printf("Contato não encontrado\n");

}


int main (){
	setlocale(LC_ALL,"portuguese");
	
	struct dados_contatos cont [tam];
	char contato [200];
	int i;
	
	for ( i= 0 ; i < tam ; i++){
		printf("Nome do %d° contato:\n",i+1);
		gets(cont[i].nome);
		printf("Numero do %d° contato:\n",i+1);
		gets(cont[i].numero);
		printf("Email do %d° contato:\n",i+1);
		gets(cont[i].email);
	}
	printf("Digite o nome do contato que quer pesquisar:");
	gets(contato);
	
	pesquisarContato(cont,contato);


return 0;
}
