// 2884
// 알람 시계
// 브론즈3

#include <iostream>
using namespace std;

int main()
{
    int hour, minute = 0;

    cin>>hour>>minute;
    
    if(minute<45){
        minute = minute + 15;
        if(hour == 0){
            hour = 23;
        }
        else{
            hour = hour - 1;
        }
    }
    else{
        minute = minute - 45;
    }
    
    cout<<hour<<" "<<minute;
}