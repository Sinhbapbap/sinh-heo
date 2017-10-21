
#include<conio.h>
#include<stdio.h>

int main()
{
      int n,so, so1=1, so2=1;
      printf("nhap gia tri n: ");
      scanf("%d", &n);
      printf(" %d   %d  ", so1, so2);
      while(so1+so2 < n)
      {
          so = so1 + so2;
          printf("%d  ", so);
          so2=so1;
          so1=so;

      }

      getch();
      return 0;
}
