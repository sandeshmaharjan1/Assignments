#include<stdio.h>

int main(){
    int num1, num2;
    int choice;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");


    printf("Enter the choice\n");
    scanf("%d", &choice);

    printf("Enter two numbers\n");
    scanf("%d%d", &num1, &num2);

    switch (choice)
    {
        case 1:
        printf("Add: %d", num1+num2);
        break;

        case 2:
        printf("Subtract: %d", num1-num2);
        break;

        case 3:
        printf("Product: %d", num1*num2);
        break;

        case 4:
        if (num2 !=0)
        {
            printf("Divide: %d", num1/num2);
        }
        else{
            printf("0 cannot be divided");
        }
        break;
        
    
    default:
    printf("Invalid choice");
        break;
    }

    return 0;
}