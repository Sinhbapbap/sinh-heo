/* bai 22: viet chuongtrinh tinh cuoc taxi
km dau 5000
200m tiep theo la 1000
neu hon 30km thi moi km se them ra 3000
hay nhap so km sau do in ra so tien phai tra*/

#include<conio.h>
#include<stdio.h>
#include<math.h>
/*ham floor: Hàm này trả về số nguyên lớn nhất không lớn hơn x.
 ham ceil :Trả về giá trị nguyên nhỏ nhất không nhỏ hơn x.*/

int main()
{
      float tongtien;
      float km;
      printf("nhap so km di:");
      scanf("%f", &km);

            if(km <= 1.0)
                  tongtien=5000;
            else if( km<=30.0)
                  tongtien=5000 + floor((km-1.0)*5.0)*1000;
            else
                  tongtien=150000+ (ceil(km)-30)*3000;
      printf(" tong so  km di : %.2fkm,\n so tien phai tra :  %.2f dong",km,tongtien );
      getch();
      return 0;
}
