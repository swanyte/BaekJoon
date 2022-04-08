// 2439
// 별 찍기 - 2
// 브론즈3

#include <stdio.h>

int main()
{
    int n = 0;

    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
        for (int j = n; j > i; j--){
            printf(" ");
        }
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}