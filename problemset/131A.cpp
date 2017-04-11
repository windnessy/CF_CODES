#include <bits/stdc++.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int flag;
    char *p = str;
    int cha = 'a' - 'A';

    if(*p >= 'a')
        flag = 0;
    else
        flag = 1;

    for( ++p; *p!='\0'; p++){
        if(*p >='a')
            break;
    }
    if(*p == '\0'){
        p = str;
        if(!flag)
            *p-=cha;
        else
            *p+=cha;
         for( ++p; *p!='\0'; p++)
            *p = *p + cha;
        }
    printf("%s\n", str);
    return 0;
}
