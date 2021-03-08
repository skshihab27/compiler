#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXINPUT 100
int main()
{
    char input[MAXINPUT] = "";
    int length,i;
    printf("Enter your input -");
    scanf ("%s", input);
    length = strlen (input);
    for (i=0;i<length; i++)
        if (!isdigit(input[i]))
        {
            printf ("Entered input is a string\n");
            exit(1);
        }
    printf ("Given input is a number\n");
}
