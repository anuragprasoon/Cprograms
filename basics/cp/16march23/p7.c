#include <stdio.h>
void main(){
int marks;
printf("enter total marks: ");
scanf("%d",&marks);
if(marks<=900&&marks>800){
printf("grade O");
}else if(marks<=800&&marks>700){
printf("grade E");

}else if(marks<=700&&marks>600){
printf("grade A");

}else if(marks<=600&&marks>500){
printf("grade B");

}else if(marks<=500&&marks>400){
printf("grade C");
    
}else if(marks<=400&&marks>300){
printf("grade D"); 
}else{
printf("FAILED");
}

}