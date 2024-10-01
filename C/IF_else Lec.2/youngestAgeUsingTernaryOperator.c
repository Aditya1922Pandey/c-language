#include <stdio.h>

int main()
{
    int a,b,c,z;
    scanf("%d%d%d",&a,&b,&c);
    z=((a<b)&&(a<c))?a:c;
    z=(z<b)?z:b;
    printf("Youngest age is %d",z);
    
   
   

    return 0;
}