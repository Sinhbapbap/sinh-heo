/*cho hien len man hinh bang ma ascii 32 den 255 */


#include<conio.h>
#include<stdio.h>
int main()
 {
       int i, j;
      printf("     ");
      for(j =0 ; j < 16 ; j++)
            printf("%3d", j);
      for(i=2; i<16 ; i++)
      {
            for( j=0 ; j<16 ; j++)
            {
                  if( j==0)
                  {
                        printf("\n %2d  ", i);
                  }
            printf("  %c", i*16 +j);
            }
      }

      getch();
      return 0;
}
