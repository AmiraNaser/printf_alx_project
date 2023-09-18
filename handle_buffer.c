#include "main.h"
/**
 * 
*/
unsigned int handle_buffer(char *buffer, char c, unsigned int buffSize)
{
    if (buffSize == 1024)
    {
        /* code */
        print_output(buffer, buffSize);
        buffSize = 0;
    }
    buffer[buffSize] = c;
    buffSize++;
    return (buffSize);
    
}