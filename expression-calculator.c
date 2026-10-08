#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float a, b, ans;
    
    printf("*****************************\n");
    printf("     MY CALCULATOR\n");
    printf("*****************************\n");

    while(1)
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Power");
        printf("\n6. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 6)
        {
            printf("\nCalculator closed.\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &a);

        printf("Enter second number: ");
        scanf("%f", &b);

        if(choice == 1)
        {
            ans = a + b;
            printf("Answer = %.2f", ans);
        }
        else if(choice == 2)
        {
            ans = a - b;
            printf("Answer = %.2f", ans);
        }
        else if(choice == 3)
        {
            ans = a * b;
            printf("Answer = %.2f", ans);
        }
        else if(choice == 4)
        {
            if(b == 0)
                printf("Cannot divide by zero.");
            else
            {
                ans = a / b;
                printf("Answer = %.2f", ans);
            }
        }
        else if(choice == 5)
        {
            ans = pow(a, b);
            printf("Answer = %.2f", ans);
        }
        else
        {
            printf("Wrong choice!");
        }

        printf("\n");
    }

    return 0;
}
