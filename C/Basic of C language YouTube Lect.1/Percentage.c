#include <stdio.h>
main()
{
    float phy=47;
    float chem=48;
    float math=40;
    float eng=47;
    float comp=45;

    float percent=(phy+chem+math+eng+comp)*100/250;
    printf("Percentage::%f",percent);
    
   
    return 0;
}