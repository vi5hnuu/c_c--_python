def fun(n):
    return n>1000

lst=[10,20,30,40,50]
l=filter(fun,map(lambda x:x*x,lst))
print(list(l))