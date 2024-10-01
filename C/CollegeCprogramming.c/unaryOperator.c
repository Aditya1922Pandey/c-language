#include <stdio.h>
int main(){
    int a,b,x,y,z,p;
    printf("enter value of a and b");
    scanf("%d%d",&a,&b);
    x=++a;
    y=a++;
    z=--b;
    p=b--;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",x,y,z,p,a,b);
    int q,r;
    printf("enter either 0 or 1");
    scanf("%d%d",&q,&r);
    int s=!q;
    int v=!r;
    printf("%d\n%d",s,v);
    return 0;

    

}