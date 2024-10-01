#include <stdio.h>
int main()
{
    float pi,radius,area;
    pi=3.1415;
    printf("ENter radius::\n");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("The radius of Circle is::%f",area);
    return 0; 
}