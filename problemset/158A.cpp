#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int n,score;
    scanf("%d%d", &n, &score);
    int per;
    int p_per;
    int count1 = 0;
    while(n--){
        scanf("%d", &per);
        if(per == 0)
            break;
        if(count1 < score)
            count1++;
        else if(per == p_per)
            count1++;
        else
            break;
        p_per = per;
    }
    printf("%d\n", count1);
    return 0;
}
