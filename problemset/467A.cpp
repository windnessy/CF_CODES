#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    int a, b;
    while(n--){
        scanf("%d%d", &a,&b);
        if(b - a >= 2)
            sum++;
    }
    printf("%d", sum);
    return 0;
}
