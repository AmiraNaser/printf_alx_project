#include "main.h"
/**
 * 
*/
/*int main(void) {
    
}*/
int print_output(char *buffer, unsigned int buffSize)
{
    return (write(1, buffer, buffSize));
}