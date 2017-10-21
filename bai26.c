#include<conio.h>
#include<math.h>


double giaithua(double n)
{

      double i, ketqua =1;
      for( i=2 ; i<=n ; i++)
            ketqua*=i;
      return ketqua; /* tra gia tri ketqua ve cho giai thua */
}
/*ham chinh */
int main()
{
      double ketqua, thusinh, x, n=1;
      printf("nhap gia tri x: ");
      scanf("%lf", &x);
      ketqua=x;
      do
      {
            thusinh = pow(x, 2*n+1) / giaithua(2*n+1);
            ketqua+=pow(-1, n) *thusinh;
            n++;

      }while( fabs(thusinh)> 0.0001); /* ham fabs trả về tri tuyet doi cua kieu dau phay dong */
      printf("\n ket qua tinh theo cong thuc = %10.8lf ", ketqua );
      printf("\n ket qua tinh theo ham= %10.8lf", sin(x));
      getch();
      return 0;
}
