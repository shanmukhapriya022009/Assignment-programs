#include <stdio.h>

int main()
{
    int age;
    int credit_score;
    float income;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter credit score: ");
    scanf("%d", &credit_score);

    printf("Enter monthly income: ");
    scanf("%f", &income);

    if (age >= 21 && age <= 60)
    {
        if (credit_score >= 700 && income >= 25000)
        {
            printf("Loan approved");
        }
        else if (income < 25000)
        {
            printf("Loan rejected: Income below Rs. 25000");
        }
        else
        {
            printf("Loan rejected: Credit score below 700");
        }
    }
    else
    {
        printf("Loan rejected: Age criteria not satisfied");
    }

    return 0;
}