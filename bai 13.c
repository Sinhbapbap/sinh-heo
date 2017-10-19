/* Viet ham tinh N!*/
#include<conio.h>
#include<stdio.h>

int main()

{
      int N;
      unsigned long giaithua =1;
      printf(" nhap so tu nhien N:");
      scanf("%d",&N);
      int i;
      for( i=1 ; i<=N ; i++)
      {
         giaithua  *=i;
      }
      printf("gia tri %d! la : %lu",N, giaithua);
      getch();
      return 0;
}
