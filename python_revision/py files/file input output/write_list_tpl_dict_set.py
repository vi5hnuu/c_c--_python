s={10,11,12,12}
d={'vishnu':10,'krishan':20}
l=[10,11,12]
tpl=(10,11,12)
f=open('container.txt','w')
f.write(str(s)+'\n')
f.write(str(d)+'\n')
f.write(str(l)+'\n')
f.write(str(tpl)+'\n')
f.close()
o=open('container.txt','r')
z=o.read()
print(z)