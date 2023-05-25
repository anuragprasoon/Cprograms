#include<stdio.h>
int sum(int n);
void main(){
int a;
printf("Enter a number: ");
scanf("%d",&a);
printf("The Sum from 0 to %d is %d",a,sum(a));

}
int sum(int x){
    if( x!=0){
        return x + sum(x-1);
    }
else{
    return x;
}
}