#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    string str;
    stringstream stream;
    stream << n;
    stream >> str;

    int len = str.length();
    int cnt = 0;
    for(int i = 0 ;i < len; i++){
        if(str[i] == '4' || str[i] == '7')
            cnt++;
    }
    str.clear();
    stream.clear();
    stream << cnt;
    stream >> str;
    len = str.length();
    for(int i = 0 ;i < len; i++){
        if(str[i] != '4' && str[i] != '7'){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
