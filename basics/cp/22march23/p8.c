#include <stdio.h>
void main(){
printf("\nAll Odd No.s\n");
for(int i=20;i<=50;i+=1){
(i%2!=0)?printf("%d \n",i):printf("");
}
printf("\nAll Even No.s\n");
for(int i=20;i<=50;i+=1){
(i%2==0)?printf("%d \n",i):printf("");
}
}