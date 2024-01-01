def runningsum(n):
    if n==0:
        return 0
    else:
        s=n+runningsum(n-1)
        return s
n=int(input('Enter number :'))
if n>0:
    print(runningsum(n))
else:
    pass