#include<stdio.h>
int main() {
int arr[10];
printf("Enter the numbers of array: ");
for(int i=0;i<10;i++){
scanf("%d",&arr[i]);
}
for(int i=0,j=9;i<j;i++,j--){
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}
for(int i=0;i<10;i++){
    printf("%d ",arr[i]);
}
return 0;

}