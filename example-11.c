#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char kitapAd[30],yazar[30],kitapBilgi[30];

    printf("Kitap adi ve yazarini giriniz: ");
    scanf("%s%s",kitapAd,yazar);

    strcat(kitapBilgi,kitapAd);
    strcat(kitapBilgi," ");
    strcat(kitapBilgi,yazar);
    printf("\n\n");

    printf("%s",kitapBilgi);
    getch();
    return 0;
}