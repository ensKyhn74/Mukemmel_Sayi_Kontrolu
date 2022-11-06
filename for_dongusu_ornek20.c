#include <stdio.h>
// klavyeden girilen sayı mükemmel mi değil mi?
// bir sayının kendisi haricindeki bölenlerinin toplamı sayıya eşitse o sayı mükemmel sayıdır
// 6 , 28 , 496 ve 8128 mükemmel sayıdır
// 6'nın bölenleri: 1 2 3      6 = 1 + 2 + 3

int main() 

{
 
 int BolenToplam = 0;
 int sayi;
 int i;
 
 printf("sayi girin: ");
 scanf("%d",&sayi);
 
 for(i = 1 ; i <= sayi/2 ; i++)
 { 
  if(sayi % i == 0)
  {
    BolenToplam += i;
  }
 }
 
 if(BolenToplam == sayi)
 {
   printf("%d mukemmel sayidir.",sayi);
 }
  
 else
 {
   printf("%d mukemmel sayi degildir.",sayi);
 }

 return 0;

}