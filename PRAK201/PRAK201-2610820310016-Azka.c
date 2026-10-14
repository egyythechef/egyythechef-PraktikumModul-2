#include<stdio.h>

int main(){
    system("cls");
    char nama[50], nim[50], kelas[50], ttl[50], alamat[50], hobi[50], hp[50];

    printf("Nama                    : ");
    scanf("%[^\n]", nama);
    printf("NIM                     : ");
    scanf("%s", nim);
    printf("Kelas Paralel           : ");
    scanf("%s", kelas);
    printf("Tempat/Tanggal Lahir    : ");
    scanf("%s", ttl);
    printf("Alamat                  : ");
    scanf(" %[^\n]", alamat);
    printf("Hobby                   : ");
    scanf(" %[^\n]", hobi);
    printf("No. Hp                  : ");
    scanf("%s", hp);
    printf("\n");
    printf("Nama                    : %s\n", nama);
    printf("NIM                     : %s\n", nim);
    printf("Kelas Paralel           : %s\n", kelas);
    printf("Tempat/Tanggal Lahir    : %s\n", ttl);
    printf("Alamat                  : %s\n", alamat);
    printf("Hobby                   : %s\n", hobi);
    printf("No. HP                  : %s\n", hp);
    return 0;
}