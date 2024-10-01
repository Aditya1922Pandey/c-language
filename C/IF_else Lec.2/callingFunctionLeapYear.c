// write a program to find the given year is leap or not 
#include <stdio.h>
int fun(int a){
if(a%4==0){
    
    printf("leap year");
}
else{
    printf("not leap year");
}
return 0;
}
int main()
{
   int a,z;
   printf("enter year");
   scanf("%d",&a);
   z=fun(a);
   

    return 0;
}
