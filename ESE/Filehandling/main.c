#include <stdio.h>

int main() {
    FILE *filePointer;
    char buffer[1000];

    filePointer = fopen("data.txt", "r");

    if (filePointer == NULL) {
        printf("File could not be opened.\n");
        return 1;  // Return an error code
    }

    // Read a line from the file
    fgets(buffer, sizeof(buffer), filePointer);

    // Display the read line
    printf("Read from file: %s", buffer);
    fgets(buffer, sizeof(buffer), filePointer);
    printf("Read from file: %s", buffer);

    fclose(filePointer);

    return 0;
}
