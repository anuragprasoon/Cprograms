#include <stdio.h>
int count(int x){
    static int c=0;
    if(x>0){
        c++;
        count(x/10);
    }
    else{
     return c;
    }
}
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Count: %d",count(a));
}