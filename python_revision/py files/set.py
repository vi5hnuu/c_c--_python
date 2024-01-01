# s={10,13,12,13,15,50,1,0}
# print(s)
# for x in s:
#     print(x)
#
# for x,i in enumerate(s):
#     print(i,x)

# list->append,remove,del etx
# set->add,update,frozenset etc

# s={'vihsnu','krishan'}
# s.add('laxmi')
# print(s)

# s=frozenset({'vihsnu','krishan'})
# # s.add('laxmi')
# print(s)

# s={10,11,12,15,16,18,4}
# t=[10,11,12,15,16,18,4]
# u=(10,11,12,15,16,18,4)
# print(sorted(s))
# print(sorted(t))
# print(sorted(u))

# s={10,11,12,15,16,18,4}
# m=[10,11,12,15,16,18,4]
# mm=m.copy()
# n=(10,11,12,15,16,18,4)
# # nn=n.copy()
# # print(nn)
# print(mm)

# t={'a','b'}
# u=set()
# s.add('hello')
# s.update(t)
# print(s)
# u=s.copy()
# s.remove(15)
# # s.remove(101)
# s.discard(12)
# s.discard(101)
# print(u)
# s.clear()

# s={10,15,13,23,22,16,17}
# t={13,15,22}
# print(s.issubset(t))
# print(t.issubset(s))
# print(s.isdisjoint(t))
# print(s.issuperset(t))


# engineers={'vishnu','krishan','manisha','laxmi','parkash'}
# managers={'pradeep','vishnu'}
# u=engineers | managers
# print(u)
# u=engineers & managers
# print(u)
# u=engineers - managers
# print(u)
# u=engineers ^ managers
# print(u)


a={1,2,3,4,5}
b={2,4,5}
print(a>=b)
print(a==b)

