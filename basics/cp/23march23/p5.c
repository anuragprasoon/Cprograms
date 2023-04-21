#include <stdio.h>
void main()
{
    int a=0;
    int b=1;
    int c,n;
    printf("enter the no. of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=1){
        printf("%d \n",a);
        c=a;
        a+=b;
        b=c;
    }
}