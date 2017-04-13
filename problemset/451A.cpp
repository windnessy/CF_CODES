#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int min1 = (n > m) ? m : n;
    if(min1 & 1 == 1){
        cout << "Akshat";
    }
    else
        cout << "Malvika";
    return 0;
}
