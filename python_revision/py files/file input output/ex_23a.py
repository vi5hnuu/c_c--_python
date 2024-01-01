f=open('container.txt','r')
while True:
    data=f.readline()
    if data=='':
        break
    print(data)
f.close()