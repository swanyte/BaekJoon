// 11021
// A+B - 7
// �����3

#include <stdio.h>

int main()
{

    int a, b = 0;
    int n = 0;

    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n",i, a+b);
    }
}