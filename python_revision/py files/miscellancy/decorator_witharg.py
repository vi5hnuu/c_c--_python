import time
def timer(func):
    def calculate(*arg,**kwargs):
        start_time=time.perf_counter()
        value=func(*arg,**kwargs)
        end_time=time.perf_counter()
        runtime=end_time-start_time
        print(f'Finished{func.__name__!r}in{runtime:.8f}secs')
        return value
    return  calculate

@timer
def Product(num):
    fact=1
    for i in range(num):
        fact=fact*i+1
    return fact

@timer
def prod_and_sum(num):
    p=1
    for i in range(num):
        p=p*i+1
    s=0
    for i in range(num):
        s=s+i+1
    return (p,s)
@timer
def time_pass(num):
    for i in range(num):
        i+=1

p=Product(10)
print(p)
p=Product(20)
print(p)
p=prod_and_sum(20)
print(p)
p=time_pass(20)
print(p)
