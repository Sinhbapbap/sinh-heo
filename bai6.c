/* viet chuong trinh giai pt bac 2 aX^2 + bX + C*/
 #include<conio.h>
 #include<math.h>
 #include <stdio.h>
  int main()
  {
        float a, b, c, X1, X2, delta;
        printf("nhap a, b, c :");
        scanf("%f%f%f", &a, &b, &c);
        if(a==0)
        {
               if (b!=0)
                  {printf("phuong trinh tro ve phuong trinh bac nhat");
                        X1=-c/b;
                  printf("\nnghiem cua phuon trinh la : X= %f", X1);
                  }
              if (b==0)
              {
                    printf("phuong trinh vo nghiem!");
              }
        }


        if(a!=0)
        {delta = b*b-4*a*c;
               if( delta>0)
                 {
                  X1 = (-b + sqrt(delta)) / (2*a);
                  X2 = (-b - sqrt(delta)) / (2*a);
                  printf(" nghiem cua phuong trinh la X1 = %f , X2 = %f ",X1, X2);
                  }
               if( delta == 0)
              {
                    X1 = -b / (2*a);
                    printf("phuong trinh co nghiem kep: X1 = X2 = %f", X1);
              }
              if(delta < 0)
              {
                    printf("phuong trinh vo nghiem");
              }
            }

         getch();
        return 0;

  }
