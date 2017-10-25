#include<conio.h>
#include<stdio.h>
#include<math.h>

float giaithua(int n);
float ketqua(int n);

float giaithua(int n)
{
      int i;
      float gt=1;
      for( i= 1; i<=n ; i++)
      {
            gt*=i;
      }


      return gt;
}

float ketqua(int n)
{
      int i, j;
      float S=0;
      for( i= 1; i<=n ; i++)
      {
            j=i+1;
           S=pow(giaithua(i)+S, (float)1/j);
      }



      return S;
}

int main()
{
      int n;
      printf("nhap n: ");
      scanf(" %d%*c", &n);
      printf("gia tri S(%d) = %f", n, ketqua(n));
      getch();
      return 0;
}

