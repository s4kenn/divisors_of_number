#include <stdio.h>
void findDivisor(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("%d ", i);
        }
        else
        {
            continue;
        }
    }
}
int main()
{
    int number;
    printf("Enter the number ");
    scanf("%d", &number);
    findDivisor(number);
    printf("are the Factors of %d", number);
    return 0;
}
