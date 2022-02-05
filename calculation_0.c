#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
float absoluteValue(float x);
float squareRoot(float x);

int main()
{
    int result = 0;

    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float absoluteValueResult = 0.0;

    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %d\n", result);
   
    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %d\n", result);
   
    result = gcd(83, 240);
    printf("The gcd of 83 and 240 is %d\n\n\n\n", result);

    /* testing absoluteValue function */
    absoluteValueResult = absoluteValue (f1);
    printf ("result = %.2f\n", absoluteValueResult);
    printf ("f1 = %.2f\n", f1);

    absoluteValueResult = absoluteValue (f2) + absoluteValue (f3);
    printf ("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue ( (float) i1);
    printf ("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue (i1);
    printf ("result = %.2f\n", absoluteValueResult);

    printf ("%.2f\n\n\n", absoluteValue (-6.0) / 4);

    /*testing square root*/
    printf("%.2f\n", squareRoot(-3.0));
    printf("%.2f\n", squareRoot(16.0));
    printf("%.2f\n", squareRoot(25.0));
    printf("%.2f\n", squareRoot(9.0));
    printf("%.2f\n", squareRoot(225.0));
    
    return 0;
}

int gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = a%b;
        a=b;
        b=temp;
    }
    return a;

}
float absoluteValue(float x)
{
    if (x<0)
    x = -x;

    return x;
}
float squareRoot(float x)
{
    const float epsilon = .00001;
    float guess = 1.0;
    float returnValue = 0.0;

    if (x<0)
    {
        printf ("Negative argument to squareRoot.\n");
        returnValue = -1.0;
    }
    else
    {
        while (absoluteValue (guess*guess-x) >= epsilon)
            guess = (x/guess+guess) / 2.0;

        returnValue = guess;    
    }

    return returnValue;

}
