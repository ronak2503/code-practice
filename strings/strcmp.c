#include <stdio.h>
#include <string.h>
int main()
{
    char st1[5] = "ronak";
    char *st2 = "ronak";
    int value = strcmp(st1, st2);
    printf("%d", value);
    return 0;
}