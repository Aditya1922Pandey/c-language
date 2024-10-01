#include <stdio.h>
int main()
{
  int x;
  printf("enter a number");
  scanf("%d",&x);
  if(x%5==0 || x%3==0){
    printf("divisible by 5 or 3");
  }
  else{
    printf("not divisible by anyone");
  }

    return 0;
}

