#include <bits/stdc++.h>

int main()
{
    int n;
    int a,b,cha;
    int c = 0,sum = 0;
    scanf("%d", &n);
    while(n--){
        scanf("%d%d", &a, &b);
        cha = b - a;
        if(c > 0)
            c+=cha;
        else
            c = cha;
        if(c > sum)
            sum = c;
    }
    printf("%d\n", sum);
    return 0;
}
