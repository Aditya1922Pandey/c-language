#include <stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("enter a point coordiate\n");
    scanf("%d%d",&x1,&y1);
    printf("enter a point coordiate\n");
    scanf("%d%d",&x2,&y2);
    printf("enter a point coordiate\n");
    scanf("%d%d",&x3,&y3);
    double  m1,m2;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    const char *z;
    z=(m1==m2)?"collinear":"non collinear";
    printf("%s",z);




    // if(m1==m2){
    //     printf("collinear");
    // }
    // else{
    //     printf("Non collineaar");
   // }

    return 0;
    
     
}