
#include <stdio.h>
#include <string.h>
typedef struct time
{
    int dd;
    int MM;
    int yy;
    int hh;
    int min;
    int ss;

} dd;
void display(dd d)
{
    printf("the timestamp is comprision %d/%d/%d  %d:%d:%d\n", d.dd, d.MM, d.yy, d.hh, d.min, d.ss);
}
int ddcmp(dd d1, dd d2)
{
    if (d1.yy > d2.yy)
    {
        return 1;
    }
    if (d1.yy < d2.yy)
    {
        return -1;
    }
    if (d1.MM > d2.MM)
    {
        return 1;
    }
    if (d1.MM < d2.MM)
    {
        return -1;
    }
    if (d1.dd > d2.dd)
    {
        return 1;
    }
    if (d1.dd < d2.dd)
    {
        return -1;
    }
    return 0;
    if (d1.hh > d2.hh)
    {
        return 1;
    }
    if (d1.hh < d2.hh)
    {
        return -1;
    }
    return 0;
    if (d1.min > d2.min)
    {
        return 1;
    }
    if (d1.min < d2.min)
    {
        return -1;
    }
    return 0;
    if (d1.ss > d2.ss)
    {
        return 1;
    }
    if (d1.ss < d2.ss)
    {
        return -1;
    }
    return 0;
}

int main()
{
    dd d1;
    dd d2;
    printf("timestep dd/MM/yy HH:min:ss d1\n");
    scanf("%d %d %d %d %d %d", &d1.dd, &d1.MM, &d1.yy, &d1.hh, &d1.min, &d1.ss);
    printf("timestep dd/MM/yy HH:min:ss d2\n");
    scanf("%d %d %d %d %d %d", &d2.dd, &d2.MM, &d2.yy, &d2.hh, &d2.min, &d2.ss);
    
    display(d1);
    display(d2);
    int a = ddcmp(d1, d2);
    printf("dd comparison function return :: %d", a);
    return 0;
}