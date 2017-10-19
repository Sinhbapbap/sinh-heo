/* viet chuong trinh tinh dienj tich va chu vi cac hinh : tam giac, vuong, chu nhat, tron*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
int main()
{
float a,b,c,r;
float herong;
printf("\n\nnhap chieu dai cac canh a,b,c va ban kinh r: ");
scanf("%f%f%f%f", &a,&b,&c,&r);
float Svuong, Pvuong, Stg, Ptg, Scn, Pcn, Str, Ptr;

/*  kiem tra hinh chu nhat*/
if(a<=0)

    {
      printf("nhap sai canh vuong !, canh a phai duong");
      Svuong=0;
      Pvuong=0;
    }
else
{ Svuong=a*a;
 Pvuong =4*a; }
if(a<=0 ||b<=0)
{
      printf("nhap sai canh!, cac canh a,b phai duong");
      Scn=0;
      Pcn=0;
}else
{
      Scn= a*b;
      Pcn= (a+b)*2;

}

/*kiem tra co thoa hình tam giac khong*/

if(a+b < c || b+c < a || c+a < b)
      {printf(" cac canh khong tao thanh 1  mot tam giac!");
      Stg=0;
      Ptg=0;}

      else
        {
            herong=(a+b+c)/2;
            Stg=sqrt(herong*(herong-a)*(herong-b)*(herong-c));
            Ptg=a+b+c;}
      if(r<=0)
      {
            printf("khong phai hinh tron");
            Str=0;
            Ptr=0;
      }else
      {
            Str=r*r*pi;
            Ptr=2*pi*r;
      }



          printf("\n\n Hinh vuong canh = %.0f  co chu vi: %.2f dien tich: %.2f",a, Pvuong, Svuong);
          printf("\n\n Hinh chu nhat co chieu rong %.0f, dai %.0f  chu vi: %.2f dien tich: %.2f",a, b ,Pcn, Scn);
          printf("\n\n Hinh tam giac co canh %.0f %.0f %.0f chu vi: %.2f dien tich: %.2f",a, b, c, Ptg, Stg);
          printf("\n\n Hinh tron ban kinh %.0f  co chu vi : %.2f dien tich : %.2f", r, Ptr, Str);


 getch();
 return 0;


}
