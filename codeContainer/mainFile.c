#include <stdio.h>

/* Forward Declarations (tells compiler these variables live elsewhere) */
extern int c;          
extern const int d;    
int add(int a, int b); 

void print(int value) { 
    printf("%d\n", value);
}

int main(void) {
    print(add(c, d)); 
    return 0;
}
