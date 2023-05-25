#include <stdio.h>
void rev(int* a, int n){
    for(int i=n-1;i>=0;i--){
        printf("%d \n",*(a+i));
    }

}
void main(){
    int arr[5]={1,3,6,4,7};
    int* a;
    printf("reverse order\n");
    a= &arr[0];
    int n=5;
    rev(a,n);

}