#include <bits/stdc++.h>

using namespace std;

int un[101] = {0};
int main()
{
    int n;
    cin >> n;
    multimap<int ,int> data;
    int x,y;
    for(int i = 0 ; i<n; i++){
        cin >> x >> y;
        un[x]++;
        data.insert(make_pair(x,y));
    }
    int result = 0;
    for(auto i = data.begin(); i!=data.end(); i++){
        result+=un[i->second];
    }
    cout << result;
    return 0;
}
