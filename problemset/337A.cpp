#include <bits/stdc++.h>

using namespace std;

int n,m;
int data[1000];

int main()
{
    scanf("%d%d",&n,&m);
    for(int i = 0; i < m; i++)
        scanf("%d", &data[i]);
    sort(data, data + m);
    int min1 = 1000;
    int j = n-1;
    for(int i = j; i<m; i++){
        int s = data[i] - data[i-j];
        if(s < min1){
             min1 = s;
        }

    }
    cout << min1;
    return 0;
}
