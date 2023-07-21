#include <stdio.h>

int recurSum(int n)
{
    if (n <= 1)
        return n;
    return n + recurSum(n - 1);
}

int main()
{
    int n;
    
    printf("Enter Range of number you want to Add : From 0 to ");
    scanf("%d",&n);
    
    printf("Sum of all Numbers in the range 0 to %d is: %d",n ,recurSum(n));
    return 0;
}
