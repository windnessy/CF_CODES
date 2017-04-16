#include <bits/stdc++.h>

using namespace std;

int data[21],ans;

int n,k;


int main()
{
    cin >> n>>k;
	for(int i =2; k>1 && n > 1; i++)
		for(;k>1 && n%i==0; k--,n/=i)
			data[++ans] = i;
	if(n==1){
		cout<< -1;
	}
	else{
		for(int i = 1; i<=ans; i++)
			cout<<data[i]<<' ';
		cout<<n;
	}
    return 0;
}
