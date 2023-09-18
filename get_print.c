#include "main.h"
/**
 * 
*/

int (*get_print(const char *s, int index))(va_list, char *, unsigned int)
{
    print arr[] = {
        {"c", print_char},
        {"s", print_str}, 
        {"%", print_percent}
    };

    int i = 0, j = 0, first_input;

    first_input = index;
    while (arr[i].c)
    {
        if (s[index] == arr[i].c[j])
        {
            if (arr[i].c[j + 1] != '\0')
            {
                index++;
                j++;
            }
            else
                break;
        }
        else
        {
            j = 0;
            i++;
            index = first_input;
        }
        
        
    }
    return (arr[i].f);
}