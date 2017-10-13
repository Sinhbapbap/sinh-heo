#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
      int  x, n, S = 0, i;

      scanf( "%d%d", &x, &n);

      for (i = 1; i <= n; i++)
      {
            S += pow( x, 2*i );
      }

      printf( "gia tri S: %d", S);

      getch();
      return 0;
}
