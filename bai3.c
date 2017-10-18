/*Viet chuong trinh nhap 2 so nguyen, sau do in ra tong binh phuong cua chung*/

#include<conio.h>
#include<stdio.h>
#include<math.h>
 int main()
{
      int a, b, tong;
      printf("nhap so nguyen a: ");
      scanf("%d", &a);
      printf("nhap so nguyen b: ");
      scanf("%d", &b);
      tong = pow(a,2) + pow(b,2);
      printf("tong binh phuong la: %d", tong);

      getch();
      return 0 ;

}
