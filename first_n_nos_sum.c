#include <stdio.h>

int sum(int);

int sum(int n)
{
    if ((n - 1) == 0)
    {
        return 1;
    }

    return n + sum(n - 1);
}

int main()
{
    int num;
    printf("Enter no upto which sum is required: \n");
    scanf("%d", &num);

    int natsum = sum(num);
    printf("The sum of %d natural numbers is = %d", num, natsum);
    return 0;
}