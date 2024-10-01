#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter a number");
    scanf("%d", &x);
    printf("enter a number");
    scanf("%d", &y);
    printf("enter a number");
    scanf("%d", &z);

   if((x+y)>z && (y+z)>x && (z+x)>y){
    printf("It can be sides of triangle");
   }
   else{
    printf("It cannot be sides of triangle");
   }
    return 0;
}
