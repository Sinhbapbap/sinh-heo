
/*tim cac so amstrong nho hon 1000,
so amstrong  la so co tong luy thua bac n cua cac ky so bang chinh so do*/
#include<conio.h>
#include<stdio.h>
int main()
{
      int i, tram, chuc, donvi, count=0;
      for( i=100; i<1000; i++) /* so  amstrong co the phai be nhat là 100, nen i=100 */
      {
            donvi=i%10;
            chuc=(i/10)%10;
            tram=i/100;
      if((tram*tram*tram + chuc*chuc*chuc + donvi*donvi*donvi) == i)
      {
            printf(" \nso %d thoa man",i);
            count ++;

      }}
      printf("\n cac so thoa man la: %d", count);

      getch();
      return 0;
}
