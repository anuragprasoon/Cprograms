#include<stdio.h>
int main(){
    int arr[20],i,x,y,r;

    printf("Enter a decimal integer : \n");

    scanf("%d",&x);

    y=x;
    for (i=0;x>0;i++){
        r=x%2;
        arr[i]=r;
        x=x/2;
    }
    printf("The binary conversion of %d is \t",y);
    for (i--;i>=0;i--){
        printf("%d",arr[i]);

    }
    return 0;
}