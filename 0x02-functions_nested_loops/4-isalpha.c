#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: The character to be checked
 * Return: 1 for the lowercase character or 0 for anything else
 */
int _isalpha(int c)
{       
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {       
        
        return(1);
        }       
        return(0);
}

