# 2577
# ������ ����
# �����2

import sys
from collections import Counter

a = int(sys.stdin.readline())
b = int(sys.stdin.readline())
c = int(sys.stdin.readline())

result = Counter(list(str(a*b*c)))

for i in range(10):
    print(result[str(i)])