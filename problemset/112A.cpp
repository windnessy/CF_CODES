#include <bits/stdc++.h>

int main()
{
    char str[101], str2[101], *p, *q;
    scanf("%s%s", str, str2);
    for(p = str, q = str2; *p!='\0'; q++,p++){
        if(*p < 'a')
            *p = *p + 'a' - 'A';
        if(*q < 'a')
            *q = *q + 'a' - 'A';
    }
    for(p = str, q = str2; *p!='\0'; q++,p++){
        if(*p == *q)
            continue;
        else if(*p < *q){
            printf("-1\n");
            return 0;
        }
        else{
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
