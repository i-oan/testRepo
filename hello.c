//hello world program
#include <stdio.h>

char *names[10] = {
    "Alice",
    "Bob",
    "Carol",
    "Dave",
    "Eve",
    "Frank",
    "Grace",
    "Heidi",
    "Ivan",
    "Judy",
};

int main()
{
    char *name = names[rand() % 10];
    printf("Hello %s!\n", name);
    return 0;
}





