def fun():
    print('vishnu kumar')

print(dir(55))
print((55).__add__(6))
print(dir('55'))
print(dir(55.5))
print(dir(fun))
d=globals()
print(d)
d['fun']()
d['fun'].__call__()