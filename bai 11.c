#include<conio.h>
#include<stdio.h>
#include<math.h>
// tinh tong S=1+1.2+1.2.3+....+1.2.3..n//
int main()
{
      int n, tc = 1, tch = 0;// tc= tong con, tch= tong cha//
      scanf("%d",&n);
      int i;
      for( i = 1 ; i <= n ; i++)
      {
            tc*= i;
            tch+= tc;   //sau moi lan lap ta duoc 1 tong con va cong don cho tong cha//
      }
      printf("gia tri cua tong cha: %d", tch);

      getch();
      return 0;
}
