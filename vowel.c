#include<stdio.h>
void main(){
  char l;
  printf("enter any alphabet");
  scanf("%c",&l);
  if(l=='a' || l=='e'|| l=='i'|| l=='o'|| l=='u'){
    printf("its a vowel");
    printf("\n");
  }
  else{
    printf("not a vowel");
    printf("\n");
  }
}
