#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height, base, area, length, perimeter;
    printf("enter the height:");
    scanf("%f", &height);
    printf("enter the base:");
    scanf("%f", &base);
    //area of rectangle
    area = (height*base);
    printf("area of rectangle is : %f", area);
    printf("\nenter the length:");
    scanf("%f", &length);
    //area of square
    area = (length * length);
    printf("area of square is: %f cm^2", area);
    //perimeter of square
    perimeter = (4 * length);
    printf("\nperimeter of square is: %f cm", perimeter);
    return 0;
}
