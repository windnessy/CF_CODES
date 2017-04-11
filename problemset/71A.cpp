#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    char str[101];
    while(n--){
        scanf("%s", str);
        int flag = 0;
        int count1 = 0;
        char *p = str;
        while(*p!='\0'){
            p++;
            count1++;
        }
        if(count1>10){
            count1-=2;
            printf("%c%d%c\n", *str, count1, *--p);
        }
        else
            printf("%s\n",str);

    }
    return 0;
}
