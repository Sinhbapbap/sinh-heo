#include<conio.h>
#include<stdio.h>
#include<math.h>
float ketqua(int n);

float ketqua(int n)
{
      int i;
      float S=0;
      float x;
      printf("nhap x: ");
      scanf("%f%*c", &x);

      for ( i=1 ; i<=n ; i++)
      {
          S= sqrt(pow((x), i)+S);
      }
      return S;
}

int main()

{
      int n;
      printf("nhap n: ");
      scanf("%d%*c", &n);
      printf("gia tri S(%d) =  %f ", n, ketqua(n));

      getch();
      return 0;
}
