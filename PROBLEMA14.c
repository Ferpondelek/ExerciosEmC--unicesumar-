//Elabore um programa que apresente todos os n�meros divis�veis por tr�s que sejam menores que 100.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=100;i++) {
        if(i%3==0) {
            printf("%d ",i);
        }
    }
    return 0;
}
