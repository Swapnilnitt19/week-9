#include <stdio.h>

int main() {
    FILE *local, *destination;
    char ch;
    local = fopen("local.txt", "r");
    if (local == NULL) {
        printf("Source file could not be opened.\n");
        return 1;
    }
    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Destination file could not be opened.\n");
        fclose(local);
        return 1;
    }
    while ((ch = fgetc(local)) != EOF) {
        fputc(ch, destination);
    }
    fclose(local);
    fclose(destination);

    printf("copied\n");
    return 0;
}

