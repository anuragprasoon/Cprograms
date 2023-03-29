/* q7) */
#include <stdio.h>
void main(){
int i=532;
int s=0,r;
for(;i>0;i/=10){
r=i%10;
s+=r;
}
printf("%d",s);
}