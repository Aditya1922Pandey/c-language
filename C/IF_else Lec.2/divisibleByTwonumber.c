#include <stdio.h>
int main()
{
  int x;
  printf("enter a number");
  scanf("%d",&x);
  if(x%5==0 && x%3==0){
    printf("divisible by both");
  }
  else{
    printf("not divisible");
  }

    return 0;
}

