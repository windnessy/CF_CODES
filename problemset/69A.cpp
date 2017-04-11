#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum_a = 0,sum_b = 0,sum_c = 0;
    int a,b,c;
    scanf("%d", &n);
    while(n--){
        scanf("%d%d%d",&a,&b,&c);
        sum_a+=a;
        sum_b+=b;
        sum_c+=c;
    }
    if(!sum_a && !sum_b && !sum_c)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
