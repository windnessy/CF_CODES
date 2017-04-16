#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return a == 0 ? b : gcd(b%a, a);
}
int main()
{
    int a,b,n;
    int flag = 1;
    int a_gcd = 0, b_gcd = 0;
    cin >> a >> b >> n;
    while(1){
        if(flag){
            if( n > 0){
                a_gcd = gcd(a , n);
                if(a_gcd > n){
                    cout << 1;
                    return 0;
                }
                else
                    n -= a_gcd;
                flag = 0;
            }
            else{
                cout << 1;
                return 0;
            }
        }
        else{
            if( n > 0){
                b_gcd = gcd(b , n);
                if(b_gcd > n){
                    cout << 0;
                    return 0;
                }
                else
                    n-=b_gcd;
                flag = 1;
            }
            else{
                cout << 0;
                return 0;
            }
        }
    }
    return 0;
}
