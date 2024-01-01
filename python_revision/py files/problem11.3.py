import operator

d={'oil':230,'clip':150,'stud':175,'nut':35}
print(d)

d1=sorted(d.items())
d2=sorted(d.keys())
d3=sorted(d.values())
d4=sorted(d.items(),reverse=True)
d5=sorted(d.items(),key=operator.itemgetter(0))
d6=sorted(d.items(),key=operator.itemgetter(0),reverse=True)
d7=sorted(d.items(),key=operator.itemgetter(1),reverse=True)
d8=sorted(d.items(),key=operator.itemgetter(1))
print(d1)
print(d2)
print(d3)
print(d4)
print(d5)
print(d6)
print(d7)
print(d8)