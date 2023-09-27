#include <stdio.h>

int main()
{
    // Open a file for writing
    FILE *file = fopen("output.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // Data to be written to the file
    char name[] = "John";
    int age = 30;

    // Use fprintf to write formatted data to the file
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);

    // Close the file when done
    fclose(file);

    return 0;
}
