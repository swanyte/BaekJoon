// 15552
// ���� A+B
// �����2

#include <stdio.h>

int main()
{

    int a, b = 0;
    int t = 0;

    scanf("%d", &t);
    
    for (int i = 1; i <= t; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
}