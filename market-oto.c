#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    struct urunler 
    {
        char urunAdi[50];
        float fiyat;
    };

    int urunNo, urunAdet;
    float toplam = 0;
    int secim;


    struct urunler u1 =  {"Ulker Cikolatali Gofret",1};
    struct urunler u2 =  {"Doritos Cips",3};
    struct urunler u3 =  {"Nescafe",0.25};
    struct urunler u4 =  {"Ruffles Cips",2.5};
    struct urunler u5 =  {"Lays Cips",3.5};
    struct urunler u6 =  {"Ekmek",0.50};

    
    printf("\t\t[0] Cikis [0]\n");
    printf("\t\t[1] Alisveris Yapmak\n");
    printf("\t\tSeciminiz >>> ");
    scanf("%d",&secim);

    if(secim == 1){
        system("cls");
        while(secim != 0){
            printf("\t\t::: Urunlerimiz :::\n");
            printf("\t\t[1] Ulker Cikolatali Gofret [1 TL]\n");
            printf("\t\t[2] Doritos Cips [3 TL]\n");
            printf("\t\t[3] Nescafe [0.25 TL]\n");
            printf("\t\t[4] Ruffles Cips [2.5 TL]\n");
            printf("\t\t[5] Lays Cips [3.5 TL]\n");
            printf("\t\t[6] Ekmek [0.50 TL]\n");
            printf("\t\t[0] Odeme [0]\n");

            printf("\n\t\tHangi urunden almak istersiniz: ");
            scanf("%d",&urunNo);
            printf("\n\t\t%d nolu urunden kac tane almak istersiniz: ",urunNo);
            scanf("%d",&urunAdet);
            
            if(urunNo == 1){
                system("cls");
                toplam += u1.fiyat * urunAdet;
            }
            else if(urunNo == 2){
                system("cls");
                toplam += u2.fiyat * urunAdet;
            }
            else if(urunNo == 3){
                system("cls");
                toplam += u3.fiyat * urunAdet;
            }
            else if(urunNo == 4){
                system("cls");
                toplam += u4.fiyat * urunAdet;
            }
            else if(urunNo == 5){
                system("cls");
                toplam += u5.fiyat * urunAdet;
            }
            else if(urunNo == 6){
                system("cls");
                toplam += u6.fiyat * urunAdet;
            }
            else if(urunNo == 0 && urunAdet == 0){
                printf("\n\n\tToplam Tutar | %0.2f | TL",toplam);
                break;
            }
        }
    }
    else if(secim == 0){
        printf("%d",toplam);
        return 0;
    }
    getch();
    return 0;
}