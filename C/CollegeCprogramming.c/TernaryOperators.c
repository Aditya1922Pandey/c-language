//UNARY OPERATORS::
#include <stdio.h>

int main()
{
    int m=10;
    int n1,n2,n3,n4;
    n1=++m;
    n2=m++;
    n3=--m;
    n4=m--;
    printf("%d\n%d\n%d\n%d\n%d\n",n1,n2,n3,n4,m);
    int x;
    scanf("%d",&x);
    
    int z = !x; // result is 1 (true)
    printf("%d",z);
     int flage,resulte;
    scanf("%d",&flage);
    
    resulte =!flage; // result is 1 (true)
    printf("%d",resulte);


    return 0;
}