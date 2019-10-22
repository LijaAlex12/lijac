#include<stdio.h>
void main(){
  int first=0;
  int second=1,n,sum=0,i;
  printf("enter limit");
  scanf("%d",&n);
  printf("\n");
  printf("%d\t%d\t",first,second);

  for(i=2;i<n;i++){
    sum=first+second;
    printf("%d\t",sum);
    first=second;
    second=sum;
}
}
