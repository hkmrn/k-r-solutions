#include <stdio.h>


void strcat2(char *s, char *t)
{
    while (*s)
        ++s;
    while (*s++ = *t++)
        ;
}

int main(void)
{
    char s1[1000] = "hello ";
    char s2[] = "world";
    strcat2(s1, s2);
    printf("%s\n", s1);
    
    return 0;
}