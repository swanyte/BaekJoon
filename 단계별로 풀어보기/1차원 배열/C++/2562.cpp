// 10818
// 최소, 최대
// 브론즈3

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int tmp;
    vector<int> v;

    for(int i = 0; i < 9; i++){
        scanf("%d", &tmp);
        v.push_back(tmp);
    }
    printf("%d\n", *max_element(v.begin(), v.end()));
    printf("%d", max_element(v.begin(), v.end()) - v.begin() + 1);
}