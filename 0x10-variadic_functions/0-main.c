#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(3, 6, 10, 5);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);

    print_numbers(", ", 4, 0, 98, -1024, 404, 850);    
    
    print_strings(", ", 2, "Jay", "Django");

    print_all("ceis", 'B', 3, "stSchool");
    
    return (0);
}
