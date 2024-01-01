msg1='apy taxes with smile..\n'
msg2='apy taxes with smile..\n'
msg3='apy taxes with smile..\n'
msg4=['vishnu','krishan']
f=open('first.txt','w')
f.write(msg1)
f.write(msg2)
f.write(msg3)
# f.write(msg4)
# f.write(*msg4)
f.write(str(msg4))
# f.writelines(msg4)
f.close()
s=open('first.txt','r')
data=s.read()
print(data)