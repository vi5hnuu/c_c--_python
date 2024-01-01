# def fun(a,lst):
#     lst[:]=[]
#     a=15
#
# def fun(a,lst):
#     lst=[]
#     a=15
#
# a=20
# lst=[10,20,30,40]
# fun(a,lst)
# print(lst)
# print(a)


def fun(a,b,c):
    return a+b+c
def fun(a,b,c):
    return a,b,c
def fun(a,b,c):
    return (a,b,c)

lst=[2,3,4]
print(fun(*lst))