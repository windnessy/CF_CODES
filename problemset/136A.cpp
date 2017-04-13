#include<bits/stdc++.h>

using namespace std;

int main()
{
    int data[101]={0};
    int n, j;
    cin >> n;;
    for(int i = 1; i<= n; i++){
        cin >> j;
        data[j] = i;
    }
    for(int i = 1; i <= n; i++){
        cout << data[i] << ' ';
    }
    return 0;
}
