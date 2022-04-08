// 10871
// X보다 작은 수
// 브론즈3

#include <stdio.h>

int main()
{
    int n = 0;
    int x = 0;
    int tmp = 0;

    scanf("%d %d", &n, &x);
    
    for (int i = 0; i < n; i++){
        scanf("%d", &tmp);
        if (tmp < x){
            printf("%d ", tmp);
        }
    }

}