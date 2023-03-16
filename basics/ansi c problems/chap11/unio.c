#include <stdio.h>
void main(){
    union num{
        int id;
        float roll;
    };
    union num ap;
    ap.id=1;
    ap.roll=22.1;
    printf("\n %d",ap.id);

}