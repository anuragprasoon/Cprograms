#include <stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    if(a<10 || a==10){
        printf("\nA is less than 10 or equal to 10.");
   }else if( a>10 && a<20){
    printf("A lies between 10 and 20.");
   }else if(a!=0 && a<0){
    ("A is a negative number.");
   }else if(a<20){
    printf("A is greater than 20.");
   }else{
    printf("A is invalid input.");
   };
}