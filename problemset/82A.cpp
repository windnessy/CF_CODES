#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if(n > 5){
        int ceng = ceil(log2(n*1.0/5+1));
        ceng--;
        int ge = ceil((n - 5*(pow(2,ceng)-1))/(pow(2,ceng)));
        switch(ge){
        case 1:
            cout << "Sheldon" << endl;
            break;
        case 2:
            cout << "Leonard" << endl;
            break;
        case 3:
            cout << "Penny" << endl;
            break;
        case 4:
            cout << "Rajesh" << endl;
            break;
        case 5:
            cout << "Howard" << endl;
            break;
        default:
            cout << "Wrong!" << endl;
            }
    }
    else{
        switch(n){
        case 1:
            cout << "Sheldon" << endl;
            break;
        case 2:
            cout << "Leonard" << endl;
            break;
        case 3:
            cout << "Penny" << endl;
            break;
        case 4:
            cout << "Rajesh" << endl;
            break;
        case 5:
            cout << "Howard" << endl;
            break;
        default:
            cout << "Wrong!" << endl;
            }
    }

    return 0;
}
