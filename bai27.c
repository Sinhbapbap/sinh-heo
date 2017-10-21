
//chuong trình tính so giay bac//

#include<conio.h>
#include<stdio.h>
#define TT 300000
int main()
 {
      int i, j, k, m, n, count = 0;
      for (i = 0 ; i <= TT/20000; i++)
                 {for (j = 0 ; j<=(TT-(i*20000))/10000 ; j++)
                  {for ( k = 0 ; k<=(TT-((i*2000)-(j*10000)))/5000 ; k++)
                   {for ( m = 0 ; m<=(TT-((i*2000)-(j*10000)-(k*5000)))/2000 ; m++)
                    {for ( n = 0 ; n <= (TT - ((i*2000)-(j*10000)-(k*5000)-(m*2000)))/1000 ; n++)
                     {

                     if ((i*20000 + j*10000 + k*5000 + m*2000 + n*1000)==TT)
            {
                  printf("\n%5d - %5d%5d%5d%5d%5d", ++count, i, j, k, m, n);
            }}}}}}

      getch();
}
