#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct kitapBilgi
{
    char kitapAd[30];
    char yazar[20];
    int fiyat;
    float puan;
};


int main(){
    struct kitapBilgi k1={"SekerPortakali","MahirKurt",10,7};
    printf("Kitap Adi: %s \nKitap Fiyati: %d",k1.kitapAd,k1.fiyat);
    
    getch(); 
    return 0;
}