#include <stdio.h>

int main() 
{
    int i = 5;
    int j = ++i * 3 - 2;
    printf("%d %d\n", i, j);
    return 0;
}
