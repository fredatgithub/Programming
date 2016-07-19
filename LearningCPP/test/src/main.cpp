#include <cstdio>
#include "../include/main.h"


int main() {
    
    printf("Adding %d\n",       test::add(256, 631));
    printf("Subtracting %d\n",  test::subtract(63121, 69797));
    printf("Multiplying %d\n",  test::multiply(5, 364));
    printf("Dividing %d\n",     test::divide(21, 7));

    return 0;
}
