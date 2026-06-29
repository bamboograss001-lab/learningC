#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[30];
    int  age;
    float gpa;
} Student;

int writeAppendStudents(const char *fileName, const char *mode) {

    FILE *fp = fopen(fileName, mode);
    if (!fp) { perror("fopen"); return 1; }

    Student students[] = {
        {"Alice", 20, 3.9f},
        {"Bob",   22, 3.5f},
        {"Carol", 21, 3.7f}
    };

    char buffer[100];
    for (int i = 0; i < 3; i++) {
        sprintf(buffer, "%s %d %.2f\n", students[i].name, students[i].age, students[i].gpa);
        fputs(buffer, fp);
    }

    fclose(fp);
    return 0;
}

int readStudents(const char *fileName) {

    FILE *fp = fopen(fileName, "r");
    if (!fp) { perror("fopen"); return 1; }
    
    char buffer[100];
    Student s;
    
    printf("%-10s %4s %5s\n", "Name", "Age", "GPA");
    printf("%-10s %4s %5s\n", "----", "---", "---");
    
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {

        if (sscanf(buffer, "%29s %d %f", s.name, &s.age, &s.gpa) == 3) {
            printf("%-10s %4d %5.2f\n", s.name, s.age, s.gpa);
        }
    }
    
    fclose(fp);
    return 0;
}

int main(void) {
    const char* fileName = "class.txt";
    const char* mode = "w";             // "w" for write, "a" for append

    writeAppendStudents(fileName, mode);
    readStudents(fileName);
 
    return 0;
}