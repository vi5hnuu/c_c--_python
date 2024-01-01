f1=open('sample.txt','r')
f2=open('trial.txt','r')
f3=open('combined.txt','w')

while True:
    data1=f1.readline()
    if data1=='':
        break
    f3.write(data1)
    data2=f2.readline()
    if data2=='':
        break
    f3.write(data2)

if data1!='':
    while True:
        data1=f1.readline()
        if data1=='':
            break
        f3.write(data1)
if data2!='':
    while True:
        data2=f2.readline()
        if data2=='':
            break
        f3.write(data2)
f1.close()
f2.close()
f3.close()
f3=open('combined.txt','r')
for x in f3:
    print(x)
