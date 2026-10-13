/*
SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI

Técnico em Desenvolvimento de Sistemas - Turma H

Aluno: Alvaro Delgado Quintana
Prof.: Ana

Atividade: beecrowd | 1957
Convertir a hexadecimal

Data: 09/10/2026
Cascavel - PR
*/
#include <stdio.h>

int main (){
    int num, r, c = 0, i = 0, j;
    char exa[10];

    scanf("%d", &num);

    if (num == 0){printf("0");}

    while(num>0){
        c = num / 16;
        r = num % 16;

        num = c;
        

        if(r<=9){exa[i] = r + '0';
        }else if (r==10){exa[i] = 'A';
        }else if (r==11){exa[i] = 'B';
        }else if (r==12){exa[i] = 'C';
        }else if (r==13){exa[i] = 'D';
        }else if (r==14){exa[i] = 'E';
        }else if (r==15){exa[i] = 'F';}
        
        i++;
    }

    for(j=i-1; j >= 0; j--){
        printf("%c", exa[j]);
    }

    printf("\n");



    return 0;
}