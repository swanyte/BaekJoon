// 2480
// 주사위 세개
// 브론즈4

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n1, n2, n3 = 0;
    int total = 0;

    cin>>n1>>n2>>n3;
    
    if (n1 == n2 && n2 == n3){
        total = 10000 + n1*1000;
    }
    else if (n1 == n2){
        total = 1000+n1*100;
    }    
    else if (n1 == n3){
        total = 1000+n1*100;
    }
    else if (n2 == n3){
        total = 1000+n2*100;
    }
    else{
        total = 100*max({n1, n2, n3});
    }
    cout<<total;
}