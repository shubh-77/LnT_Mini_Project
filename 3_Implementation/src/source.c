#include<stdio.h>
#include<math.h>

double calculate_term_deposit(double principal,double rate,double years){ 
    return principal * pow(1 + rate / 100.0,years);
        
}

double calculate_recurring_deposit(double principal,double rate,double years){
    years = years * 12.0;
    return principal * years + principal * (years * (years + 1) / 2.0) * (rate / 100.0) * (1.0 / 12);
    
}

double calculate_ppf(double principal,double rate,double years){
    double tempAmt;
    double interest,totalInterest;
    tempAmt = principal;
    for(int i =0;i < (int)years; i++){
        interest = (tempAmt * rate )/ 100;
        tempAmt += principal + interest;
        totalInterest+= interest;
        }
    return (tempAmt-principal);
}


