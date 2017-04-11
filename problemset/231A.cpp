#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    int bit;
    int a,b,c;
    int count1 = 0;
    while(n--){
        scanf("%d%d%d", &a, &b, &c);
        if(a == 0){
            if(b == 0)
                continue;
            if(c == 0)
                continue;
            count1++;
            continue;
        }
        if(b == 0){
            if(c == 0)
                continue;
            count1++;
            continue;
        }
        count1++;
    }
    printf("%d\n", count1);
    return 0;
}
