# 2884
# 알람 시계
# 브론즈3

import sys

hour, minute = map(int,sys.stdin.readline().split())

if (minute<45):
    minute = minute + 15
    if(hour == 0):
        hour = 23
    else:
        hour = hour - 1
else:
    minute = minute - 45
print(hour, minute)