#include "main.h"
/**
 * 
*/
int print_char(va_list arguments, char *buffer, unsigned int buffSize)
{
    char c;
    c = va_arg(arguments, int);
    handle_buffer(buffer, c, buffSize);
    return (1);
}