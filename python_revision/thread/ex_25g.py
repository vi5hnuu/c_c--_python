import time
import sys
import threading

start_time=time.time()
lst1=sys.argv[1:4]
lst2=sys.argv[4:]

if len(sys.argv[1:])!=6:
    print('Improper usage.')
    print('Correct usage :convert a.txt b.txt c.txt aa.txt bb.txt cc.txt ')

for i in range(0,2):
    f1=open(lst1[i],'r')
    f2=open(lst2[i],'w')
    while True:
        data=f1.readline()
        if data=='':
            break
        time.sleep(0.5)
        data=data.upper()
        f2.write(data)
    f1.close()
    f2.close()
end_time=time.time()
print('Time required ',end_time-start_time,'sec')