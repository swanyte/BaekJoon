# 2577
# 숫자의 개수
# 브론즈2

import sys
from collections import Counter

a = int(sys.stdin.readline())
b = int(sys.stdin.readline())
c = int(sys.stdin.readline())

result = Counter(list(str(a*b*c)))

for i in range(10):
    print(result[str(i)])