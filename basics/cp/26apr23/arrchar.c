#include  <stdio.h>
void main(){
    int row, col;
    char n;
    int c=0;
    printf("Enter the no. of rows and cols: ");
    scanf("%d %d",&row,&col);
    char arr[row][col];
    char trans[row][col];
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            printf("Enter the element: ");
            scanf("%c",&n);
            arr[i][j]=n;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
                trans[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<row;i++){
        printf("[");
        for(int j=0; j<col;j++){
                printf("%c ",trans[i][j]);
        }
        printf("] \n ");
    }
}