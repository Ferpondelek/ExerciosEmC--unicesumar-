/*Em uma avalia��o de um produto, o cliente responde sua opini�o (1 � satisfat�rio; 2 �
indiferente; 3 � insatisfat�rio). Fa�a um programa que leia idade e opini�o e apresente:
o n�mero de clientes que responderam satisfat�rio, a m�dia de idade dos clientes que
opinaram como satisfat�rio, e o n�mero de clientes que responderam insatisfat�rio.
O programa se encerra quando for digitado o valor zero para idade.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,opiniao,cont=0,Nsatisfeitos=0,Ninsatisfeitos=0,TIdadeSatisfeito=0,TIdadeInsatisfeito=0;
    float MIdade=0;

    printf("Digite sua idade \n");
    scanf("%d",&idade);
    while(idade!=0) {
        printf("Qual sua opiniao: \n");
        printf("1-SATISFATORIO\t2-INDIFERENTE\t3-INSATISFATORIO\n");
        scanf("%d",&opiniao);
        switch(opiniao) {
            case 1 : Nsatisfeitos++;TIdadeSatisfeito+=idade;break;
            case 2 : break;
            case 3 : Ninsatisfeitos++;TIdadeInsatisfeito+=idade;break;
        }

        printf("Digite sua idade \n");
        scanf("%d",&idade);
        cont++;

    }
    if(cont>0) {
        if(Nsatisfeitos>0) {
            MIdade=TIdadeSatisfeito/Nsatisfeitos;
            printf("Clientes que responderam satisfatorio : %d\nMedia das idades dos clientes que responderam satisfatorio: %.2f\n",Nsatisfeitos,MIdade);
            MIdade=0;
        }

        if(Ninsatisfeitos>0) {
             MIdade=TIdadeInsatisfeito/Ninsatisfeitos;
            printf("Clientes que responderam insatisfatorio : %d\nMedia das idades dos clientes que responderam insatisfatorio: %.2f",Ninsatisfeitos,MIdade);
        }


    }
    return 0;
}
