#include <cstdio>

int main()
{
    char str[101];
    scanf("%s", str);
    char *p;
    int cha = 'a'-'A';

    for(p = str; *p != '\0'; p++){
        if(*p == 'A'||*p=='a'||*p == 'O'||*p=='o'||*p == 'Y'||*p=='y'||*p == 'E'||*p=='e'||*p == 'U'||*p=='u'||*p == 'I'||*p=='i'){
            continue;
        }
        else{
            if(*p < 'b')
                *p = *p + cha;
            printf(".");
            printf("%c", *p);
        }
    }
    printf("\n");
    return 0;
}
