#include <stdio.h>

int main() {
    char fname[67];
    char lname[67];
    int rollno;
    int marks;

    printf("Enter your first name: ");
    scanf("%s", fname);

    printf("Enter your last name: ");
    scanf("%s", lname);

    printf("Enter your rollno: ");
    scanf("%d", &rollno);

    printf("Enter your marks: ");
    scanf("%d", &marks);

    printf("First Name: %s\nLast Name:%s\nRollno: %d\nMarks: %d\n", fname, lname, rollno, marks);

    return 0;
}
