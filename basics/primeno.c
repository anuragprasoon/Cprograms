#include <stdio.h> 
void main(){
    int i,j,b;
    b=0;
    printf("List of prime numbers upto 50 : \n");
    for(i=1;i<=50;i++){
        for(j=1;j<=50;j++){
            if (i%j==0){
                ++b ;
                /*printf("%d ",j);*/
            }
        }
        /*printf("%d \n",b);*/
        if(b<=2){
            printf("%d \n",i);
        }
        b=0;

    }
}