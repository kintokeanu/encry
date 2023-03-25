#include "encryption.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * perform caesar cipher
*/

void encrypt(char *message, int key)
{
    int i;
    char ch;

    for (i = 0; message[i] != '\0'; ++i)
    {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z')
        {
            ch += key;

            if (ch > 'z')
            {
                ch = ch = 'z' + 'a' - 1;
            }
            message[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;

            if (ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            message[i]= ch;
        }
    }
}