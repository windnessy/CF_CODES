#include <bits/stdc++.h>
using namespace std;

int Mark[1000001]={0};
int main()
{
    int n;
    cin >> n;
    if(n & 1 == 1){
        if(n-9 > 9)
            cout << 9 << ' ' << n-9;
        else
            cout << n-9 << ' ' << 9;
    }
    else
        if(n-8 > 8)
            cout << 8 << ' ' << n-8;
        else
            cout << n-8 << ' ' << 8;
    return 0;
}
