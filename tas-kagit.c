#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    int t=1;
    int k=2;
    int m=3;

    int i;
    int oyuncuPuan = 0;
    int pcPuan = 0;

    int secim;
    int pcSecim;

    srand(time(NULL));

    while(pcPuan != 3 && oyuncuPuan != 3){
        baslangic:
        printf("[1] Tas\n[2] Kagit\n[3] Makas\n[0] Cikis\n");
        printf("Seciminizi Giriniz: ");
        scanf("%d",&secim);
        pcSecim = rand() % 3 + 1;

        if(secim == 1){
            if(pcSecim == 1){
            }
            else if(pcSecim == 2){
                pcPuan += 1;
            }
            else if(pcSecim == 3){
                oyuncuPuan +=1;
            }
            printf("\t\t------------------------------\n");
            printf("\t\tOyuncu [%d] - [%d] Bilgisayar\n",oyuncuPuan,pcPuan);
            printf("\t\t------------------------------\n");
        }

        else if(secim == 2){
            if (pcSecim == 1){
                oyuncuPuan +=1;
            }
            else if(pcSecim == 2){
            }
            else if(pcSecim == 3){
                pcPuan += 1;
            }
            printf("\t\t------------------------------\n");
            printf("\t\tOyuncu [%d] - [%d] Bilgisayar\n",oyuncuPuan,pcPuan);
            printf("\t\t------------------------------\n");
        }

        else if(secim == 3){
            if(pcSecim == 1){
                pcPuan += 1;
            }
            else if(pcSecim == 2){
                oyuncuPuan +=1;
            }
            else if(pcSecim == 3){
            }
            printf("\t\t------------------------------\n");
            printf("\t\tOyuncu [%d] - [%d] Bilgisayar\n",oyuncuPuan,pcPuan);
            printf("\t\t------------------------------\n");
        }

        else if(secim == 0){
            printf("\n\n\t::: Oyundan Cikiliyor :::\n");
            break;
        }

        else{
            printf("\n\n\t::: Deger araliginda secim yapiniz :::\n");
            goto baslangic;
        }
    }
    printf("\t\t------------------------------\n");
    printf("\t\tOyun Sonu\n");
    printf("\t\tOyuncu [%d] - [%d] Bilgisayar\n",oyuncuPuan,pcPuan);
    printf("\t\t------------------------------\n");
    getch();
    return 0;
}