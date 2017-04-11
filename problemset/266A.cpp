#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    char str[51];
    scanf("%s", str);
    int count1 = 0;
    char *p = str, *q = str;
    p++;
    for(int i = 1; i < n; i++,p++){
        if(*p == *q)
            count1++;
        else
            q = p;
    }

    printf("%d\n", count1);
    return 0;
}
