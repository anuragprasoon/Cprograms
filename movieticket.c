#include <stdio.h>
void main(){
    int cinemahall,seattype,persons,totalseat,bill;
    char ch='Y';
    int n=1;
    totalseat=50;
    while(n!=0){
        printf("MOVIE TICKET BOOKING SYSTEM \n");
        printf("Select CinemaHall: \n");
        printf("Press 1 for ABC \n");
        printf("Press 2 for PQR \n");
        printf("Press 3 for XYZ \n");
        scanf("%d",&cinemahall);
        printf("Select Seat Type: \n");
        printf("Press 1 for Normal -> Rs100 per person \n");
        printf("Press 2 for Premium -> Rs300 per person \n");
        scanf("%d",&seattype);
        printf("Enter the no. of tickets you want to book: ");
        scanf("%d",&persons);
        totalseat = totalseat - persons;
        if(totalseat>=0){
            if(cinemahall==1){
                printf("CINEMA HALL : ABC\n");
            }else if(cinemahall==2){
                printf("CINEMA HALL : PQR\n");
            }else{
                printf("CINEMA HALL : XYZ\n");
            }
            if(seattype==1){
                printf("SEAT TYPE: NORMAL \n");
                bill=persons*100;
            }else{
                printf("SEAT TYPE: PREMIUM \n");
                bill=persons*300;
            }
            printf("Amount to pay: %d \n",bill);
            printf("Seats Available: %d \n",totalseat);
        }else{
            printf("Sorry!! Seats not available\n");
        }
        printf("Do you want to continue? Y/N");
        scanf("%c",&ch);
        if(ch=='Y'){
            n=1;
            continue;
        }else{
            n=0;
            break;
        }

    }
}
