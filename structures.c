#include <stdio.h>
int main()
{
  struct student
  {
    int rollno;
    float marks_lang;
    float marks_math;
    float marks_com;
    char name[20];
    float avg;
  };
  int i,n;
  struct student class[20];
  printf("enter the number of students:\n");
  scanf("%d",&n);
  printf("enter the details of the students:\n");
  for(i=0;i<n;i++)
    {
      printf("enter the roll no :\n");
      scanf("%d",&class[i].rollno);
      printf("enter the name :\n");
      scanf("%s",&class[i].name);
      printf("enter the marks scored in lang :\n");
      scanf("%f",&class[i].marks_lang);
      printf("enter the marks in math :\n");
      scanf("%f",&class[i].marks_math);
      printf("enter the marks in com :\n");
      scanf("%f",&class[i].marks_com);
    }
  for(i=0;i<n;i++)
    {
      class[i].avg=(class[i].marks_lang+class[i].marks_math+class[i].marks_com)/3;
   }
  printf("name rollno avg.marks:\n");
  for(i=0;i<n;i++)
    {
      if(class[i].avg>=35)
      {
        printf("%d %s %f\n",class[i].rollno,class[i].name,class[i].avg);
        printf("the average of marks is above the average\n");
      }
    }
   printf("name rollno avg.marks:\n");
  for(i=0;i<n;i++)
    {
      if(class[i].avg<35)
      {
        printf("%d %s %f\n",class[i].rollno,class[i].name,class[i].avg);
        printf("the average of marks is below the average\n");
      }
    }
  return 0;
}
