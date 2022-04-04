// 10430
// 나머지
// 브론즈 5

#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;

    cin>>num1>>num2;
    cout<<(num1 * (num2%10))<<endl;
    cout<<(num1 * ((num2%100)/10))<<endl;
    cout<<(num1 * (num2/100))<<endl;
    cout<<(num1 * num2)<<endl;
}