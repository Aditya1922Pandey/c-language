#include <stdio.h>

int main()
{
   int a,b;
   printf("enter either 0 or 1::");
   scanf("%d",&a);
   printf("enter either 0 or 1::");
   scanf("%d",&b);
   printf("and:%d\n",a&&b);
   printf("not_b::%d\n",!b);
   printf("or::%d\n",a||b);
   printf("not_a::%d\n",!a);
   printf("Nor::%d\n",a^b);
  
   

    return 0;
}