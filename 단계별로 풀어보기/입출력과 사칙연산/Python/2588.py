# 2588
# ����
# ����� 4

import sys

num1 = int(sys.stdin.readline().strip())
num2 = int(sys.stdin.readline().strip())

print(num1 * (num2%10))
print(num1 * ((num2%100)//10))
print(num1 * (num2//100))
print(num1 * num2)