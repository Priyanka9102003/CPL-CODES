#include <stdio.h>
int btod (int bin)
{
  if(bin==0)
  {
    return 0;
  }
  else
  {
    return btod(bin/10)*2 +(bin%10);
  }
}
int main()
{
  int binary , decimal;
  printf ("enter the binary number\n");
  scanf("%d",&binary);
  decimal = btod (binary);
  printf("the decimal value  of given binary number %d is:%d\n",binary, decimal);
  return 0;
}
