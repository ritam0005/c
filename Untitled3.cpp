#include <stdio.h>

int main() 
{
    char char1 = 'R';
    char char2 = 'I';
    char char3 = 'T';
    char char4 = 'A';
    char char5 = 'M';

    printf("The reverse of %c%c%c%c%c is %c%c%c%c%c\n",
        char1, char2, char3, char4, char5,
        char5, char4, char3, char2, char1);

    return(0);
}

