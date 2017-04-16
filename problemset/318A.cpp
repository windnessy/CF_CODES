#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n,k;
    unsigned long long result;
    cin >> n >> k;
    if( n & 1 == 1){
        if(k <= ((n+1) >> 1) )
            result = 2 * k - 1;
        else{
            k = k - ((n+1) >> 1);
            result = 2 * k;
        }
    }
    else{
        if(k <= (n >> 1) )
            result = 2 * k - 1;
        else{
            k = k - (n >> 1);
            result = 2 * k;
        }
    }
    cout <<result;
    return 0;
}
