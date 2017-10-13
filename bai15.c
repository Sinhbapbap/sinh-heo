#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
      int  n;
      float S=0;
      float s=0;
      scanf(" %d", &n);
      int i;
      for(i=1 ; i<=n ; i++)
           {
            s+=i;
            S+=1/s;
           }
      printf("gia tri S: %.2f", S);

      getch();
      return 0;}
