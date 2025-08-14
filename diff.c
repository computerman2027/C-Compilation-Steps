#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);

    int s = a - b;

    printf("Diff = %d", s);
    return 0;
}