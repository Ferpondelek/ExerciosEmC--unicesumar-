/*O problema consiste em elaborar um cadastro para 20 livros, contendo as seguintes informações: código, título, autor, área, ano e editora.
 Desenvolver um menu com as seguintes opções:

1. Cadastrar os livros.

2. Imprimir as informações dos livros.

3. Pesquisar livros por código.

4. Ordenar os livros por ano.

5. Sair do programa.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2

struct livro {
    int cod, ano;
    char titulo[50], autor[50], area[50], editora[50];
};

int main() {
    int i, j, op, pesquisa;
    struct livro ficha[TAM];
    struct livro copia;

    do {
        printf("\nDIGITE A OPCAO:\n");
        printf("1 - CADASTRAR LIVROS\n");
        printf("2 - IMPRIMIR INFORMACOES DOS LIVROS\n");
        printf("3 - PESQUISAR LIVROS POR CODIGO\n");
        printf("4 - ORDENAR OS LIVROS POR ANO\n");
        printf("5 - SAIR DO PROGRAMA\n");
        scanf("%d", &op);
        getchar();

        switch(op) {
            case 1:
                for(i = 0; i < TAM; i++) {
                    printf("Digite as informacoes do livro %d:\n", i+1);
                    printf("CODIGO: \n");
                    scanf("%d", &ficha[i].cod);
                    getchar();
                    printf("TITULO: \n");
                    fgets(ficha[i].titulo, 50, stdin);
                    ficha[i].titulo[strcspn(ficha[i].titulo, "\n")] = 0;
                    printf("AUTOR: \n");
                    fgets(ficha[i].autor, 50, stdin);
                    ficha[i].autor[strcspn(ficha[i].autor, "\n")] = 0;
                    printf("AREA: \n");
                    fgets(ficha[i].area, 50, stdin);
                    ficha[i].area[strcspn(ficha[i].area, "\n")] = 0;
                    printf("ANO: \n");
                    scanf("%d", &ficha[i].ano);
                    getchar();
                    printf("EDITORA: \n");
                    fgets(ficha[i].editora, 50, stdin);
                    ficha[i].editora[strcspn(ficha[i].editora, "\n")] = 0;
                }
                break;

            case 2:

                printf("\n--- LISTA DE LIVROS ---\n");
                for(i = 0; i < TAM; i++) {
                    printf("CODIGO: %d\n", ficha[i].cod);
                    printf("TITULO: %s\n", ficha[i].titulo);
                    printf("AUTOR: %s\n", ficha[i].autor);
                    printf("AREA: %s\n", ficha[i].area);
                    printf("ANO: %d\n", ficha[i].ano);
                    printf("EDITORA: %s\n\n", ficha[i].editora);
                }
                break;

            case 3:
                // Pesquisar livros por código
                printf("INFORME O CODIGO DO LIVRO:\n");
                scanf("%d", &pesquisa);
                getchar();  // Limpeza do buffer
                int found = 0;
                for(i = 0; i < TAM; i++) {
                    if(ficha[i].cod == pesquisa) {
                        printf("LIVRO ENCONTRADO:\n");
                        printf("CODIGO: %d\n", ficha[i].cod);
                        printf("TITULO: %s\n", ficha[i].titulo);
                        printf("AUTOR: %s\n", ficha[i].autor);
                        printf("AREA: %s\n", ficha[i].area);
                        printf("ANO: %d\n", ficha[i].ano);
                        printf("EDITORA: %s\n", ficha[i].editora);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("LIVRO NAO ENCONTRADO.\n");
                }
                break;

            case 4:

                for(i = 0; i < TAM - 1; i++) {
                    for(j = i + 1; j < TAM; j++) {
                        if(ficha[i].ano > ficha[j].ano) {
                            copia = ficha[i];
                            ficha[i] = ficha[j];
                            ficha[j] = copia;
                        }
                    }
                }
                printf("LIVROS ORDENADOS POR ANO.\n");
                for(i = 0; i < TAM; i++) {
                    printf("TITULO: %s\nANO: %d\n", ficha[i].titulo, ficha[i].ano);
                }
                break;

            case 5:
                printf("SAINDO DO PROGRAMA.\n");
                break;

            default:
                printf("OPCAO INVALIDA! TENTE NOVAMENTE.\n");
        }

    } while(op != 5);

    return 0;
}
