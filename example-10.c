#include <stdio.h>
#include <conio.h>

int main(){

    char kaynak[30]="Merhaba istanbul";
    char kopya[30]="";
    //strcpy(kopya,kaynak); //2.değişkeni 1.değişkene kopyala
    strncpy(kopya,kaynak,7); //2.değişkeni 1.değişkene ilk 7 karakteri kopyala
    printf("%s",kopya);

    getch();
    return 0;
}