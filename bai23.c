/*viet chuong trinh giai he pt bac nhat
ax+by =c
dx+ey =f
*/

#include<conio.h>
#include<stdio.h>
int main()

{
      float a, b, c, d, e, f,hethuc;
      float x,y;
      printf("nhap cac he so cua hpt a,b,c,d,e,f: ");
      scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
      hethuc=b*d -e*a;


      /*giai he*/
      if( hethuc !=0)
      {
            y=(c*d-a*f)/hethuc;  /* chi la bien doi tru he so, ta se co he thuc va cach tinh nay*/
            x=(b*f-c*e)/hethuc;
            printf("nghiem cua phuong trinh la : x = %.2f, y = %.2f ", x,y);
      }else
      {
            printf(" \n he phuong trinh vo nghiem !");
      }



      getch();
      return 0;
}
