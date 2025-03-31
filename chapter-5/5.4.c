#include <stdio.h>


int strend(char *s, char *t)
{
    char *s_start = s;
    char *t_start = t;

    while (*s) ++s;
    while (*t) ++t;

    int s_len = s - s_start;
    int t_len = t - t_start;

    if (t_len > s_len)
    {
        return 0;
    }

    s -= t_len;

    while (*t_start)
    {
        if (*s++ != *t_start++)
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    char s1[] = "hello world";
    char s2[] = "world";
    printf("%d\n", strend(s1, s2));
    
    return 0;
}