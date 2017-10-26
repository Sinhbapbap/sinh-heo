/* tinh S(n) 1/1/1+1/....... có n phân số*/

#include<conio.h>
#include<stdio.h>

float ketqua(int n);

float ketqua(int n)

{
      float S=1;
      int i=1;
      while( i<=n )
      {
            S = (float)1/(1+S);
            i++;
      }
      return  S;
}

int main()
{
      int n;
      printf("nhap n: ");
      scanf("%d%*c", &n);
      if( n<0)
          {
             printf("ban nhap sai roi");
             return 0;

          }

      printf(" gia tri S(%d) = %f", n, ketqua(n));
       getch();
       return 0;

}

