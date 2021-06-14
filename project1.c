#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct kayit{
    char isim[20];
    char soyad[20];
    char telefon[12];
    int yas;
}k1;

//scanf("%s",&k1.isim);
int main(){
    printf("isim giriniz: ");
    gets(k1.isim);

    printf("soyisim giriniz: ");
    gets(k1.soyad);

    printf("tel-no giriniz: ");
    gets(k1.telefon);

    printf("yas giriniz: ");
    scanf("%d",&k1.yas);
    


    printf("\n\n");
    printf("isim: ");
    puts(k1.isim);

    printf("Soyad: ");
    puts(k1.soyad);

    printf("Telefon:");
    puts(k1.telefon);

    printf("Yas: ");
    printf("%d\n\n",k1.yas);

    getch();
    return 0; 
}