/*bai 46-4-48-49-50
dem so luong chu so le của sô nguyen dương n
tính tống các chữ số chẵn của số nguyên dương n
tính tích các chữ số lẻ
tìm chữ số đầu tiên cuae số nguyên dương n
tìm chữ số đảo ngược của số nguyên dương n*/

#include<conio.h>
#include<stdio.h>
#include<math.h>

int demsole(int n);
int tongsochan(int n);
int tichsole (int n);
int chusodautien (int n);
int chusodaonguoc(int n);


int demsole(int n)
{
      int count =0;
      while( n > 0)
      {
            if(((n%10)%2)!=0)

             {
                 count++;

             }
            n/=10;
      }

      return count;
}

int tongsochan(int n)
{
      int S=0;
      int i;
      while(n>0)
      {
            if ((n%10)%2==0)
            {
                  i=n%10;
                  S+=i;
            }
            n/=10;

      }
      return S;

}

int tichsole( int n)
{
      int T =1;
      int k;
      while(n>0)
      {
            if((n%10)%2 != 0)
            {
                  k=n%10;
                  T=T*k;
            }
            n=n/10;
      }
      return T;
}
int chusodautien(int n)
{
      int ml;
      while( n>0)
      {
            if(n/10==0)
                  ml=n;
            n/=10;
      }
     return ml;
}
int chusodaonguoc(int n)
{
 static int temp = 0;

    if (n< 10)
    {
        n+= temp * 10;
        temp = 0;
        return n;
    }
    temp = temp * 10 + n % 10;
    return chusodaonguoc(n/10);
}


int main()
{
      int n;
      printf("nhap so nguyen duong n: ");
      scanf("%d", &n);

      printf("\nso chu so le cua so nguyen %d la:  %d ", n, demsole(n));
      printf("\ntong cac chu so chan cua so %d la : %d ", n, tongsochan(n));
      printf("\n tich cac chu so le cua so %d la : %d", n, tichsole(n));
      printf("\n chu so dau tien cua so %d la : %d", n, chusodautien(n));
      printf("\n chu so dao nguoc cua so %d la : %d ", n, chusodaonguoc(n));


      getch();
      return 0;
}
