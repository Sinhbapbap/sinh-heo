/* Viết chương trình nhập vào số nguyên thuộc hệ m, rồi in giá trị tương ứng ở hệ n.
n,m nhập từ bàn phím./ n,m trong khoảng 2-16*/

#include<conio.h>
#include<stdio.h>
#include<string.h>
 char *doics(char *number, int n, int m)/* use 2 tro number và doics kiểu char*/
{
 static char ketqua[17];
 char chuso[16]= "123456789ABCDEF";
 int i = 0, giatri = 0, len;/* khai báo 3  bien i, gia tri, len" do dai chuoi" */

 len =strlen(number); /* strlen là hàm tính toán độ dài chuỗi*/
 while (i < len)
      {
       giatri= (giatri * n) +(strchr(chuso,number[i]) - *&chuso);/* strchr tim kiem su xuat hien dau tien cua trỏ number  cho chu số*/
      i++;
      }
i=16;
ketqua[17] = 0;
do
{
      ketqua[i] = chuso[giatri % m];
      giatri /=m;
      i--;
}while(giatri>0);
return( ketqua + i + 1);
}
//ham chinh
void main()
{
    unsigned n, m;
    char number[17], *ketqua;
    do
    {
          printf("\n Nhap gia tri N (2-16): ");
          scanf("%d", &n);

    }while( n<2 || n>16);
    getchar();
    printf("gia tri thuoc he %d: ", n);
    gets(number);
    do
    {
          printf("\Nhap gia tri M (2-16) : ");
          scanf("%d", &m);

    }while (m<2 || m>16);
    printf("gia tri %s o co so %u co gia tri o co so %u la : ", number, n, m );
    ketqua = doics(number, n, m);
    puts(ketqua);
    getch();
/* do ... while khi nhap n co tac dung ngan chan những giá trị n ngoài ý muốn.
khai báo static trong ham doics co tac dung dua bien ket qua vao vung data segment
 hơn la vùng nhớ stack,vì nó nằm
trong vùng nhớ stack thì nó chỉ là gia trị tạm thời và nó sẽ bị mất đi khi ta gọi 1 hàm khác */


}
