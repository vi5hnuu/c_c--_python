def fun(n):
    if n%5==0:
        return True
    else:
        return False

lst1=['A','x','Y','3','M','4','D']
f1=filter(str.isalpha,lst1)
lst2=[10,11,12,13,15,14]
f2=filter(fun,lst2)
print(list(f1))
print(list(f2))