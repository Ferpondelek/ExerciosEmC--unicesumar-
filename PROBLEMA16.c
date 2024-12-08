/*A prefeitura de uma cidade está coletando informações sobre o salário e o
número de filhos dos habitantes. A leitura de dados é realizada até que seja
informado o valor -1 para o salário. Apresente a média de salário da população,
a média de filhos e o maior salário.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int filhos=0,cont=0,TotalFilhos=0;
    float salario=0,MediaSalario,mediaFilhos,MaiorSalario,TotalSalario;


    printf("Digite seu salario, ou -1 para encerrar: \n");
    scanf("%f",&salario);

    while(salario>-1)
    {
        TotalSalario += salario;
        printf("Informe o numero de filhos\n");
        scanf("%d",&filhos);
        TotalFilhos += filhos;
        cont++;
        MaiorSalario = -1;
        if(salario>MaiorSalario)
        {
            MaiorSalario=salario;
        }
        printf("Digite seu salario, ou -1 para encerrar: \n");
        scanf("%f",&salario);
    }




    if(cont>0)
    {
        MediaSalario = TotalSalario/cont;
        printf("Media de salario : %.2f\n",MediaSalario);
        mediaFilhos = TotalFilhos/cont;
        printf("Media de filhos : %.2f\n",mediaFilhos);
        printf("Maior salario : %.2f\n",MaiorSalario);
    }


    return 0;
}
