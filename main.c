#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "random.h"

int main() {
    srand(time(NULL));
    printf("%s\n", rand_string_alloc(7));
    return 0;
}