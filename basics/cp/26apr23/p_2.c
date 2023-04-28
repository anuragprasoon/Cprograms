/*Q2*/
#include  <stdio.h>
void main(){
    int row, col,n,sum;
    sum=0;
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
                sum+=arr[i][j];
        }
    }
    printf("\n The sum of all elements of the matrix: %d",sum);
}