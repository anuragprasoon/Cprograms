/*q7*/
#include  <stdio.h>
void main(){
    int row, col,n,sum;
    sum=0;
    int c=0;
    int d=0;
    printf("Enter the no. of rows and cols: ");
    scanf("%d %d",&row,&col);
    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            printf("Enter the element: ");
            scanf("%d",&n);
            arr[i][j]=n;
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            if(j>i){
               if(arr[i][j]==0){
                c+=1;
               }
            }
            if(j<i){
               if(arr[i][j]==0){
                d+=1;
               }
            }


        }
    }
    if((c+d)==(row*col)){
        printf("It is a lower triangular matrix");
    }else{
        printf("It is not a lower triangular matrix");
    }

}