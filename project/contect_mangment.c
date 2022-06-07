#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    FILE *fp;
    char password[30],orignal[30],ch;
    int i;
    printf("enter the password  : ");
    i=0;
    while (1)
    {
        ch = getch();
        if (ch==13)
        {
            password[i]='\0';
            break;
        }
        password[i++]=ch;
        printf("*");
    }
    fp=fopen("password.dat","r");
    fgets(orignal,30,fp);
    fclose(fp);
    if (strcmp(orignal,password)==0)
    {
        printf("\nCorrect");
    }
    else
    {
        printf("Incorrect");
    }    
    getch ();
}