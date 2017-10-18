/*viet chuong trinh tim USCLN va BSCLn của 2 so nguyen duong nhap tu bàn phim*/

#include<conio.h>
#include<stdio.h>
int main()
{
      int a, b, USCLN;
      printf(" nhap hai so nguyen duong :");
      scanf("%d%d", &a, &b);
      /* Tim Uoc so chung lon nhat*/
       int i,j;
      for( i = 1 ; i <= a ; i++)
            {
                  for( j = 1 ; j <= b ; j++)
                        {
                      if ( b%i==0 && a%j==0 &&i==j )
                            USCLN=i;
                        }
            }
                        printf( " \nuoc chung lon nhat cua 2 so: %d", USCLN) ;


      /* tim Boi chung nho nhat*/
      int BSCNN;
      BSCNN = (a*b)/USCLN;          /* ucln là lấy những thừa số chung có số mũ bé nhất
                                    , bcnn là lấy những thùa số riêng và  và chung có số mũ cao nhất,
                                    nên bcnn cua 2 so a và b = a*b/ ucln
                                    chia ucln để loại những thừa số chung có số mũ bé nhất!*/
      printf("\n boi so chung nho nhat cua 2 so: %d", BSCNN);


      getch();
      return 0;}
