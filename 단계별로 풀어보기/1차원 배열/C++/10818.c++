// 10818
// 최소, 최대
// 브론즈3

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    int tmp;
    vector<int> v;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        v.push_back(tmp);
    }
    printf("%d %d", *min_element(v.begin(), v.end()), *max_element(v.begin(), v.end()));
}