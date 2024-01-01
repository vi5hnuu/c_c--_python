# s='an inferios lawyer with dubious practices'
# s=s.title();
# print(s)

s='an inferios lawyer with dubious practices'
t=''
for x in s.split(' '):
   t=t+x.capitalize()+' '
print(t)
