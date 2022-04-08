// 1110
// 더하기 사이클
// 브론즈1

#include <stdio.h>

int main(){
    int n = 0;
    int tmp = 0;
    int cnt = 0;
    int li[2];

    scanf("%d", &n);

    if (n<10){
        li[0] = 0;
        li[1] = n;
    }
    else{
        li[0] = n/10;
        li[1] = n%10;
    }
    while(1){
        cnt += 1;
        tmp = li[0] + li[1];
        tmp = tmp%10;
        li[0] = li[1];
        li[1] = tmp;
        if(n == (li[0]*10 + li[1])){
            printf("%d", cnt);
            break;
        }
        else{
            continue;
        }
    }
}