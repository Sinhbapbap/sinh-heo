/* viet chuong trinh nhap vao mot so nguyen duong 3 chu so(100-999)
sau do in ra cac chu so thuoc hàng tram chuc don vi*/


#include<conio.h>
#include<stdio.h>
int main()
{

      int so, tram, chuc, donvi;
      printf("nhap so co 3 chu so: "); /* vd so nhap vào là 134*/
      scanf("%d", &so);
      if( so > 99 && so <1000)
           {
                 donvi= so % 10;   /* 134 % 10 duoc "4"- so hang don vi */
            chuc = so / 10;  /* 134 /10 duoc 13, sau do  13 % 10 duoc "3"- so hang chuc*/
            chuc = chuc % 10;
            tram = so / 10;   /*134 / 10 duoc 13, sau do 13/10 duoc "1"- so hang tram*/
            tram = tram / 10;
            printf("\n so hang tram : %d \n so hang chuc : %d \nso hang don vi : %d", tram, chuc, donvi);

           }
      else        {
                  printf(" ban nhap sai roi !, phai nhap so co 3 chu so, vd: 125");
                  return 0;
                  }


      getch();
      return 0;
}
