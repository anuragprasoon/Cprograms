#include <stdio.h>
void palline(int a);
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    palline(n);

}
void palline(int a){
    int r=0;
    int x=a;
    int s=0;
    while(a!=0){
        r=a%10;
        s=(s*10)+r;
        a/=10;
    }
    if(x==s){
        printf("it's a pallindrome number.");
    }else{
        printf("it's not a pallindrome number.");

    }

}

