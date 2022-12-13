#include <stdio.h>
void calculateSalary(double [], double[], int[]); 

int main (void){
	int hour[10];
    double pay[10];
    double employeeSalaries[10]={12550,11260,13450,5650,15600,8000,10460,8500,9800,10000};
    int i;

    for(i=0;i<20;i++)
        printf("-");
    

    printf("\nEMPLOYEE ID     SALARY\n\n");

    for(i=0;i<10;i++){
    
        printf("%d %20.2lf\n",i,employeeSalaries[i]);
        }

    for(i=0;i<20;i++)
        printf("-");
    
    printf("\nEnter overtime and overtime pay for each employee receives per hour:");

    
    for (i=0;i<10;i++){
        printf("\nEmployee %d :",i);
        scanf("%d%lf",&hour[i],&pay[i]);
    }
    
    calculateSalary(pay,employeeSalaries,hour);
    
    return 0;
    
}

void calculateSalary(double overtimepay[], double salaries[], int overtime[]){

    int i;
    for(i=0;i<10;i++){
        if(overtime[i]>=8){
            overtimepay[i]=overtimepay[i]*overtime[i];
            salaries[i]+=overtimepay[i];
            printf("The salary of employee %d is: %.2lf \n",i+1,salaries[i]);
        }
        else 
            printf("No extra fee will be paid. The salary of employee %d is: %.2lf\n",i+1,salaries[i]);
    }
}