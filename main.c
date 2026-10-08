#include <stdio.h>

int factorial (int a)
{
    int res = 1;

    for (int i = 1; i <= a; i++)
        res = res * i;

    return res;
}

int combination (int n, int r)
{ 
    int up, down;

    up = factorial(n);
    down = factorial(n - r) * factorial(r);

    return (up / down);
}

int main(void)
{
    int result;
    int n, r;

    printf("input n: ");
    scanf("%i", &n);

    printf("input r: ");
    scanf("%i", &r);

    result = combination(n, r);

    printf("The combination result is %i\n", result);

    return 0;
}