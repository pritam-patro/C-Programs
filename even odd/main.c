/*program to determine whether a number is even or odd.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbertotest, remainder;
    printf("enter the number to be tested: ");
    scanf("%i", &numbertotest);
    remainder = numbertotest % 2;
    if (remainder = 0)
        printf("the number is even\n");
    else
        printf("the number is odd\n");
    return 0;
}
