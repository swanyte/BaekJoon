// 9498
// 시험 성적
// 브론즈4

#include <iostream>
using namespace std;

int main()
{
    int a = 0;

    cin>>a;
    
    if(a<=100 && a>=90)
        cout<<"A";
    else if(a>=80)
        cout<<"B";
    else if(a>=70)
        cout<<"C";
    else if(a>=60)
        cout<<"D";
    else
        cout<<"F";
}