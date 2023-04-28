/*q3*/
#include  <stdio.h>
void main(){
    int row, col,n,sum;
    sum=0;
    int c=0;
    printf("Enter the no. of rows and cols: ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int trans[row][col];
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            printf("Enter the element: ");
            scanf("%d",&n);
            arr[i][j]=n;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
                trans[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
                if(arr[i][j]!=trans[i][j]){
                    c+=1;

                }
        }
    }
    if(c==0){
        printf("It is a symmetric matrix");
    }else{
        printf("It is not a symmetric matrix");
    }
    
}