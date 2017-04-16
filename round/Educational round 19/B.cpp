#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    int sum = 0;
    cin >> n;
    int data;
    int MIN = 10000000;
    for(int i = 0; i < n; i++ ){
        cin >> data;
        if(data > 0 )
            sum += data;
        data = abs(data);
        if(data & 1)
            MIN = min(MIN,data);
    }
    if(sum & 1)
        cout << sum;
    else
        cout << sum - MIN;
    return 0;
}
