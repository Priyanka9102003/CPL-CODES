#include <stdio.h>

int main()
{
  int a[10];
  int n, i,j,temp,z, key, first, last, mid;
  printf("enter the number of elements:");
  scanf("%d", &n);
  printf("enter the array elements :\n");
  for(i=0;i<n; i++)
    {
      scanf("%d",&a[i]);
    }
//BUBBLE SORT
for(i=0;i<n-1;i++)
{
  for(j=0;j<n-1-i;j++)
  {
    if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
  }
}
printf("the sorted array is:\n");
for(z=0;z<n;z++)
{
  printf("%d\n",a[z]);
}
printf("enter the key element:\n");
scanf("%d",&key);
first =0;
last = n-1;
while(first<=last){
  mid = (first + last)/2;
  if (key == a[mid])
  {
    printf("found the  element in  %d position ",mid+1);
    return 0;
  }
  else if (key>a[mid])
  {
    first = mid +1;
  }
  else 
  {
      last = mid -1;
  }
}
printf("THE ELEMENT %d IS NOT FOUND IN THE SORTED ARRAY ",key);
return 0;

}
