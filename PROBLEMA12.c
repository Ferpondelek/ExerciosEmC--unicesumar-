/*O problema consiste em auxiliar um professor no fechamento das notas de uma
turma. Para tanto, deve ser constru�do um programa que leia o c�digo do aluno,
o n�mero de notas da disciplina e as notas. Calcule a m�dia final de cada aluno e
informe o n�mero de alunos aprovados e reprovados. Para ser aprovado, o estudante precisa obter m�dia maior ou igual a seis. O programa � encerrado quando
� informado o c�digo de aluno zero.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod,qtdProvas,i;
    float notas,TotalN,media;
    TotalN=0,media=0;
    printf("Digite o codigo do aluno: \n");
    scanf("%d",&cod);
    while(cod!=0) {
        printf("Digite a quantidade de provas: \n");
        scanf("%d",&qtdProvas);
        for(i=0;i<qtdProvas;i++){
            printf("Digite a nota %d \n",i+1);
            scanf("%f",&notas);
            TotalN+=notas;
        }
        media = TotalN/qtdProvas;
        TotalN=0;
        printf("media do aluno %d : %.2f\n",cod,media);
        media=0;

        printf("Digite o codigo do aluno: \n");
        scanf("%d",&cod);


    }
    return 0;
}
