#include <bits/stdc++.h>

int main()
{
    char str[1001];
    scanf("%s", str);
    if(str[0] >= 'a')
        str[0] = str[0]-('a'-'A');
    printf("%s\n", str);
}
