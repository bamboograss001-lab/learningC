#include <stdio.h>
#include <stdbool.h>

int main() {
    bool value = true;
    switch (value)
    {
    case 0:
      printf("%d",0);
      break;
    case 1:
      printf("%d",1);
      break; // Only two condition is supported including default
    }
    return 0;
}