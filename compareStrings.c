//program that takes two strings as input and compares them

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* str1 = {"kiosk, , , , , , , , , 1, , , , , , , , , , , \
basic, , , , , , , , , 1, , , , , , , , , , , \
rawsOp, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
rawsSr, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
rawsLead, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
shipOp, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
shipSr, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
shipLead, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
cycle, 1, 1, 1, 1, 1, 1, 1, 1, , 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1\
qa, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
uwc, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
inventory, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
induct, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
pickPackSr, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
pickPackLead, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
maintenance, , , , , , , , , 1, , , , , , , , , , , \
operations, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
remote, , , 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, , 1, , , \
support, , , 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, , 1, , , \
account, , , 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, , 1, , , "};

    char* str2 = {"kiosk, , , , , , , , , 1, , , , , , , , , , , \
basic, , , , , , , , , 1, , , , , , , , , , , \
rawsOp, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
rawsSr, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
rawsLead, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
shipOp, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
shipSr, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
shipLead, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
cycle, 1, 1, 1, 1, 1, 1, 1, 1, , 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1\
qa, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
uwc, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
inventory, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
induct, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
pickPackSr, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
pickPackLead, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
maintenance, , , , , , , , , 1, , , , , , , , , , , \
operations, , , , , , , , , 1, , , , , , , , , 1, 1, 1\
remote, , , 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, , 1, , , \
support, , , 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, , 1, , , \
account, , , 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, , 1, , , "};

    if (strcmp(str1, str2) == 0)
    {
        printf("The strings are identical\n");
    }
    else
    {
        printf("The strings are different\n");
    }

    return 1;
}