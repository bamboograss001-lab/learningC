#include <stdio.h>

int main(void) {
    char var1[] = "Hello";
    char var2[] = "World";

    const char* str1 = var1; // // Locked onto var1's value

    str1 = var2;             //  LEGAL: The pointer can be redirected.
    //str[0] = 'M';            ILLEGAL: The characters are read-only!
        
    char* const str2 = var1; // Locked onto var1's address

    str2[0] = 'M'; //  LEGAL: The data inside var1 is changed to "Mello"
    //str = var1;// ILLEGAL: You cannot change the address stored in str.
    
    // Double const: Locks the pointer and the data
    const char* const str3 = var1; 

    // ❌ ILLEGAL: Compiler error! (Cannot change the text data)
    // str[0] = 'M'; 

    // ❌ ILLEGAL: Compiler error! (Cannot change the memory address)
    // str = var2;   
printf("%s %s %s",str1, str2, str3);
    return 0;
}