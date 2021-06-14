#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define Maksimum(s1,s2) (s1>s2) ? s1 : s2
//s1 s2 den büyük ise s1 değil ise s2 

int main(){
    system("COLOR 6");
    printf("%d",Maksimum(10,4));
    getch();
    return 0;
}