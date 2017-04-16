#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char data[3];
    char pre[3] = {0};
    int result = 1;
    for(int i = 0; i< n ; i++){
        cin >> data;
        if(i!=0){
            if(data[1] == pre[0])
                result++;
            strcpy(pre, data);
        }
        else
            strcpy(pre, data);
    }
    cout << result;
    return 0;
}
