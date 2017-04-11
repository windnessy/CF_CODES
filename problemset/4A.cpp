#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if(n & 1 == 1 || n == 2){
        std::cout<<"NO"<<std::endl;
        return 0;
    }
    std::cout<<"YES"<<std::endl;
    return 0;
}
