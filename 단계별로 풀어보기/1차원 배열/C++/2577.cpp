// 2577
// 숫자의 개수
// 브론즈2

#include <stdio.h>

using namespace std;

int main(){

    int a, b, c = 0;
    int result = 0;
    int li[10] = {};

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    result = a*b*c;

    while(result != 0){
        li[result%10] += 1;
        result /= 10;
    }

    for (int i = 0; i < 10; i++){
        printf("%d\n", li[i]);
    }
}