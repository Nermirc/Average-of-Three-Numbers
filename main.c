#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Say� Ortalamas�
   //Kullan�c�dan 3 say� alan ve bunun ortalamas�n� veren bir C program� yaz�n�z.

   float x,y,z;
   printf("3 sayi giriniz");
   scanf("%f%f%f",&x,&y,&z);

   printf("Ortalama : %.2f",x+y+z/3);
}
