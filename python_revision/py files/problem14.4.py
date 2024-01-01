def fibo(old,current,terms):
    if(terms>=1):
        new=old+current
        print(f'{new}',end='\t')
        terms-=1
        fibo(current,new,terms)
old=1;
current=1
print(old)
print(current)
fibo(old,current,20)