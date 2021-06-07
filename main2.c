#include <stdio.h>
#include <conio.h>//bekleme komutu
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Turkish"); 
  int sayi1,sayi2,i,toplam;
  yeniden:
	printf("sayi giriniz: ");
	scanf("%d",&sayi1);
	printf("sayi giriniz: ");
	scanf("%d",&sayi2);
	if(sayi1!= sayi2){
		for(i=sayi1; i<=sayi2; i++){
		toplam=toplam+i;
	}
	printf("toplam %d",toplam);
	}
	else{
		printf("Girdiğiniz sayilar eşit olmamalı\n");
		goto yeniden;
	}
    getch(); //bekleme komutu
  return 0;
}