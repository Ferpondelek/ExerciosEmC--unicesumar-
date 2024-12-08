//Escreva um programa que leia um número inteiro e apresente seu antecessor e seu sucessor.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero : ");
    scanf("%d",&num);
    printf("Antecesor : %d\nSucessor : %d",num-1,num+1);
    return 0;
}
