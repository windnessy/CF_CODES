#include <cstdio>

int main()
{
    char str[101];
    scanf("%s", str);
    char *p,*q;
    int count1;
    for(p = str,q = str, count1 = 0; *p!='\0'; p++){
        if(*p == *q)
            count1++;
        else
            count1 = 1;
        if(count1>=7){
            printf("YES\n");
            return 0;
        }
        q = p;
    }
    printf("NO\n");
    return 0;
}
