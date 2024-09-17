#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    ADD = 1,
    DISPLAY,
    SEARCH_BY_ROLL,
    SEARCH_BY_NAME,
    MODIFY,
    REMOVE,
    EXIT
} MenuOption;


typedef struct {
    int rollNo;
    char name[50];
    int age;
    float marks;
} Student;

void addStudent();
void displayStudents();
void searchByRollNo();
void searchByName();
void modifyStudent();
void deleteStudent();

int main() {
    int choice;

    do {
        printf("\n*** Student Database Menu ***\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search by Roll No\n");
        printf("4. Search by Name\n");
        printf("5. Modify Student\n");
        printf("6. Remove Student\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case ADD:
                addStudent();
                break;
            case DISPLAY:
                displayStudents();
                break;
            case SEARCH_BY_ROLL:
                searchByRollNo();
                break;
            case SEARCH_BY_NAME:
                searchByName();
                break;
            case MODIFY:
                modifyStudent();
                break;
            case REMOVE:
                deleteStudent();
                break;
            case EXIT:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != EXIT);

    return 0;
}

void addStudent() {
    Student student;
    FILE *file = fopen("students.dat", "ab");

    if (file == NULL) {
        perror("Unable to open file");
        return;
    }

    printf("Enter Roll No: ");
    scanf("%d", &student.rollNo);
    printf("Enter Name: ");
    getchar();
    fgets(student.name, 50, stdin);
    strtok(student.name, "\n"); 
    printf("Enter Age: ");
    scanf("%d", &student.age);
    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    fwrite(&student, sizeof(Student), 1, file);
    fclose(file);
    printf("Student record added successfully.\n");
}


void displayStudents() {
    Student student;
    FILE *file = fopen("students.dat", "rb");

    if (file == NULL) {
        perror("Unable to open file");
        return;
    }

    printf("\nDisplaying all students:\n");
    while (fread(&student, sizeof(Student), 1, file)) {
        printf("Roll No: %d\n", student.rollNo);
        printf("Name: %s\n", student.name);
        printf("Age: %d\n", student.age);
        printf("Marks: %.2f\n\n", student.marks);
    }

    fclose(file);
}

void searchByRollNo()
{
    int rollNo;
    Student student;
    FILE *file = fopen("students.dat", "rb");

    if (file == NULL) {
        perror("Unable to open file");
        return;
    }

    printf("Enter Roll No to search: ");
    scanf("%d", &rollNo);

    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.rollNo == rollNo) {
            printf("\nRecord found:\n");
            printf("Roll No: %d\n", student.rollNo);
            printf("Name: %s\n", student.name);
            printf("Age: %d\n", student.age);
            printf("Marks: %.2f\n", student.marks);
            fclose(file);
            return;
        }
    }

    printf("No record found with Roll No %d.\n", rollNo);
    fclose(file);
}


void searchByName() {
    char name[50];
    Student student;
    FILE *file = fopen("students.dat", "rb");

    if (file == NULL) {
        perror("Unable to open file");
        return;
    }

    printf("Enter Name to search: ");
    getchar(); 
    fgets(name, 50, stdin);
    strtok(name, "\n"); 

    while (fread(&student, sizeof(Student), 1, file)) {
        if (strcmp(student.name, name) == 0) {
            printf("\nRecord found:\n");
            printf("Roll No: %d\n", student.rollNo);
            printf("Name: %s\n", student.name);
            printf("Age: %d\n", student.age);
            printf("Marks: %.2f\n", student.marks);
            fclose(file);
            return;
        }
    }

    printf("No record found with Name %s.\n", name);
    fclose(file);
}

void modifyStudent() {
    int rollNo;
    Student student;
    FILE *file = fopen("students.dat", "r+b");

    if (file == NULL) {
        perror("Unable to open file");
        return;
    }

    printf("Enter Roll No to modify: ");
    scanf("%d", &rollNo);

    while (fread(&student, sizeof(Student), 1, file))
    {
        if (student.rollNo == rollNo) {
            printf("Current details:\n");
            printf("Roll No: %d\n", student.rollNo);
            printf("Name: %s\n", student.name);
            printf("Age: %d\n", student.age);
            printf("Marks: %.2f\n", student.marks);

            printf("Enter new details:\n");
            printf("Enter Name: ");
            getchar(); 
            fgets(student.name, 50, stdin);
            strtok(student.name, "\n");
            printf("Enter Age: ");
            scanf("%d", &student.age);
            printf("Enter Marks: ");
            scanf("%f", &student.marks);

            fseek(file, -sizeof(Student), SEEK_CUR);
            fwrite(&student, sizeof(Student), 1, file);
            printf("Record modified successfully.\n");
            fclose(file);
            return;
        }
    }

    printf("No record found with Roll No %d.\n", rollNo);
    fclose(file);
}

 void deleteStudent()
{
    int rollNo;
    Student student;
    FILE *file = fopen("students.dat", "rb");
    FILE *tempFile = fopen("temp.dat", "wb");

    if (file == NULL || tempFile == NULL) {
        perror("Unable to open file");
        return;
    }

    printf("Enter Roll No to delete: ");
    scanf("%d", &rollNo);

    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.rollNo != rollNo) {
            fwrite(&student, sizeof(Student), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);
    remove("students.dat");
    rename("temp.dat", "students.dat");
}
    printf("Record removed successfully.\n");
}

