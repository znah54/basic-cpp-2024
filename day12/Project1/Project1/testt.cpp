#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i;
    char str[] = {'a','b','c','d','e','f'};
    printf("str : %s", &str);

    i = 0;
    while ((str[i]) != '\n')
        i++;
    i--;  
    while (i > -1) {
        i--;
    }

    return 0;
}
