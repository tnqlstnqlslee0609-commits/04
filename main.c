#include <stdio.h>

int main(void)
{
    int op1, op2;
    int res;

    //scanf
    printf("Input two integers:");
    scanf("%i %i", &op1, &op2);

    //operations
    res = op1 + op2;
    //printf
    printf("%i + %i = %i\n", op1, op2, res);

    //operations
    res = op1 - op2;
    //printf
    printf("%i - %i = %i\n", op1, op2, res);

    //operations
    res = op1 * op2;
    //printf
    printf("%i * %i = %i\n", op1, op2, res);

    //operations
    res = op1 / op2;
    //printf
    printf("%i / %i = %i\n", op1, op2, res);

    //operations
    res = op1 % op2;
    //printf
    printf("%i %% %i = %i\n", op1, op2, res);

}
