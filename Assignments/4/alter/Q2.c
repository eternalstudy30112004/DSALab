#include <stdio.h>

typedef struct Student
{
    int rollNumber;
    char firstName[50];
    char middleName[50];
    char lastName[50];
    int birthYear;
    int birthMonth;
    int birthDay;
    int marks[3];
} Student;

int main()
{
    Student students[5];
    char subjects[][20] = {"English", "Math", "Computer Science"};

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &(students[i].rollNumber));

        printf("First Name: ");
        scanf("%s", students[i].firstName);

        printf("Middle Name: ");
        scanf("%s", students[i].middleName);

        printf("Last Name: ");
        scanf("%s", students[i].lastName);

        printf("Birth Year: ");
        scanf("%d", &(students[i].birthYear));

        printf("Birth Month: ");
        scanf("%d", &(students[i].birthMonth));

        printf("Birth Day: ");
        scanf("%d", &(students[i].birthDay));

        printf("Enter Marks:\n");
        for (int j = 0; j < 3; j++)
        {
            printf("Subject [%s]: ", subjects[j]);
            scanf("%d", &students[i].marks[j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Student %d Details:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Full Name: %s %s %s\n", students[i].firstName, students[i].middleName, students[i].lastName);

        printf("Subject Marks:\n");
        float avg = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("%s: %d\n", subjects[j], students[i].marks[j]);
            avg += students[i].marks[j];
        }
        avg /= 3;
        printf("Average of 3 subjects: %.2f\n", avg);
        printf("\n");
    }

    return 0;
}
