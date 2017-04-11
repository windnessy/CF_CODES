#include <bits/stdc++.h>

bool check_lucky(int n)
{
    int a;
    while( n > 0 ){
        a = n % 10;
        if( a!= 4 && a != 7)
            return false;
        n = n / 10;
    }
    return true;
}
bool check_almost(int n)
{
    if(n%4 == 0 || n%7==0|| n%44==0|| n%77==0|| n%47==0|| n%74==0|| n%444==0|| n%777==0|| n%447==0|| n%474==0|| n%744==0|| n%477==0|| n%747==0|| n%774==0)
        return true;
    return false;
}
int main()
{
    int n;
    scanf("%d", &n);
    if(check_lucky(n) == true)
        printf("YES\n");
    else
        if(check_almost(n) == true)
            printf("YES\n");
        else
            printf("NO\n");
    return 0;
}
