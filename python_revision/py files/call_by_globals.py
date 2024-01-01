# a=20
# b=3.14
# s='vishnu'
# lst=['a','b','s']
# for x in lst:
#     print(globals()[x])

def fun1():
    print('Fun1')
def fun2():
    print('Fun2')

print(globals())
# lst=['fun1','fun2']
# for v in lst:
#     globals()[v]()

lst=[fun1,fun2]
for v in lst:
    v()