#include <stdio.h>
#include <math.h>
 
int main() {

    double a, b, c, d, r1, r2;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    d = (b * b) - (4.0) * (a * c);

    if (a == 0.0 || d < 0.0){
        printf("Impossivel calcular\n");
    } else {
        r1 = ((-1.0) * b + sqrt(d)) / (2 * a);
        r2 = ((-1.0) * b - sqrt(d)) / (2 * a);
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }

    return 0;
}