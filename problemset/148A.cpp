#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,l,m,n,d;
    scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);
    int i;
    int sum = 0;
    for(i = 1; i<d + 1; i++){
        if( i % k == 0){
            sum++;
            continue;
        }
        else if(i % l == 0){
            sum++;
            continue;
        }
        else if(i % m == 0){
            sum++;
            continue;
        }
        else if(i % n == 0){
            sum++;
            continue;
        }
    }
    printf("%d", sum);
    return 0;
}
