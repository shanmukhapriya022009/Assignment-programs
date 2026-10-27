#include <stdio.h>

int main()
{
    int user_id;
    int password;

    printf("Enter user ID: ");
    scanf("%d", &user_id);

    if (user_id != 101)
    {
        printf("User not found");
    }
    else
    {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password == 1234)
        {
            printf("Login successful");
        }
        else
        {
            printf("Incorrect password");
        }
    }

    return 0;
}