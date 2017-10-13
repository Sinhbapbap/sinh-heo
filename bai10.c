#include<conio.h>
#include<stdio.h>
#include<math.h>

 int main()
 {
       int x,n;
       scanf("%d%d",&x,&n);
       float  S;
       S=pow(x,n);
       printf("gia tri S: %10.5f",S);

       getch();
       return 0;
 }
{
      int n, S=1;
      scanf("%d",&n);
      int i;
      for( i = 1 ; i < n ; i++)
      {
            S = S * i;
            S += S;
      }
      printf("gia tri cua S: %d", S);

      getch();
      return 0;
}
