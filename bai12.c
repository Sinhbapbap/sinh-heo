#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
      int x, n, s = 0, i;
      printf("nhap x:");
      scanf("%d",&x);
      printf("nhap n: ");
      scanf("%d",&n);
      for( i = 1 ; i <= n ; i++)
      {
            s += pow(x,i);

      }
      printf("gia tri s: %d",s);

      getch();
      return 0;
}
