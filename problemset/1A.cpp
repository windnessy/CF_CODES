#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<stack>
#include<queue>
#include<string>
#include<cstring>
#include<iomanip>
#include<set>
#include<vector>
#include<cstdio>
#include<stack>
#include<sstream>
#include<cstring>
using namespace std;
const int MAX=1000005;
typedef long long ll;
void tran(int x)
{
    if(x)
    {
       tran((x-1)/26);
       printf("%c",(x-1)%26+'A');
    }
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char str[1000],*p;
        int a,b;
        cin>>str;
        if(sscanf(str,"%*c%d%*c%d",&a,&b)==2)
        {
            tran(b);
            printf("%d\n",a);
        }
        else
        {
            for(a=0, p=str; *p>64; p++)
                a=a*26+*p-64;
            printf("R%sC%d\n",p,a);
        }
    }
    return 0;
}
