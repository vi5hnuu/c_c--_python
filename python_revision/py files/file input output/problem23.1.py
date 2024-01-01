f=open('container.txt','r')
while True:
    data=f.read(1)
    if data=='':
        break
    print(data,end='')
f.close()