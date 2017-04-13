#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    int sum1,sum2,result = 0;
    cin >> a >> b >> c;
    for(int i = 0 ;i < 2; i++){
            if(i == 0)
                sum1 = a + b;
            else
                sum1 = a * b;
        for(int j = 0; j < 2; j++){
            if(j == 0)
                sum2 = sum1 + c;
            else
                sum2 = sum1 * c;
            if(sum2 > result)
                result = sum2;
        }
    }
    for(int i = 0 ;i < 2; i++){
            if(i == 0)
                sum1 = c + b;
            else
                sum1 = c * b;
        for(int j = 0; j < 2; j++){
            if(j == 0)
                sum2 = sum1 + a;
            else
                sum2 = sum1 * a;
            if(sum2 > result)
                result = sum2;
        }
    }
    cout << result ;
    return 0;
}
