def convert(s1):
    items=[s for s in s1.split('-')]
    items.sort()
    s2='-'.join(items)
    return s2

s='here-comes-the-dots-followed-by-dashes'
t=convert(s)
print(t)
