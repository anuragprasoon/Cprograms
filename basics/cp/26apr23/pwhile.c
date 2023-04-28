/*Q1*/
#include  <stdio.h>
void main(){
    int row, col,n,sum,i,j;
    sum=0;
    printf("Enter the no. of rows and cols: ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    i=0;
    j=0;
    while(i<row){
        while(j<col){
            printf("Enter the element: ");
            scanf("%d",&n);
            arr[i][j]=n;
            j++;
        }
        i++;
    }
}