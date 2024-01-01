# s='The Terrible Tiger Tore The Towel'
# c=0
# for x in s:
#    if(x=='T'):
#       print(x)
#       c+=1;
#    else:
#       pass;
# s=s.replace('T','t')
# #s=s.replace('T','t',c)
# print(s)

s='The Terrible Tiger Tore The Towel'
pos=s.find('T',0)
print(pos,s[pos])
pos=s.find('T',pos+1)
print(pos,s[pos])
pos=s.find('T',pos+1)
print(pos,s[pos])
pos=s.find('T',pos+1)
print(pos,s[pos])
pos=s.find('T',pos+1)
print(pos,s[pos])
pos=s.find('T',pos+1)
print(pos,s[pos])
c=s.count('T')
s=s.replace('T','t',c)
print(s)
