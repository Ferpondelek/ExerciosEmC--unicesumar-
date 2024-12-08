/*Escreva um programa que receba a idade e a altura de várias pessoas, calcule e
apresente a média de altura e idade das pessoas. A entrada de dados é encerrada
quando for digitado o valor zero para a idade.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,TotalIdade=0,cont=0;
    float altura,TotalAltura=0,MediaAltura=0,MediaIdade=0;
    printf("Digite sua idade: \n");
    scanf("%d",&idade);
    while(idade!=0)
    {
        TotalIdade+=idade;
        printf("Digite sua altura: \n");
        scanf("%f",&altura);
        TotalAltura+=altura;
        cont++;
        printf("Digite sua idade: \n");
        scanf("%d",&idade);
    }
    if(cont>0) {
        MediaAltura=TotalAltura/cont;
        MediaIdade=TotalIdade/cont;
        printf("Media altura : %.2f\n",MediaAltura);
        printf("Media idade : %.2f",MediaIdade);
    }

    return 0;
}
