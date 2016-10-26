#include<stdio.h>
#include<conio.h>

int main() {

    char operator;
    float n1,n2;

    printf("Enter an operator (+, -, *,/): ");
    scanf("%c",&operator);

    printf("Enter Two Numbers: ");
    scanf("%f %f",&n1,n2);

    switch(operator)
    {
        case '+':
            printf("%.1f + %.1f = %.1f",n1,n2,n1+n2);
            break;

        case '-':
            printf("%.1f - %.1f = %.1f",n1,n2,n1 - n2);
            break;

        case '*':
            printf("%.1f * %.1f = %.1f",n1,n2,n1 * n2);
            break;

        case '/':
            printf("%.1f / %.1f = %.1f",n1,n2,n1 / n2);
            break;

        default:
            printf("Error! operator is not correct");
    }

    getch();
    return 0;
}
