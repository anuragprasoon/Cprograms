#include <stdio.h>
void sumEven(int arr[],int,int);
int main(){
    int n,sum=0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int num[n];
    for (int i=0;i<n;i++)
    scanf("%d",&num[i]);
    sumEven(num,n-1,sum);
    return 0;
}
void sumEven(int arr[],int n,int sum){
    if(n>=0){
        if(arr[n]%2==0)
        sum+=arr[n];
        sumEven(arr,n-1,sum);
    }
    else
    printf("Sum of all even numbers : %d",sum);
}