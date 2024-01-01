def msg1():
    print('vishnu kumar.')
def msg2():
    print('krishan kumar')

d=vars()
i=dir()
print(sorted(d.keys()))
print(i)
print(d.keys()-i)
print(i-d.keys())