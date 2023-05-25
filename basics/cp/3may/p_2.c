#include<stdio.h>
int fact(int n);
void main(){
int a;
printf("Enter a number: ");
scanf("%d",&a);
printf("The factorial of %d is %d",a,fact(a));

}
int fact(int x){
if(x==1){
  return 1;
}
if( x!=0){
        return x * fact(x-1);
    }
else{
    return x;
}
}