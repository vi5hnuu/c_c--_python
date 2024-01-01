from functools import reduce

def getsum(x,y):
    return x+y
def getprod(x,y):
    return x*y

lst=[1,2,3,4]
a=reduce(getsum,lst)
b=reduce(getprod,lst)
print(a)
print(b)