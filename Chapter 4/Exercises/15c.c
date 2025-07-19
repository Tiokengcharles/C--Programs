#include <stdio.h>
int main() {
    int i = 1;
    int j = 2;
    i *= j / i;  
    printf("After i *= j / i;\n");
    printf("i = %d, j = %d\n", i, j);  

    return 0;
}

