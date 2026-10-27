#include <stdio.h>

int main()
{
    float amount, discount, delivery, final_amount;
    int membership;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    printf("Enter membership status (1 for yes, 0 for no): ");
    scanf("%d", &membership);

    if (amount >= 500)
    {
        if (membership == 1)
        {
            discount = amount * 0.10;
        }
        else
        {
            discount = amount * 0.05;
        }
    }
    else
    {
        discount = 0;
    }

    delivery = (amount >= 500) ? 0 : 50;

    final_amount = amount - discount + delivery;

    printf("Discount = Rs. %.2f\n", discount);
    printf("Delivery charge = Rs. %.2f\n", delivery);
    printf("Final payable amount = Rs. %.2f\n", final_amount);

    return 0;
}