#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str,wub;
    cin >> str;
    int len = str.length();
    for(int i = 0;i < len-2; i++){
        if(str[i] =='W'&&str[i+1] =='U'&&str[i+2] =='B'){
            str[i] = 1;
            str[i+1] = 1;
            str[i+2] = 1;
            i+=2;
        }
    }
    int j;
    for(int i = 0, j = -1; i < len; i++){
        if(str[i] == 1)
            continue;
        j = i;
        while(str[i]!= 1 && i < len)
            i++;
        wub = str.substr(j,i-j);
        cout <<wub << ' ';
    }
    return 0;
}
