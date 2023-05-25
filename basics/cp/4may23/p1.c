#include <stdio.h>
int ncr(int a,int b);
void main(){
    int n,r;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("Enter R: ");
    scanf("%d",&r);
    printf("nCr value if n=%d r=%d : %d",n,r,ncr(n,r));

}
int ncr(int a,int b){
    int facta,factb,factab;
    facta=1;
    factb=1;
    factab=1;
    for(int i=1;i<=a;i++){
        facta*=i;
    }
    for(int i=1;i<=b;i++){
        factb*=i;
    }
    for(int i=1;i<=(a-b);i++){
        factab*=i;
    }
    int j=facta/(factab*factb);
    return j;
}

