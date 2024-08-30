#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "random.h"

void rand_string(char *s, size_t length) {
    for (size_t i = 0; i < length; i++) { 
        s[i] = randchar();
    }
}
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

int main() {
    srand(time(NULL));
    printf("%s\n", rand_string_alloc(7));
    return 0;
}