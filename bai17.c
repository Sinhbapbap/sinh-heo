#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{

      int x, n, i;
      float s = 1, S = 0, tong;
      scanf( "%d%d" , &x, &n);// nhap co so sau do nhap so mu//
      for (i = 1; i <= n; i++)
      {
            s *= i;
            S = pow(x,i)/s;
            tong += S;
      }
      printf( "gia tri tong: %f", tong);
      getch();
      return 0;
}
