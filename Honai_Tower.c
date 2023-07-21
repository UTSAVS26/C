#include <stdio.h>

void towerOfHanoi(int n, char first_rod, char third_rod, char second_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", first_rod, third_rod);
        return;
    }
    towerOfHanoi(n-1, first_rod, second_rod, third_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, first_rod, third_rod);
    towerOfHanoi(n-1, second_rod, third_rod, first_rod);
}

int main()
{
    int n;
    
    printf("Enter number of rods: ");
    scanf("%d",&n);
    
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
