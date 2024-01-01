# def printt(*args):
#     print()
#     for x in args:
#         print(x)
# printt(1,2,3)
# printt(1,2)
# printt(1)

# def printt(**kwargs):
#     print()
#     for i,(k,v) in enumerate(kwargs.items()):
#         print(i,k,v)
# printt(x=1,y=2,z=3)
# d={'vishnu':10,'krishan':15}
# printt(**d)

def sum(a,b,c,d):
    return a+b+c+d

lst=[10,20,30,40]
print(sum(*lst))