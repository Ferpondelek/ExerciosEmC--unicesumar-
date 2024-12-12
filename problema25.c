//Construa um programa que efetue a leitura de quatro notas de 3 alunos, calcule a média de cada aluno e a média da turma.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total[2],totalT,mediaT,media[2],notas[2][4];
    totalT=0,mediaT=0;
    int i,j;
    for(i=0;i<2;i++) {
        printf("NOTAS DO ALUNO %d\n",i+1);
        for(j=0;j<4;j++) {
            printf("NOTAS %d\n",j+1);
            scanf("%f",&notas[i][j]);
            total[i]+=notas[i][j];
        }
        media[i]=total[i]/4;
        totalT+=media[i];
    }
    mediaT+=totalT;
      for(i=0;i<2;i++) {
        printf("media do aluno %d\nMedia: %.2f\nMedia da turma: %.2f",i+1,media[i],mediaT);
      }
    return 0;
}

