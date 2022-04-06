# 2525
# 오븐 시계
# 브론즈4

import sys

hour, minute = map(int,sys.stdin.readline().split())
time = int(sys.stdin.readline())

if (minute + time < 60):
    minute = minute + time
else:
    hour += (minute + time)//60
    minute = (minute + time)%60
    
if (hour>=24):
    hour = hour - 24    
print(hour, minute)