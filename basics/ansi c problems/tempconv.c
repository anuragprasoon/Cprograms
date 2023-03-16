#include <stdio.h>
void main(){
    float ftemp,ctemp;
    int isCon=0;
    while(isCon==0){
        printf("Enter a temp in F: ");
        scanf("%f",&ftemp);
        ctemp=(ftemp-32)/1.8;
        printf("Temp in C is %5.2f \n ",ctemp);
        printf("press 5 number key to quit or 0 to continue : ");
        scanf("%d",&isCon);
    }
}