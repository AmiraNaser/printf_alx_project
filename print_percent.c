#include "main.h"
/**
 * 
*/
int print_percent(va_list a __attribute__((unused)),char *buffer, unsigned int i)
{
    handle_buffer(buffer, '%', i);
    return (1);
}