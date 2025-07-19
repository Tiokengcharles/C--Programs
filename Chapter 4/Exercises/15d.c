#include <stdio.h>
int main() {
    int i = 1;
    int j = 2;
    i %= ++j;  
    printf("After i %%= ++j;\n");  
    printf("i = %d, j = %d\n", i, j);  

    return 0;
}
