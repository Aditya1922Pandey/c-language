//TERNARY OPERATORS...
//odd or even number
#include <stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    n%2==0?printf("even number"):printf("odd number");
    // const char *z;
    // z=(n%2==0)?"even number":"odd number";
    // printf("%s",z);
    return 0;
}