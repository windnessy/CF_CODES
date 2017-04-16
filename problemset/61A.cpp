#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    int len = str1.length();
    for(int i=0; i<len; i++){
        if((str1[i]-'0' && !(str2[i]-'0')) || (!(str1[i]-'0') && str2[i]-'0'))
            cout<<'1';
        else
            cout<<'0';
    }
    return 0;
}
