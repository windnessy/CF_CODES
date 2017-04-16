#include <bits/stdc++.h>

using namespace std;

int data[101] = {0};

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <=n; i++)
        cin >> data[i];
    int min1 = n, max1 = 1;
    int i,j;
    for(i = 2, j = n-1; i <=n; i++,j--){
        if(data[i] > data[max1])
            max1 = i;
        if(data[j] < data[min1])
            min1 = j;
    }
    int result = 0;
    if(max1 < min1)
        result = max1 - 1 + (n-min1);
    else if(max1 > min1)
        result = max1 - 1 + (n - min1) - 1;
    cout << result;
    return 0;
}
