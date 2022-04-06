// 2525
// 오븐 시계
// 브론즈4

#include <iostream>
using namespace std;

int main()
{
    int hour, minute, time = 0;

    cin>>hour>>minute>>time;
    
    if (minute + time < 60){
        minute = minute + time;
    }    
    else{
        hour += (minute + time)/60;
        minute = (minute + time)%60;
    }   
    
    if (hour>=24){
        hour = hour - 24;
    }        
    cout<<hour<<" "<<minute;
}