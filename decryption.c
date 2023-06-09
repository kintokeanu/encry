#include "decryption.h"
#include <stdio.h>
#include <stdlib.h>

void decrypt(char *message, int key)
{
    int i;
    char ch;

    for (i = 0; message[i] != '\0'; ++i)
    {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - key;

            if (ch < 'a')
            {
                ch = ch + 'z' - 'a' + 1;
            }
            message[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - key;

            if (ch < 'A')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            message[i] = ch;
        }
    }

}