/* kiem tra N co phai so nguyen to*/

#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
      int n;
      printf("nhap n: ");
      scanf(" %d", &n);
      int dem = 0;
      int i;
      for(i=1 ; i<=n ; ++i)
         {

            if(n%i==0)
            {dem++;}
          }
      if(dem == 2)
           {
              printf("%d la so nguyen to !",n);
           }
      else
           {
               printf("%d khong la so nguyen to",n);
           }

      getch();
      return 0;
}



