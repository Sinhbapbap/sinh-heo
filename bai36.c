/*tinh S(n)= can n!+ căn (n-1)!+...có n dấu căn*/

#include<conio.h>
#include<stdio.h>
#include<math.h>
float tinhgiaithua(int n);
float ketqua (int n);/* nguyen mau cua ham */


float tinhgiaithua(int n)
{
      int i;
      float giaithua = 1;
      for( i=1 ; i<=n ; i++)
           {
              giaithua*=i;
           }

return giaithua;}


float ketqua(int n)
{
      float S = 0;
      int i;
      for( i=1 ; i<=n ; i++)
      {
            S = (sqrt(tinhgiaithua(i)+S));
      }
      return S;
}
int main()
{
      int n;
      printf("nhap n: ");
      scanf("%d%*c", &n);
      printf("gia tri cua S(%d) = %f ", n, ketqua(n));
      getch();
      return 0;
}

