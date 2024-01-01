a=10
b=20
c=30
print(globals())
globals()['a']=25
globals()['b']=26
globals()['c']=27
print(a,b,c)

#see problem17.3