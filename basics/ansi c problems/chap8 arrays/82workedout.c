#include <stdio.h>
void main(){
    int marks[5]={27,34,31,43,18};
    int group[5]={0,0,0,0,0};
    int i,j;
    for (i=0;i<5;i++){
        if(marks[i]<=9 && marks[i]>=0){
            group[0]++;
        }else if(marks[i]<=19 && marks[i]>=10){
            group[1]++;

        }else if(marks[i]<=29 && marks[i]>=20){
            group[2]++;

        }else if(marks[i]<=39 && marks[i]>=30){
            group[3]++;

        }else if(marks[i]<=50 && marks[i]>=40){
            group[4]++;

        }else{
            continue;
        }
    }
    for(j=0;j<5;j++){
        printf("\ngroup %d : %d",j+1,group[j]);
    }
}