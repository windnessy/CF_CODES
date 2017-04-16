#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int i = 1;
    while(1){
        if(n == 0)
            break;
        n--;
        if(i%m == 0)
            n++;
        i++;
    }
    cout << i - 1;
    return 0;
}
