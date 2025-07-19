#include <stdio.h>

int main() 
{
    int i = 10, j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d\n", i, j);
    return 0;
}
