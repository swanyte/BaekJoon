# 3052
# 나머지
# 브론즈2

import sys

li = []

for i in range(10):
    li.append((int(sys.stdin.readline()))%42)
li = set(li)
print(len(li))