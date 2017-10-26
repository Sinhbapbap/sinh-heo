/*hay dem so luong chu so cua so nguyen duong n
tinh tong cac chu so cua so nguyen duong n
tinh tich cua cac cu so cua so nguyen duong n*/

#include<conio.h>
#include<stdio.h>

int sochuso (int n);
int tinhtong (int n);
int tinhtich (int n);

int sochuso(int  n)
{
      int count=1;
      while( n/10!=0)
      {
            count++;
            n/=10;
      }
      return count;
}
int tinhtong(int n)
{
      int S = 0;
      int k;
      while(n>0)
      {
            k = n%10;
            S += k;
            n /=10;
      }

      return S;

}
int tinhtich(int n)
{
      int T = 1;
      int m;
      while(n>0)
      {
            m = n%10;
            T *=m;
            n /=10;
      }

      return T;
}

int main()
{

      int n;
      printf("nhap so nguyen duong n; ");
      scanf("%d", &n);

      printf("so chu so cua so nguyen duong %d la : %d ", n, sochuso(n));
      printf("\ntong cac chu so cua so nguyen duong %d la %d", n, tinhtong(n));
      printf("\ntich cac chu so cua so nguyen duong %d la %d", n, tinhtich(n));
      getch();
      return 0;
}

