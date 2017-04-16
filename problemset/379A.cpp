#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int result = 0;
    int pre = 0;
    while( n > 0){
        result += n;
        pre += n;
        n = pre / k;
        pre -= n * k;
    }
    cout << result;
    return 0;
}
