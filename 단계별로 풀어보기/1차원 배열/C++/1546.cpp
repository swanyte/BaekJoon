// 1546
// ∆Ú±’
// ∫Í∑–¡Ó1

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    int max = 0;
    float result = 0;
    
    int tmp;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        result += tmp;
        if(tmp>max){
            max = tmp;
        }
    }
    result = result/max*100/n;
    printf("%f", result);
    
}