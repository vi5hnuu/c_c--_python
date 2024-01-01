def calldecorator(func):
    def _decorate(*arg,**kwargs):
        print(f'Calling{func.__name__}({arg},{kwargs})')
        ret=func(*arg,**kwargs)
        print(f'called{func.__name__}({arg},{kwargs}) got ret val:{ret}')
    return _decorate

@calldecorator
def sum_num(arg1,arg2):
    return arg1+arg2
@calldecorator
def message(msg):
    pass

# sum_num(10,20)
sum_num(arg2=10,arg1=20)
# message('hello vishnu.')