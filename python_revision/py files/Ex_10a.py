lst={'aditya','aditi','ankita','ankit','anuja','bhushan','bahu','bali','bhoomi','babhoti'}
t=set()
s=set()
for item in lst:
    if item.startswith('a'):
        t.add(item)
    else:
        s.add(item)

print(t)
print(s)