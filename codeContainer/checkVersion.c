#include <stdio.h>

int main() {
    #if defined(__STDC_VERSION__)
        long version = __STDC_VERSION__;
        if (version >= 202311L)      printf("You are compiling with: C23\n");
        else if (version >= 201710L) printf("You are compiling with: C17\n");
        else if (version >= 201112L) printf("You are compiling with: C11\n");
        else if (version >= 199901L) printf("You are compiling with: C99\n");
        else                         printf("You are compiling with: C95\n");
    #else
        printf("You are compiling with: C89 / C90\n");
    #endif
    return 0;
}