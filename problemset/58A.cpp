#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[101];
    char hello[]={'h','e','l','l','o'};
    scanf("%s", str);
    char *p,*q;
    int count1 = 0;
    for(p = str, q = hello; *p !='\0'; p++){
        if(*p == *q){
            q++;
            count1++;
        }

        if(count1 == 5){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
