/* Bai 9: viet chương trình nhập 1 số nguyên dương không dấu
rồi in ra sô Hex tương ứng
 -Định nghĩa: số Hex là: hệ đếm thập lục phân, cơ số 16
 định dạng kiểu Hex là %x hoặc %X
 - tuong tu he 10 là %
 -he 8 là : %o */

#include<conio.h>
#include<stdio.h>
void main()
{
      int n;
      printf(" nhap so nguyen duong  :");
      scanf("%d",&n);
      printf(" so he Hex la : %x",n);
      getch();
   //   return 0;
}
