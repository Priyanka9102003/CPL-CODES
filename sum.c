#include <stdio.h>
#include<math.h>
int main()
{
  int i,n;
  float *p,sum,mean,var,sd,a[10];
  p =&a[0];
  printf("enter the number of array elements :\n");
  scanf("%d",&n);
  printf("enter the elements of array:\n");
  for (i=0;i<n;i++)
    {
      scanf("%f",&a[i]);
    }
  p = &a[0];
  sum =0;
  for(i=0;i<n;i++)
    {
      sum = sum +*p;
      p=p+1;
    }
  mean = sum/n;
  p = &a[0];
  var=0;
  for(i=0;i<n;i++)
    {
      var = var+pow((mean-*p),2);
      p=p+1;
    }
  var = var/n;
  sd=sqrt(var);
  printf("The sum = %f\n",sum);
  printf("The mean = %f\n",mean);
  printf("The var = %f\n",var);
  printf("The sd = %f\n",sd);
  return 0;
}
