#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

      int x, n, i,j;
      float s, S,K, tong=0;
      scanf( "%d%d" , &x, &n);// nhap co so sau do nhap so mu//
      for (i = 0; i <= n ; i++)
       {
            K=(pow(x, 2*i));
            s=1;
            for (j=1;j<=2*i;j++)
            {
                  s*=j;
            }
            S=K/s;
            tong=tong+S;
       }
      printf( "gia tri tong: %0.5f", tong);
      getch();
      return 0;
}
