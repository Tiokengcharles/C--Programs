#include <stdio.h>

int main() 
{
    int i = 7;
    int j = 3 * i-- + 2;
    printf("%d %d\n", i, j);
    return 0;
}
