/* viet chuong trinh mo phong dan piano,
 cac phim tuong ung  A-la, B-si, C- do, D-re, E-mi, F-pha, G-sol.
 */
#include<conio.h>
#include<stdio.h>
#include<ctype.h> /* đê sử dụng hàm toupper*/
#include<dos.h>
int main()
{
      char nhapphim;
      printf("nhap phim A, B, C, D, E, F, G de choi cac not nhac: ");
      printf("nhan phim ESC de ket thuc !");
      do
      {
            nhapphim = toupper(getch());/* toupper la ham tr vè chu cai hoa*/
            switch(nhapphim)
            {
                  case 'A' : sound(440);
                  break;
                  case 'B' : sound(494);
                  break;
                  case 'C' : sound(523);
                  break;
                  case 'D' : sound(587);
                  break;
                  case 'E' : sound(659);
                  break;
                  case 'F' : sound(698);
                  break;
                  case 'G' : sound(784);
                  break;
            }
            delay(100);
            nosound();

      }while( nhapphim !=27);


      getch();
      return 0;
}
