/*Construa um programa que leia informa��es (matr�cula, nome, setor e sal�rio) de 2 funcion�rios.
Deve ser permitido executar quantas consultas o operador desejar, em que ele digita a matr�cula e s�o apresentados o setor e o sal�rio.
Se a matr�cula digitada n�o existir, informar o usu�rio.*/
#include <stdio.h>
#include <stdlib.h>
struct funcionario
{
    int matricula;
    char setor[30],nome[30];
    float salario;
};
int main()
{
    struct funcionario ficha[2];
    int i,pesquisaM,acha=0;
    char busca;
    for(i=0; i<2; i++)
    {
        printf("MATRICULA:\n");
        scanf("%d",&ficha[i].matricula);
        fflush(stdin);
        printf("SETOR:\n");
        scanf("%30[^\n]s",&ficha[i].setor);
        fflush(stdin);
        printf("NOME:\n");
        scanf("%30[^\n]s",&ficha[i].nome);
        fflush(stdin);
        printf("salario:\n");
        scanf("%f",&ficha[i].salario);
        fflush(stdin);
    }
    do
    {
        printf("DESEJA REALIZAR PESQUISA ? (S/N)\n");
        scanf("%c",&busca);
        fflush(stdin);
        if(busca=='s'||busca=='S')
        {
            printf("INFORME A MATRICULA\n");
            scanf("%d",&pesquisaM);
            fflush(stdin);
            for(i=0; i<2; i++)
            {
                if(pesquisaM==ficha[i].matricula)
                {
                    printf("SETOR: %s\nSALARIO %.2f\n",ficha[i].setor,ficha[i].salario);
                    acha=1;
                }

            }
            if(acha!=1) {
                printf("NAO ENCONTRADO\n");
            }
            acha=0;

        }

    }
    while((busca != 'N')&&(busca!='n'));


    return 0;
}