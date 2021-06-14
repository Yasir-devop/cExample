#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Fonksiyon tanımlamaları
int islemOne(int s1,int s2){
    int sum = s1 + s2;
    return sum;
}

int islemTwo(int s1,int s2){
    int carpim = s1 * s2;
    return carpim;
}

int islemThree(int s1){
    int kare = s1 * s1;
    return kare;
}

int islemFour(int s1){
    int kup = s1 * s1 * s1;
    return kup;
}

int islemFive(int x){
    int denklemSonuc = (5*x*x) + (4*x) + 3;
    return denklemSonuc;
}


int main(){
    //Kullanici Arayüzü
    baslangic:
    printf("********************\n");
    printf("******* MENU *******\n");
    printf("********************\n");

    printf("[1] Toplama islemi\n");
    printf("[2] Carpma islemi\n");
    printf("[3] Kare Bulma islemi\n"); 
    printf("[4] Kup Bulma islemi\n"); 
    printf("[5] Denklem Cozme islemi (5x^2+4x+3)\n"); 
    printf("[0] Ana Menu Geri Donme [0]\n");
    printf("[] Cikis []\n");
    printf("********************\n");

    //Program
    int secim;
    printf("isleminiz >>> ");
    scanf("%d",&secim);

    switch (secim){
        case 1:{
            int sayi1,sayi2,fonkDeger;
            printf("iki sayi giriniz (aralarinda bosluk birakmalisiniz): ");
            scanf("%d%d",&sayi1,&sayi2);
            fonkDeger = islemOne(sayi1,sayi2);
            printf("Toplam = %d\n",fonkDeger);
            goto baslangic;
            break;
        }
        case 2:{
            int sayi1,sayi2,fonkDeger;
            printf("iki sayi giriniz (aralarinda bosluk birakmalisiniz): ");
            scanf("%d%d",&sayi1,&sayi2);
            fonkDeger = islemTwo(sayi1,sayi2);
            printf("Carpim = %d\n",fonkDeger);
            goto baslangic;
            break;
        }
        case 3:{
            int sayi1,fonkDeger;
            printf("Karesini istediginiz sayiyi giriniz: ");
            scanf("%d",&sayi1);
            fonkDeger = islemThree(sayi1);
            printf("Sayinin Karesi = %d\n",fonkDeger);
            goto baslangic;
            break;
        }
        case 4:{
            int sayi1,fonkDeger;
            printf("Kupunu istediginiz sayiyi giriniz: ");
            scanf("%d",&sayi1);
            fonkDeger = islemFour(sayi1);
            printf("Sayinin Kupu = %d\n",fonkDeger);
            goto baslangic;
            break;
        }
        case 5:{
            int sayi1,fonkDeger;
            printf("X degerini giriniz: ");
            scanf("%d",&sayi1);
            fonkDeger = islemFive(sayi1);
            printf("Denklem Cevabi = %d\n",fonkDeger);
            goto baslangic;
            break;
        }
        case 0:{
            goto baslangic;
            break;
        }
        default:{
            return 0;
        }
    }
    getch();
    return 0;
}