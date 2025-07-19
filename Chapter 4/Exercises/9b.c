#include <stdio.h>

int main() 
{
    int i = 5, j = 2, k = 1;
    i += j += k;
    printf("%d %d %d\n", i, j, k);
    return 0;
}
