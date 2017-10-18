/* viet chuong trinh giai phuong trinh bac nhat aX + b = 0*/
 #include<stdio.h>
 #include<conio.h>
 int main()
 {

       float a, b, X;
       printf("nhap a:");
       scanf("%f",&a);
       printf("nhap b: ");
       scanf("%f", &b);


       if(a == 0 && b == 0)
       {
             printf("phuong trinh co vo so nghiem");
       }
       if(a == 0 && b!=0)
       {
             printf("phuong trinh vo nghiem!");
       }
       if (a!=0 && b== 0)
       {
             X = 0;
             printf("phuong trinh co nghiem la: %f", X);
       }
       if(a!=0 && b!=0)
       {
             X=-b/a;
             printf("phuong trinh co nghiem la: %.2f", X);
       }
       getch();
       return 0;

 }
