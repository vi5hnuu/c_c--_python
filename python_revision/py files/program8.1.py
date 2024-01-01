names=['anil','amol','aditya','alka','avi']
print(names)

names.insert(2,'anuj')
print(names)

names.append(('zulu'))
print(names)
names.remove('avi')
print(names)

i=names.index('anil')
names[i]='anilkumar'
print(names)

names.sort()
print(names)

names.reverse()
print(names)