# 8958
# OX퀴즈
# 브론즈2

import sys

n = int(sys.stdin.readline())

for i in range(n):
    score = 0
    result = 0
    li = list(sys.stdin.readline())
    for test in li:
        if test == 'O':
            score += 1
        else:
            score = 0
        result += score
    print(result)   
