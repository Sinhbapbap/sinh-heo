#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
        int  x, n, S = 0, i;

      scanf( "%d%d", &x, &n);

      for (i = 0; i <= n; i++)
      {
            S += pow( x, 2*i+1 );
      }

      printf( "gia tri S: %d", S);

      getch();
      return 0;
}
