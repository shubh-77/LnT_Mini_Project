#include "inc\header.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>



/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int maturity_calculator_operation = 0;

double principal = 0;
double rate = 0;
double years = 0;
// double maturity_amount = 0;


double *pointer_to_principal = &principal;
double *pointer_to_rate = &rate;
double *pointer_to_years = &years;
// double *

/* Display the menu of operations supported */
enum operations{ TD = 1, RD, PPF, EXIT };

/* Display the menu of operations supported */
void maturity_calculator_menu(void);

/* Verifies the requested operations validity */
int valid_operation(int operation);

/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Welcome to the Maturity Calculator****\n");
    while(1)
    {
        maturity_calculator_menu();
    }
}

void maturity_calculator_menu(void)
{
    printf("\nSupported Maturity Calculator Operations\n");
    printf("\n1. TERM DEPOSIT"); 
    printf("\n2. RECURRING DEPOSIT");
    printf("\n3. PUBLIC PROVIDENT FUND");
    printf("\n4. Exit");
    printf("\n\tEnter your choice\n");
   
    fpurge(stdin);
    scanf("%d", &maturity_calculator_operation);

    if(EXIT == maturity_calculator_operation)
    {
        printf("\nThank you! Exiting the Application\n");
        exit(0);
    }
    if(INVALID != valid_operation(maturity_calculator_operation))
    {
        switch(maturity_calculator_operation)
        {
            case TD: printf("\nEnter principal");
                     scanf("%lf",&principal);
                     printf("\nEnter rate");
                     scanf("%lf",&rate);
                     printf("\nEnter time in years");
                     scanf("%lf",&years);
                     printf("\nPress Enter to continue\n");
                     printf("%lf",calculate_term_deposit(*pointer_to_principal,*pointer_to_rate,*pointer_to_years));
                     __fpurge();
                     getchar();
                     break;
                
            case RD: printf("\nEnter principal");
                     scanf("%lf",&principal);
                     printf("\nEnter rate");
                     scanf("%lf",&rate);
                     printf("\nEnter time in years");
                     scanf("%lf",&years);
                     printf("\nPress Enter to continue\n");
                     printf("%lf",calculate_recurring_deposit(*pointer_to_principal,*pointer_to_rate,*pointer_to_years));
                     __fpurge();
                     getchar();
                     break;

            case PPF:printf("\nEnter principal");
                     scanf("%lf",&principal);
                    //  printf("\nEnter rate");
                    //  scanf("%lf",&rate);
                     rate = 7.1;
                     printf("\nEnter time in years");
                     scanf("%lf",&years);
                     printf("\nPress Enter to continue\n");
                     printf("%lf",calculate_ppf(*pointer_to_principal,*pointer_to_rate,*pointer_to_years));
                     __fpurge();
                     getchar();
                     break;
            
            case 4:exit(0);
                    break;

            default:printf("\n\t---It should never come here---\n");
                    break;
        }
    }
    else
    {
        printf("\n\t---Choice is not implemented yet---\nEnter to continue\n");
        fpurge(stdin);
        getchar();
        return;  
    }
}
int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((TD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}



