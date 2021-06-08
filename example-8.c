#include <stdio.h>
#include <conio.h>

int main(){
    char bilgi[40];
    printf("Bilgiyi Giriniz: ");
    gets(bilgi);//klavyeden cümle alır
    printf("\n\n");
    puts(bilgi);//ekr
    getch();
    return 0;
}