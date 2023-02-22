#include <stdio.h>

/**
 * main - entry point
 * return: always 0 (success)
 */
 
int main()
{
    char i;
 
    for(i='A'; i <= 'Z'; i++)
        putchar("%c",i);

    for(i='a'; i <= 'z'; i++)
        printf("%c",i);
     
    return 0;
}
