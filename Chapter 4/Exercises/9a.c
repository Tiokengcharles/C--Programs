#include <stdio.h>

int main()
{
    int i = 7, j = 8;
    i += j % 3;
    printf("%d %d\n", i, j);
    return 0;
}
