#include <stdio.h>
#include <ctype.h>
	
int main() {
    char ch;
    int words = 0, letters = 0, in_word = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        if (!isspace(ch)) {
            letters++;
            if (!in_word) {
                in_word = 1;
                words++;
            }
        } else {
            in_word = 0;
        }
    }

    if (words == 0)
        printf("Average word length: 0.0\n");
    else
        printf("Average word length: %.1f\n", (float)letters / words);

    return 0;
}

