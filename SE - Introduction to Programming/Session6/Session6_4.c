#include <stdio.h>
void main()
{
    /*  1) Entry Controlled Loop
    The condition is checked before the loop body runs.
    for and while loops are entry controlled loops.
    If the condition is false at the beginning the loop runs zero times.
    */

    // Example.

    int i = 5;
    while(i>=10)
    {
        printf("This is entry control loop\n");
        i++;
    }

    // the condition is false so then hello is not printed even once.

    /*  2) Exit controlled loop
    The condition is checked after the loop body runs.
    do-while loop is exit controlled loop.
    If the condition is false so the body runs at least once.
    */

    // Example

    int a = 5;
    do
    {
        printf("This is exit control loop\n");
        a++;
    }while(a>=10);

    // the condition is initially false so the hello is printed once.
}
