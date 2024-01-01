x=[1,3,5,7]
y=[2,4,6,8]
x[2]=y
print(x)
x=x[:2]+[*y]+x[3:]
print(x)
x.sort()
print(x)