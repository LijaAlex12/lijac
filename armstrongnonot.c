#include<stdio.h>
void main(){
  int n,sum=0,a,m;
  printf("enter any no");
  scanf("%d",&n);
  m=n;
while(n>0){
  a=n%10;
  sum=sum+a*a*a;
  n=n/10;

}
if(sum==m)
printf("armstrong");
else
printf("not armstrong");
printf("\n");
}
