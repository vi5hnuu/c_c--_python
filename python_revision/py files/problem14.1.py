import sys

sys.setrecursionlimit(10**4)
def factorize(n,i=2):
    if i<=n:
        if n%i==0:
            print(i,end=' ')
            n=n//i
        else:
            i+=1
    factorize(n,i)

factorize(20,2)