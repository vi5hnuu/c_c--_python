def fun():
    a=45
    global b
    b=4
    print(locals())
    print(globals())
a=20
b=3.14
s='vishnu'
print(locals())
print(globals())
fun()