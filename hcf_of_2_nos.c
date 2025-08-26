#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers to find HCF:\n");
    scanf("%d %d",&a,&b);
    int hcf;
    int i = 1;
    while (i<=a && i<=b)
    {
        if (a%i==0 && b%i==0)
        {
            hcf = i;
        }
        i++;
    }
    printf("The hcf of %d and %d is = %d",a,b,hcf);
    return 0;
}