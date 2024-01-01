import operator

lst=[('anil',21,80),('sohail',20,90),('sunil',20,91),('shobha',18,93),('anil',19,85),('shobha',20,92)]
print(sorted(lst,key=operator.itemgetter(0,1,2)))
print(sorted(lst,key=operator.itemgetter(0)))
print(sorted(lst,key=operator.itemgetter(1)))
print(sorted(lst,key=operator.itemgetter(2)))
print(sorted(lst,key=lambda tpl:(tpl[0])))
print(sorted(lst,key=lambda tpl:(tpl[1])))
print(sorted(lst,key=lambda tpl:(tpl[2])))
print(sorted(lst,key=lambda tpl:(tpl[0],tpl[1],tpl[2])))