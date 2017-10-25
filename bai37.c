/* tinh S(n)......*/
#include<conio.h>
#include<stdio.h>
#include<math.h>

float ketqua(int n);

float ketqua(int n)
{

      int i;
      float S = 0;
      for( i=2 ; i<=n ; i++)
      {
            S=pow((i+S), (float)1/i);
      }
      return S;
}

int main()
{
      int n;
      printf("nhap n: ");
      scanf("%d%*c", &n);
      printf("gia tri s(%d) = %f",n , ketqua(n));
      getch();
      return 0;
}
