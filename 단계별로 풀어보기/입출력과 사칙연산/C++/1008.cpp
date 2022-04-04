// 1008
// A/B

#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a, &b);
	printf("%.9lf", (double)a/b);
}

/*
#include <iostream>
using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    
    cin>>a>>b;
    cout.precision(15);
    cout<<a/b<<endl;
}
*/