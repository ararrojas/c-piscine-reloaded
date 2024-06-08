#include <stdlib.h>

int    *ft_range(int min, int max)
{
    int i;
    int diff;
    int *range;

    if (min >= max)
        return (NULL);
    diff = max - min;
    range = malloc(sizeof(int) * diff);
    if (range == NULL)
        return (NULL);
    i = 0;
    while (i < diff)
    {   
        range[i] = min;
        i++;
        min++;
    }
    return (range);
}