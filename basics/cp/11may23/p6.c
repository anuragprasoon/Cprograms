#include <stdio.h>
int sum(int* a, int n){
    int c=0;
    for(int i=0;i<n;i++){
        c+=*(a+i);
    }
    return c;

}

int main(){
    int arr[5]={1,2,3,4,5};
    int* a;
    a= &arr[0];
    int n=5;
    int v=sum(a,n);
    printf("Sum of all elements in an array : %d",v);
    return 0;
}