#include <stdio.h>
void main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);

    }
    printf("ALL THE ODD NO. IN ARRAY \n");
     for(int i=0;i<10;i++){
        if(arr[i]%2!=0){
            printf("%d \n", arr[i]);
        }

    }
        printf("ALL THE even NO. IN ARRAY \n");
     for(int i=0;i<10;i++){
             if(arr[i]%2==0){
            printf("%d \n", arr[i]);
        }

    }

}