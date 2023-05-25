#include <stdio.h>
void fibo(int n,int f,int s,int nxt){
    if(n>0){
    printf("%d \n",f);
    nxt=f+s;
    f=s;
    s=nxt;
    fibo(n-1,f,s,nxt);
    }

}
void main(){
    int x=15;
    fibo(x,0,1,0);
}