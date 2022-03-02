#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 0;                    //a variable of type int initialized to 0
    int *pnumber = NULL;               //a pointer that can point to type int

    number = 10;
    printf("number's address: %p\n", &number); //output the address
    printf("number's value: %d\n", number);    // output the value

    pnumber = &number;                  // store the address of number in pnumber

    printf("pnumber's address: %p\n", &pnumber);   //output the address
    printf("pnumber's size: %d bytes\n", sizeof(pnumber));  //output the size
    printf("pnumber's value: %p\n", pnumber);           //output the value
    printf("value pointed to: %d\n", *pnumber);         // value at the address
    return 0;
}
