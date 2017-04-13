#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, result = 0, sum = 0;
    cin >> n;
    long long in;
    long long pre = 0;
    for(int i = 0; i < n; i++){
        cin >> in;
        if(in >= pre)
        {
            sum++;
        }

        else{
            if(sum > result)
                result = sum;
            sum = 1;
        }
        pre = in;
    }
    if(sum > result)
        result = sum;
    cout << result;
    return 0;
}
