#include<stdio.h>
int main()
{
    char name[21] = "Jakssir Hossain Rony";
    int i;
    char *rev[21];
    for(i = 21; name[i]  != name[0]; i--)
    {
        name[i]--;
    // printf("%c",*name);
    }
printf("%c",*name);
    return 0;
}
