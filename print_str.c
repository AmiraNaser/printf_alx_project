#include "main.h"
/**
 * 
*/
int print_str(va_list arguments, char *buffer, unsigned int buffSize)
{
    char *str;
    unsigned int i;
    char arr[] = "(null)";
    str = va_arg(arguments, char *);
    if (str == NULL)
    {
        for (i = 0; arr[i]; i++)
        {
            /* code */
            buffSize = handle_buffer(buffer, arr[i], buffSize);
        }
        return (2);
        
    }
    for (i = 0; str[i]; i++)
    {
        /* code */
        buffSize = handle_buffer(buffer, str[i], buffSize);
    }
    
    return (i);
}