// 3052
// 나머지
// 브론즈2

#include <stdio.h>
#include <set>
using namespace std;

int main(){


    set<int> s;
    int tmp;

    for (int i = 0; i<10; i++){
        scanf("%d", &tmp);
        s.insert(tmp%42);
    }

    printf("%d", s.size());
}