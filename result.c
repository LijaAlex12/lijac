#include<stdio.h>
void main(){
  int total,m1,m2,m3,m4,m5,m6;
  char result,grade,name[15];
  float avg;

  printf("enter student name");
  scanf("%s",name);
  printf("enter 6 marks");
  scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);

  total=m1+m2+m3+m4+m5+m6;
  avg=total/6;
  if(avg>40){
    result='p';
    if(avg>75)
      grade='d';
    else if(avg>60 && avg<=75)
      grade='a';
    else if(avg>50 && avg<=60)
      grade='b';
    else
      grade='c';
    }
  else
    result='f';
  printf("student name:%s",name);
  printf("\nmarks %d\t%d\t%d\t%d\t%d\t%d\n",m1,m2,m3,m4,m5,m6);
  printf("\nav marks:%f",avg);
  if(result=='p')
    printf("\nresult:pass");
  else
    printf("\nresult:fail");
  printf("\ngrade:%c",grade);
}
