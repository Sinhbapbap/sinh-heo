/*viet chuong trinh in ra bang cuu chuong tu 2-9 */
#include<conio.h>
#include<stdio.h>


int main()
{
      int i,j,s;
      printf("======BANG CUU CHUONG SINH===========\n\n");

            for (i=2; i<= 9; i++)
            {
                  for (j=1; j<=10; j++)
                        {     s=i*j;
                                    printf(" %d * %d = %d\n", i,j, s);
                        }
                  printf("\n\n");

            }


      getch();
      return 0;
}
