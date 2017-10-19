 /* Viết chuong trinh tính tổ hợp chập k của n; */

#include<conio.h>
#include<stdio.h>


 unsigned long giaithua(int n)
 {
     unsigned long ketqua=1;
     int i;
     for( i=1 ; i<=n ; i++ )
   {ketqua*=i;}
 return ketqua;

 }
 unsigned long tohop(int k, int n)
 {
       return giaithua(n)/(giaithua(k) *giaithua(n-k));
 }
 int main()
 {int n,k;
 printf("nhap n,k:");
 scanf("%d %d", &n, &k);
 printf("gia tri to hop : %lu", tohop(k,n));


 getch();
 return 0;
 }
