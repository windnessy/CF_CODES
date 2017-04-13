#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    long long result;
    cin >> n;
    if(n & 1 == 1){
        result = (n >> 1) + -n;
    }
    else
        result = n >> 1;
    cout << result;

    return 0;
}
