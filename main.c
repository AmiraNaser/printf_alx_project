#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;    
   /* unsigned int ui;
    void *addr;*/

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n"); 
    /*addr = (void *)0x7ffe637541f0;*/
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    return (0);
}