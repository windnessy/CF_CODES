#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    int value = 0;
    char str[4];
    while(n--){
        scanf("%s", str);
        if(str[1]=='+')
            value++;
        else
            value--;
    }
    printf("%d\n", value);
    return 0;
}
