#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int x = n;
    while (x)
    {
        int digit = x % 10;
        sum += digit;
        x /= 10;
    }
    printf("%d", sum);
    return 0;
}
