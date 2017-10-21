/*  viet chuong trinh tinh n!!, biet rang n!!=1.3.5.. nếu n lẻ và n!!=2.4.6.. nếu n chẵn */
/* ------ cach lam----------*/
/*   sử dụng cờ hiệu check xét n để bật check
     bien i chạy trong vong for ,i =check
     tich bang S *i
     xuat ket qua */

#include<conio.h>
#include<stdio.h>

int main()
{
      unsigned long  S = 1; /* tich thuong rat lon nen khai bao kieu long hoac cao hon*/
      int n, i, check;
      printf("moi ban nhap n: ");
      scanf("%d", &n);
      if(n%2==0)
      {
            check =2;
      }
      else
            { check =1;}

      for(i=check; i<=n ; i=i+2)
      {
            S*=i;
      }
      printf("\n gia tri %d!! la: %ld",n, S);

      getch();
      return 0;

}
