#inport operator
import operator

lst=[('vishnu',10,20),('krishan',10,20),('laxmi',10,20),('pooja',10,20),('parkas',10,20)]
tpl=(['vishnu',10,20],['krishan',10,20],['laxmi',10,20],['pooja',10,20],['parkas',10,20])
print(sorted(lst))
print(sorted((tpl)))
print(sorted(lst,key=operator.itemgetter(0)))
print(sorted(lst,key=operator.itemgetter(1)))
print(sorted(lst,key=operator.itemgetter(2)))
print(sorted(tpl,key=operator.itemgetter(0)))
print(sorted(tpl,key=operator.itemgetter(1)))
print(sorted(tpl,key=operator.itemgetter(2)))
