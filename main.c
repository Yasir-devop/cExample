#include <stdio.h>
#include <conio.h>//bekleme komutu

int main(void) {
	int sayi,toplam;
	int yuzler,onlar,birler;
	printf("Sayi Giriniz: ");
	scanf("%d",&sayi);

	yuzler=sayi/100;
	onlar=(sayi/10)%10;
	birler=sayi%10;

	toplam=yuzler+onlar+birler;
	printf("%d",toplam);
    getch(); //bekleme komutu
  return 0;
}