#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Enter value of x: \n");
    int y = get_int("Enter value of y: \n");
    int z = x + y;
    printf("The sum of x and y is : %i \n", z ); // %i is the placeholder for a integer and x+y defines it
}
