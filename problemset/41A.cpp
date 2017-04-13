#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2;
    cin >> str1 >>str2;
    int len = str1.length();
    int i,j;
    for(i = 0,j = len - 1; i < len; i++, j--){
        if(str1[i] != str2[j]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
