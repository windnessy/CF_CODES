#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    n++;
    while(1){
        int ge = n%10;
        int shi = n/10%10;
        int bai = n/100 %10;
        int qian = n/1000;
        if(ge == shi || ge ==bai || ge == qian || shi == bai || shi == qian || bai == qian)
            n++;
        else
            break;
    }
    cout << n;
    return 0;
}
