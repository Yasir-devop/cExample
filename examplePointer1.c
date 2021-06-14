#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int sayi = 10;
    int *s = &sayi;

    printf("Sayi: %d",sayi);
    printf("\nAdres: %x",s);


    printf("\n\n--------------------");
    char harf = 'a';
    char *h = &harf;

    printf("\nHarf: %c",harf);
    printf("\nAdres: %x",h);

    getch();
    return 0;
}