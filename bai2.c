/* viet chuong trinh chuyen tu do F sang do C, C=5/9(F-32)*/
 #include<conio.h>
 #include<stdio.h>
 int main ()
 {
       float F, C;
       printf("nhap do F: ");
       scanf("%f", &F);
       C=5*(F-32)/9;
       printf( " do C la:  %.2f", C);

       getch();
       return 0;
 }
