/* Cho n la so nguyen. Hay tim gia trị nguyên dương k lớn nhất sao cho S(k)<n. Trong do chuoi S(k) được đinh
nghĩa như sao S(k) = 1+2+3...+k.
*/
#include<conio.h>
#include<stdio.h>

int songuyenk( int n);

int songuyenk(int n)
{
      int S = 0;
      int i = 0;
      while (S<n)
      {
            i++;
            S+=i;

      }
      return i-1;
}

int main()

{
      int n;
      printf(" moi ban nhap n: ");
      scanf("%d%*c", &n);
      printf("gia tri k thoa S(k) < %d la : %d", n, songuyenk(n));

      getch();
      return 0;
}
