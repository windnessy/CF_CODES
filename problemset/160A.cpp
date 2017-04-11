#include <bits/stdc++.h>

int main()
{
    int n;
    int num[101]={0};
    scanf("%d", &n);
    int sum = 0;
    int coin;
    while(n--){
        scanf("%d", &coin);
        sum += coin;
        num[coin]++;
    }
    int sum2 = 0;
    int count1 = 0;
    sum = sum / 2;
    for(int i = 100; i >= 1 ;i--){
        for(int j = 0; j < num[i]; j++){
            sum2 += i;
            count1++;
            if(sum2 > sum){
                printf("%d\n", count1);
                return 0;
            }
        }
    }
    return 0;
}
