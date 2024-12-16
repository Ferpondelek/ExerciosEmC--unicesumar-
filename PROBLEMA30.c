//Elabore uma função que receba uma string e retorne a quantidade de consoantes.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int RetornaConsoantes(char string[30]);

int main()
{
    char palavra[30];
    int quantidade;
    printf("Digite uma palavra: \n");
    gets(palavra);
    quantidade = RetornaConsoantes(palavra);
    printf("QUANTIDADE DE CONSOANTES: %d",quantidade);

    return 0;
}
int RetornaConsoantes(char string[30]) {
    int tam,i,consoantes = 0;
    tam = strlen(string);
    for(i=0;i<tam;i++) {
        if(string[i]!='a'&&string[i]!='e'&&string[i]!='i'&&string[i]!='o'&&string[i]!='u') {
            consoantes++;
        }
    }
    return consoantes;
}
