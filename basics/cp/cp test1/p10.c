/*Q10) An employee contributes 12% of salary to the Provident fund. Of the
remaining salary, he spends 10% on house rent and 20% on education of
the children.Write a program to input salary and calculate:
i) The amount deducted as provident fund
ii) The amount spent on rent and education*/
#include <stdio.h>
void main(){
    int sal; //salary
    printf("Enter the salary:");
    scanf("%d",&sal);
    float pf=0.12 * sal;
    sal-=pf;
    float rent= 0.1*sal;
    float edu=0.2*sal;
    printf("The amount deducted as provident fund: %f \n",pf);
    printf("The amount spent on rent: %f \n",rent);
    printf("The amount spent on education %f \n",edu);    
}