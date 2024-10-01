#include <stdio.h>
int sum(int a,int b){
    int z=a+b;
    return z;

}
int main(){
    int a,b, z,x;
    printf("enter number::");
    scanf("%d",&a);
    printf("enter number::");
    scanf("%d",&b);
    x=sum(a,b);
    printf("%d",x);
    return 0;

}


   



