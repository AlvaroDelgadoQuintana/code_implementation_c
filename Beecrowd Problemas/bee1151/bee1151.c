/*
SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI

Técnico em Desenvolvimento de Sistemas - Turma H

Aluno: Alvaro Delgado Quintana
Prof.: Ana

Atividade: beecrowd | 1151
Fibonacci Fácil

Data: 09/10/2026
Cascavel - PR
*/
#include <stdio.h>

int main (){

int a, b, c, d, n;

a=0;
b=1;
d=1;

scanf("%d", &n);

if(n==1){
    printf("0");
}else{
    if(n==2){
        printf("0");
        printf(" 1");
    }else{
        printf("0");
        printf(" 1");
        for(c=0;c<n-2;c++){
            d=b+a;
            a=b;
            b=d;
            printf(" %d", d);
        }printf("\n");
    }
}

return 0;

}