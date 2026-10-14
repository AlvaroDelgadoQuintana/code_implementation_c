#include <stdio.h>
 
int main() {

    int num, notas[] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &num);

    printf("%d\n", num);

    for(int i = 0; i <= 6; i++){
        printf("%d nota(s) de R$ %d,00\n", num/notas[i], notas[i]);
        num = num - (num/notas[i]) * notas[i];
    } 
    return 0;
}