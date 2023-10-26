#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Sayý Ortalamasý
   //Kullanýcýdan 3 sayý alan ve bunun ortalamasýný veren bir C programý yazýnýz.

   float x,y,z;
   printf("3 sayi giriniz");
   scanf("%f%f%f",&x,&y,&z);

   printf("Ortalama : %.2f",x+y+z/3);
}
