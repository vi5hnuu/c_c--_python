def power(a,b):
    if b>0:
        b-=1
        return a*power(a,b)
    return 1

print(power(3,5))