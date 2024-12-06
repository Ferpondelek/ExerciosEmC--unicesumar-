/**De acordo com uma tabela médica, o peso ideal está relacionado com a altura e o sexo.
 Elabore um algoritmo que receba altura e sexo de uma pessoa e calcule e imprima o seu peso ideal, sabendo que:

Para homens	(72.7 x altura ) - 58
Para mulheres	(62.1 x altura) - 4 4.7
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float altura;
    float pesoIdeal;

    printf("digite seu sexo ('M' ou 'F')\n");
    scanf(" %c",&sexo);
    printf("Digite sua altura : \n");
    scanf("%f",&altura);
        if(sexo=='f'||sexo=='F') {
              pesoIdeal = (62.1 * altura) - 44.7;
              printf("PESO IDEAL: %.2f",pesoIdeal);
        }
        if(sexo=='m'||sexo=='M') {
              pesoIdeal = (72.7 * altura) - 58;
              printf("PESO IDEAL: %.2f",pesoIdeal);
        }



    return 0;
}
