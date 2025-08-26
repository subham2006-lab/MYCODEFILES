#include <stdio.h>
#include <math.h>

int main()
{
    printf("For the quadratic equation ax^2 + bx + c\n");
    int a, b, c;
    printf("Enter the coefficient of x2:\n");
    scanf("%d", &a);
    printf("Enter the coefficient of x:\n");
    scanf("%d", &b);
    printf("Enter the constant value:\n");
    scanf("%d", &c);

    float d = (b * b) - 4 * a * c;

    if (d >= 0)
    {
        float x1 = (-b + sqrt(d)) / (a * 2.0);
        float x2 = (-b - sqrt(d)) / (a * 2.0);
        printf("The solutions of the quadratic equation are: %.2f and %.2f", x1, x2);
    }

    if (d < 0)
    {
        float realPart = -b / (2.0 * a);
        float imaginaryPart = sqrt(-d) / (2.0 * a);
        printf("The solutions of the quadratic equation are complex: %.2f + %.2fi and %.2f - %.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
