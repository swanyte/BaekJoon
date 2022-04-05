// 1330
// 두 수 비교하기
// 브론즈 4

#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;

    cin>>a>>b;
    
    if(a>b)
        cout<<">";
    else if(a<b)
        cout<<"<";
    else
        cout<<"==";
}