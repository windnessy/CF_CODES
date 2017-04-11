#include<bits/stdc++.h>
using namespace std;



int main(int argc, char* argv[])
{
    int n,t;
    string str;
    cin >> n >> t >> str;
    int i, j = 0, k = 0;
    for(i = 0; i<t ; i++){
        for(j = 0 ;j < n; j++){
            while(j<n && str[j]!='B')
                j++;

            k = j+1;
            if(j!=n && k!=n && str[k]=='G'){
                swap(str[j],str[k]);
                j = k;
            }

        }
    }
    cout <<str;
    return 0;
}
