# print((lambda x:x**2)(5))

# p=lambda s:s.lower()
# q=lambda s:s.upper()
# print(p('VISHNU'))
# print(q('vishnu'))
# lst=[10,20,30]
# p=(lambda x:sum(x)/len(x))
# print(p(lst))
import operator

d={'oil':230,'clip':150,'stud':175,'nut':35}
# d1=sorted(d.items(),key=lambda x:x[1])
d1=sorted(d.items())
print(d1)