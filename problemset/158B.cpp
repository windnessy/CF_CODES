#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    int num[3]={0};
    int ren;
    int taxi_num = 0;
    while(n--){
        scanf("%d",&ren);
        if(ren == 4)
            taxi_num++;
        else
            num[ren - 1]++;
    }
    if(num[2] > num[0]){
        taxi_num += num[2];
        taxi_num = taxi_num + (num[1] /2) + (num[1] % 2 );
    }
    else{
        taxi_num += num[2];
        int cha = num[0] - num[2];
        cha = cha + num[1] * 2;
        if(cha % 4 !=0)
            taxi_num = taxi_num + cha /4 + 1;
        else
            taxi_num = taxi_num + cha /4;
    }
    printf("%d\n", taxi_num);
    return 0;
}
