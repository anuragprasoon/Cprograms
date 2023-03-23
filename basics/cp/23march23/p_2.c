#include <stdio.h>
void main(){
int a;
scanf("%d",&a);
printf("Factors of %d\n",a);
for(int i=1;i<=a;i++){
    if(a%i==0){
        printf("%d \n",i);
    }
}   
}