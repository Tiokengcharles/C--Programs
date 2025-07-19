#include <stdio.h>

int main() 
{
    int i = 7, j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j);
    return 0;
}
