/* viet chuong trinh nhap vao 2 gia tri chi gio, sao do tinh va in ra tong cua chung */

#include<conio.h>
#include<stdio.h>

int main()
{
      printf("\nnhap gia tri gio dau:\n");
      int h1,p1;
      scanf("%d%d", &h1, &p1);
      printf("\nnhap gia tri gio sau:\n");
      int h2, p2;
      scanf("%d%d", &h2, &p2);
      int tonggio, tongphut;
      if( p1+p2 >= 60)
           {
              tonggio = h1+h2+1;
            tongphut = (p1+p2)-60;
           }
         else
         {
               tonggio = h1+h2;
               tongphut = p1+p2;
         }
         printf("\ntong 2 gio truoc sau la : %d gio %d phut", tonggio, tongphut);



      getch();
      return 0;
}
