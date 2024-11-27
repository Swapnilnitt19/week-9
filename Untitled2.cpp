#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("file.txt", "r");
    while ((ch = fgetc(file)) != EOF) {
        printf("Character: %c, ASCII value: %d\n", ch, (int)ch);
    }

    fclose(file);

    return 0;
}

