s='Razmattaz'
s=''.join(sorted(set(s),key=s.index))
print(s)
lst=['R','a','a','z','m','a','t','t','a','z']
lst=list(sorted(set(lst),key=lst.index))
print(lst)
tpl=('R','a','a','z','m','a','t','t','a','z')
# tpl=tuple(sorted(set(tpl),key=tpl.index))
tpl=tuple(sorted(set(tpl)))
print(tpl)