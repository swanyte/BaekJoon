# 10871
# X���� ���� ��
# �����3

import sys

n, x = map(int,sys.stdin.readline().split())
nums = [int(n) for n in sys.stdin.readline().split()]

for i in nums:
    if (i < x):
        print(i, end = " ")
