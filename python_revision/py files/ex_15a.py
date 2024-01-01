def fun(d):
    if d['type']=='dog':
        return d['age']
    else:
        return 0
def funn(n):
    if n==0:
        return False
    else:
        return True
dct={'a101':{'type':'cat','name':'tauby','age':6},
'a102':{'type':'dog','name':'tommy','age':8},
'a103':{'type':'dog','name':'tiger','age':10},
}

lst2=list(filter(funn,map(fun,list(dct.values()))))
print(lst2)
print(sum(lst2))