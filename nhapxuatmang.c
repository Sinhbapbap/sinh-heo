#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100






 void Nhapmang( int a[], int n)

{



 //nhap cac phan tu trong mang
 int i;
 for(i=0 ; i<n ; i++)
 {
      printf("nhap vao a[%d] = ", i);
      scanf("%d",&a[i]);

 }
}
// xuat cac phan tu tong mang
void Xuatmang( int a[], int n)
{
      int i;
      for(i=0; i<n ; i++)
      {
            printf("%d   ", a[i]);
      }

}

int TimKiem(int a[],int n, int x)
{int i;
for(i=0 ; i<n ; i++)
{
      if(a[i]==x)
            return 1;
}
return 0;
}


void main()
{
 int a[MAX];
 int n, x, i;
 printf("nhap vao phan tu can tim kiem: ");
 scanf("%d", &x);

 int  check=TimKiem(a,n,x);
 /*kiem tra so sanh ket qua */
 if (check=1)
      printf(" co phan tu %d trong mang", x);
 else
      printf(" khong co phan tu %d trong mang", x);
 do
 {

       // nhap so luong phan tu trong mang
       printf("nhap so luong phan tu cua mang: ");
       scanf("%d", &n);
       if( n<0 || n>100)
       {
            printf("ban nhap sai so luong roi!, xin kiem tra lai");
       }

 } while( n<0 || n>100);//
 Nhapmang(a, n);
 Xuatmang(a, n);


getch();


}




