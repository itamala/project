#include <stdio.h>
#include <string.h>

struct Student
{
    int reg_number;
    char first_name[50];
    char last_name[50];
    char course1[50];
    char course2[50];
};

int main()
{
    struct Student student;
    int choice, edit_choice;

    printf("Enter student information:\n");
    printf("Registration Number: ");
    scanf("%d", &student.reg_number);

    printf("First Name: ");
    scanf(" %[^\n]", student.first_name);
    printf("Last Name: ");
    scanf(" %[^\n]", student.last_name);

    printf("Course 1: ");
    scanf(" %[^\n]", student.course1);

    printf("Course 2: ");
    scanf(" %[^\n]", student.course2);

    printf("\nStudent Information:\n");
    printf("Registration Number: %d\n", student.reg_number);
    printf("First Name: %s\n", student.first_name);
    printf("Last Name: %s\n", student.last_name);
    printf("Course 1: %s\n", student.course1);
    printf("Course 2: %s\n", student.course2);

    printf("\nDo you want to edit information? (1 - Yes, 0 - No): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nWhat do you want to edit?\n");
        printf("1. Registration Number\n");
        printf("2. First Name\n");
        printf("3. Last Name\n");
        printf("4. Course 1\n");
        printf("5. Course 2\n");
        printf("Enter your choice: ");
        scanf("%d", &edit_choice);

        switch (edit_choice)
        {
        case 1:
            printf("Enter new registration number: ");
            scanf("%d", &student.reg_number);
            break;
        case 2:
            printf("Enter new first name: ");
            scanf(" %[^\n]", student.first_name);
            break;
        case 3:
            printf("Enter new last name: ");
            scanf(" %[^\n]", student.last_name);
            break;
        case 4:
            printf("Enter new course 1: ");
            scanf(" %[^\n]", student.course1);
            break;
        case 5:
            printf("Enter new course 2: ");
            scanf(" %[^\n]", student.course2);
            break;
        default:
            printf("Invalid choice for editing.\n");
        }

        printf("\nEdited Student Information:\n");
        printf("Registration Number: %d\n", student.reg_number);
        printf("First Name: %s\n", student.first_name);
        printf("Last Name: %s\n", student.last_name);
        printf("Course 1: %s\n", student.course1);
        printf("Course 2: %s\n", student.course2);
    }

    return 0;
}
