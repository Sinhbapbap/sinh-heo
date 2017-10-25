#include<conio.h>
#include<stdio.h>
#include<math.h>

float ketqua(int n);

float ketqua(int n)
{
      int x, y;
      float S = 0;
      for( x=1; x<=n ; x++)
      {
            y=x+1;
            S= pow((x + S),(float)1/y);
      }

   return S;
}

int main()
{

      int n;
      printf("nhap n:");
      scanf("%d%*c", &n);
      printf("gia tri S(%d) = %f", n, ketqua(n));
      getch();
      return 0;
}
