#include <stdio.h>
#include <string.h>
int main()
{
    char st1[10] = "ronak";
    char *st2 = "sahu";
    strcat(st1, st2);
    printf("%s", st1);

    return 0;
}