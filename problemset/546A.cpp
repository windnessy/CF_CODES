#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int k,n,w;
    scanf("%d%d%d", &k, &n, &w);
    int a = k * w * (w + 1) / 2 - n;
    if ( a < 0 )
        a = 0;
    printf("%d", a);
    return 0;
}
