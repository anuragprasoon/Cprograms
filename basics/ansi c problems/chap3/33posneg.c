#include <stdio.h>
void main(){
    int n=3;
    int neg,pos,i;
    float num;
    neg=0;
    pos=0;
    for(i=1;i<=n;i++){
        printf("enter a number: ");
        scanf("%f",&num);
        if(num<0){
            neg++;
        }else if (num>0){
            pos++;
        }else{
            break;
        }
    }
    printf("Number of positive no.s : %d \nNumber of negative no.s : %d",pos,neg);
}

