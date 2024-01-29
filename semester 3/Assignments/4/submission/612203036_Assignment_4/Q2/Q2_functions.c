#include "Q2_functions.h"
name getName()
{
    name n;
    printf("Enter first name : ");
    scanf("%s", (char *)&n.first);
    printf("Enter middle name : ");
    scanf("%s", (char *)&n.middle);
    printf("Enter last name : ");
    scanf("%s", (char *)&n.last);
    return n;
}
dob getDOB()
{
    dob DOB;
    printf("Enter birth day\n");
    printf("Enter day : ");
    scanf("%hd", &DOB.day);
    printf("Enter month : ");
    scanf("%hd", &DOB.month);
    printf("Enter year : ");
    scanf("%hd", &DOB.year);
    return DOB;
}
void displayInfo(student s)
{
    printf("Roll Number : %d\n", s.roll);
    printf("Full Name : %s %s %s\n", s.full_name.first, s.full_name.middle, s.full_name.last);
    printf("Marks\n");
    char sub[][5] = {"Eng\0", "Math\0", "CS\0"};
    float avg = 0;
    for (short j = 0; j < 3; j++)
    {
        printf("\t[%s]: %d\n", sub[j], s.marks[j]);
        avg += s.marks[j];
    }
    avg /= 3;
    printf("Average of 3 subjects : %.2f\n", avg);
}
void getStudentDetails(short i)
{
    printf("Enter details for student %d\n", i + 1);

    printf("Enter Roll number : ");
    scanf("%d", &(students[i].roll));
    students[i].full_name = getName();
    students[i].DOB = getDOB();
    char sub[][5] = {"Eng\0", "Math\0", "CS\0"};
    printf("Enter marks \n");
    for (short j = 0; j < 3; j++)
    {
        printf("Subject[%s] : ", sub[j]);
        scanf("%d", &students[i].marks[j]);
    }
}