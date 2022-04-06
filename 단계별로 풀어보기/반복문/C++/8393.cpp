// 8393
// 합
// 브론즈3

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int hap = 0;

    cin>>n;
    
    for (int i = 1; i <= n; i++){
        hap += i;
    }

    cout<<hap;
}