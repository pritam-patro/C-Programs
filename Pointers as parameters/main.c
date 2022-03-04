#include <stdio.h>
#include <stdlib.h>

void square(int * const x);
int main()
{
    int num = 5;

    square(&num);
    printf("The square of the given number is %d\n", num);

    return 0;
}

void square(int * const x)
{
    *x = (*x) * (*x);
}
