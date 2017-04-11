#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[101];
    int letter[30] = {0};
    scanf("%s", str);
    char *p;
    for(p = str; *p != '\0'; p++)
        letter[*p - 'a']++;
    int sum = 0;
    for(int i = 0; i < 30;i++){
        if(letter[i] != 0)
            sum++;
    }
    if(sum & 1 == 1)
        printf("IGNORE HIM!");
    else
        printf("CHAT WITH HER!");
    return 0;
}
