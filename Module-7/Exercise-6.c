#include <stdio.h>

int addition(int a , int b)
{
    return a + b;
}

int subtraction(int a , int b)
{
    return a - b;
}

int multiplication(int a , int b)
{
    return a * b;
}

int division(int a , int b)
{
    return a/b;
}

int main()
{
    printf("Selection an operation: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    int choice;

    printf("Enter your choice: ");
    scanf("%d" , &choice);
    getchar();

    printf("%c" , '\n');

    int operand1 , operand2;

    printf("Enter the operands: \n");
    scanf("%d%d" , &operand1 , &operand2);
    getchar();

    if(choice == 1)
    {
        int (*operation) (int , int) = addition;
        int sum = operation(operand1 , operand2);
        printf("The sum of %d and %d is: %d\n" , operand1 , operand2 , sum);
    }

    else if(choice == 2)
    {
        int (*operation) (int , int) = subtraction;
        int difference = operation(operand1 , operand2);
        printf("The difference of %d and %d is: %d\n" , operand1 , operand2 , difference);
    }

    else if(choice == 3)
    {
        int (*operation) (int , int) = multiplication;
        int product = operation(operand1 , operand2);
        printf("The product of %d and %d is: %d\n" , operand1 , operand2 , product);
    }

    else if(choice == 4)
    {
        int (*operation) (int , int) = division;
        int quotient = operation(operand1 , operand2);
        printf("The quotient of %d and %d is: %d\n" , operand1 , operand2 , quotient);
    }
    else
    {
        printf("Invalid choice !\n");
    }

    return 0;
}