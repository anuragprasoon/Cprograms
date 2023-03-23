#include <stdio.h>
void main(){
int a,s=0,f;
scanf("%d",&a);
printf("Factors of %d\n",a);
for(int i=1;i<=a;i++){
    if(a%i==0){
        f=1;
        for(int j=1;j<=i;j++){
            f=f*j;
        }
        s+=f;
    }
}   
printf("factor sum: %d",s);
}