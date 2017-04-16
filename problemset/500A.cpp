#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> data;
    int n, dest,k;
    cin >> n >> dest;
    for(int i = 0; i<n-1; i++){
        cin >> k;
        data.push_back(k);
    }
    int j;
    auto start = data.begin();
    auto destination = data.begin() + (dest - 1);
    for(auto i = start;i < destination; ){
        i += *i;
        if(i == destination){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
