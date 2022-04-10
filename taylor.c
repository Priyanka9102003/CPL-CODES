#include<stdio.h>
#include<math.h>
#define  pi 3.142
int main()
{
  int i;
  float nume,deno,sum,term,degree,x;
  printf("enter the degree");
  scanf("%f",&degree);
  x = degree * (pi/180);
  printf("the built in function of sin(%f)=%f\n",degree,sin(x));
  sum = 0;
  i=1;
  nume = x;
  deno = 1;
  do{
    term = nume/deno;
    sum = sum +term;
    i=i+2;
    nume= - nume *x*x;
    deno= deno*i*(i-1);
  }while(fabs(term)>0.00001);
  printf("the computed value of sin(%f)=%f\n",degree,sum);
  return 0;
}
