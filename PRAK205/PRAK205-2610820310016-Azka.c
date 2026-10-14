#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c, keliling, luas;
    scanf("%d %d", &a, &b);
    c = sqrt((b * b) - (a * a));
    keliling = a + b + c;
    luas = c * a / 2;
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2", luas);
    return 0;
}