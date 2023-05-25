#include <stdio.h>

int main(){
    int arr[5]={10,12,4,8,};
    int* a;
    a= &arr[0];
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(*(a+j)>*(a+j+1)){
                int temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;

            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d \n",*(a+i));
    }
    
    return 0;
}