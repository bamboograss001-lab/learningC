#include <stdio.h>

int main (){
    const char* fileName = "oldfile.txt";
    const char* newFileName = "newfile.txt";

    FILE *createFile = fopen(fileName, "w");
    fclose(createFile);

    if (rename(fileName, newFileName) != 0) { // in windows u can't overwrite a file 
        perror("rename failed");
        return 1;
    }
    if(remove(newFileName) == 0) printf("done");
    return 0;
}