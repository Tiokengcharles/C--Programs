#include <stdio.h>

int main(void) {
    int i;

    for (i = 1; i <= 1000; i++) {
        printf("%10d%10d\n", i, i * i);
        
        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            while (getchar() != '\n'); // Wait for Enter key
        }
    }

    return 0;
}

