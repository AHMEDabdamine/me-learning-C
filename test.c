#include <stdio.h>
#include "colors.h"  // include our helper file

int main() {
    red();
    printf("Error: Something went wrong!\n");
    reset();

    green();
    printf("Success: Everything is OK!\n");
    reset();

    yellow();
    printf("Warning: Check your inputs!\n");
    reset();

    return 0;
}
