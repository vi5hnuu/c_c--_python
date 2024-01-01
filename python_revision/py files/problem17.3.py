# a=10
# b=20
# c=30
# print(globals())
# locals()['a']=25
# locals()['b']=26
# locals()['c']=27
# print(a,b,c)

def fun():
    a=10
    b=20
    c=30
    locals()['a']=25
    locals()['b']=26
    locals()['c']=27
    print(a,b,c)
fun()

