#include<stdio.h>

int main(){
    float r, t,volume, luas, keliling, pi;
    pi = 3.142857;
    scanf("%f %f", &r, &t);
    volume = pi * r * r * t;
    keliling = 2 * pi * r;
    luas = 2 * (pi * r * r) + (keliling * t);

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f", keliling);
    return 0;

}