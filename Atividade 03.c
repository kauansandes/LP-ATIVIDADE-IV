#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <locale.h>

  
  
 struct Produto { 
     char nome[200]; 
     float preco; 
     int quantidadeEstoque; 
 }; 
  
  
 float valorTotal(struct Produto produto) { 
     return produto.preco * produto.quantidadeEstoque; 
 } 
  
  
 void realizarCompra(struct Produto *produto) { 
     int quantidadeComprada; 
  
     printf("Quantidade da compra: "); 
     scanf("%d", &quantidadeComprada); 
  
     if (quantidadeComprada > 0) { 
         produto->quantidadeEstoque -= quantidadeComprada; 
         printf("Compra realizada !\n"); 
     } else { 
         printf("Quantidade inválida.\n"); 
     } 
 } 
  
  
 void consultarEstoque(struct Produto produto) { 
     printf("Nome do produto: %s\n", produto.nome); 
     printf("Preço unitário: R$%.2f\n", produto.preco); 
     printf("Quantidade em estoque: %d\n", produto.quantidadeEstoque); 
     printf("Valor total em estoque: R$%.2f\n", valorTotal(produto)); 
 } 
  
 int main() { 
  
     setlocale(LC_ALL, "portuguese");

     struct Produto produto; 
     int opcao; 
  
  
     printf("Nome do produto: "); 
     scanf("%s", produto.nome); 
  
     printf("Preço do produto: "); 
     scanf("%f", &produto.preco); 
  
     printf("Estoque do produto: "); 
     scanf("%d", &produto.quantidadeEstoque); 
     fflush(stdin);
  
     do { 
         printf("1 - Realizar uma compra\n"); 
         printf("2 - Consultar estoque\n"); 
         printf("3 - Sair do programa\n"); 
         scanf("%d", &opcao); 
  
         switch (opcao) { 
             case 1: 
                 realizarCompra(&produto); 
                 break; 
             case 2: 
                 consultarEstoque(produto); 
                 break; 
             case 3: 
                 printf("Saindo...\n"); 
                 break; 
             default: 
                 printf("Opção inválida.\n"); 
            system("cls||clear");
         } 
     } while (opcao != 3); 
  
     return 0; 
 }
 