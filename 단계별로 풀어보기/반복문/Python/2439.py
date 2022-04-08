# 2439
# 별 찍기 - 2
# 브론즈3

import sys

n = int(sys.stdin.readline())

for i in range(n):
    print(" "*(n-i-1) + "*" * (i + 1))