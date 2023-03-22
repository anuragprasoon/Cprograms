#include <stdio.h>
void main(){
int n;
scanf("%d",&n);
int d,s;
s=0;
while(n!=0){
    d=n%10;
    s+=d;
    n/=10;
}
printf("%d",s);
}