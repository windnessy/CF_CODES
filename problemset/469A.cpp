#include <bits/stdc++.h>

using namespace std;

int data[101] = {0};
int main()
{
    int lever;
    cin >> lever;
    int x,y;
    for(int i = 0 ;i < 2; i++){
        cin >> x;
        for(int j = 0; j< x ; j++){
            cin >> y;
            data[y]++;
        }
    }
    for(int i = 1; i<=lever ; i++){
        if(data[i] == 0){
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;
    return 0;
}
