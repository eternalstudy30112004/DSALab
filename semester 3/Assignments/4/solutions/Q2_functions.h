typedef struct name
{
    char first[50];
    char middle[50];
    char last[50];
} name;
typedef struct dob
{
    short year;
    short month;
    short day;
} dob;

typedef struct student
{
    int roll;
    name full_name;
    dob DOB;
    int marks[3];

} student;
student students[5];
name getName();

dob getDOB();

void displayInfo(student s);

void getStudentDetails(short i);
