#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void listele(){
    printf("Yasir Kurt\n");
}

int toplam(int sayi1,int sayi2){
    int toplam=sayi1+sayi2;
    return toplam;
}

int kupAlma(int sayi){
    int kupDeger = sayi*sayi*sayi;
    return kupDeger;
}

int main(){
    int fonkDeger,kupSayi;

    printf("Kup almak icin sayi giriniz: ");
    scanf("%d",&kupSayi);
    fonkDeger=kupAlma(kupSayi);
    printf("\nGirdiginiz sayinin kupu: %d",fonkDeger);


    
    getch();
    return 0;
}