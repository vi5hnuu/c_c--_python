def fun():
    a=45
    global b
    b=45
    print(a,b,s)

a=20
b=4
s='vishnu'
fun()
print(a,b,s)