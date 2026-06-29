#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[30];
    int  age;
    float gpa;
} Student;

int writeAppendStudents(const char *fileName,const char *mode){
    FILE *fp = fopen(fileName, mode);
    if (!fp) { perror("fopen"); return 1; }

    Student students[] = {
        {"Alice", 20, 3.9f},
        {"Bob",   22, 3.5f},
        {"Carol", 21, 3.7f}
    };
    fwrite(students, sizeof(Student), 3, fp);
    fclose(fp);

}

int readStudents(const char *fileName){
    
    FILE *fp = fopen(fileName, "rb");
    if (!fp) { perror("fopen"); return 1; }
    Student s;
    
    printf("%-10s %4s %5s\n", "Name", "Age", "GPA");
    printf("%-10s %4s %5s\n", "----", "---", "---");
    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        printf("%-10s %4d %5.2f\n", s.name, s.age, s.gpa);
    }
    fclose(fp);
    return 0;
}

int main(void) {

    const char* fileName = "class.bin"; 
    const char* mode = "wb";
    // const char* mode = "ab";    // to append

    writeAppendStudents(fileName,mode);
    readStudents(fileName);
 
    return 0;
}