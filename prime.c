#include<stdio.h>
#include<stdlib.h>
void main(){
  int k=0,i,n;
  printf("enter any prime number");
  scanf("%d",&n);
  if(n!=1){

  for(i=2;i<n;i++){
    if(n%i==0){
      k=1;
      break;
    }
  }

    if(k==0)
      printf("prime");
    else{
      printf("not prime");
    }
  }
  else if(n==1)
    printf("1 neither prime nor composite");
}
