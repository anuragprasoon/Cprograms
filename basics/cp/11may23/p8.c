#include <stdio.h>
void sor(int* a,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(*(a+i)>*(a+j+1)){
                int temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;

            }
        }
    }
}
int main(){
    int arr[5]={10,12,4,8,};
    int* a;
    a= &arr[0];
    int n;
    n=5;
    sor(a,n);
    
    for(int i=0;i<n;i++){
        printf("%d \n",*(a+i));
    }
    
    return 0;
}