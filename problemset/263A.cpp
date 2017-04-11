#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0,i,j;
    for(i = 0 ;i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &n);
            if(n == 1)
                goto done;
        }
    }
done:
    int sum = 0;
    sum = (i - 2 >= 0 ? i - 2: 2 - i) + (j - 2 >= 0 ? j - 2: 2 - j);
    printf("%d", sum);
    return 0;
}
