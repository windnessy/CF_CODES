#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num[6] = {0};
    char str[101];
    scanf("%s", str);
    char *p;
    for(p = str; *p!='0';p += 2){
        num[*p - '0']++;
        if(*(p + 1) == '\0')
            break;
    }
    for(int n = 1; n < 4; n++){
        int flag = 0;
        for( ;num[n] > 0; num[n]--){
            printf("%d", n);
            if(num[n] > 1)
                printf("+");
            flag++;
        }
        if(flag && (num[n+1] > 0 || num[n+2] > 0))
            printf("+");
    }
    printf("\n");
    return 0;
}
