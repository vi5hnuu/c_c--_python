import math
def compute(n):
    s=0
    num=0
    for outer in range(0,4):
        num=num*10+n
        s=s+num
    return s
total=compute(7)
print(total)
total=compute(4)
print(total)