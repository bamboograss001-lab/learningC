#include <stdio.h>
#include <stddef.h>
#include <string.h>

typedef struct 
{
    const char* str_ptr;
    size_t length;
} C_StringView;

void print_string_view(C_StringView view)
{
    printf("String View Content: ");
    printf("%.*s\n", (int)view.length, view.str_ptr); 
    printf("Tracked Length: %zu bytes\n\n", view.length);
}

int main(void) 
{
    const char* full_text = "Standard Integer Rules";

    C_StringView view;
    view.str_ptr = full_text + 9; 
    view.length = 7; 

    print_string_view(view);

    return 0;
}