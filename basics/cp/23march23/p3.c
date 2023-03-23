#include <stdio.h>
void main(){
    int a,c=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(a%i==0){
            c+=1;
        }
    }
    if(c==2){
        printf("it's a prime no.");
    }else{
        printf("it's not a prime no.");
    }
}