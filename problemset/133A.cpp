#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[101];
    scanf("%s", str);
    int flag = 0;
    char *p;
    for(p = str; *p!='\0'; ++p){
        if(*p == 'H' || *p =='Q' || *p =='9'){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
