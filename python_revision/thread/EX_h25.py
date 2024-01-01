import time
import sys
import threading

def copy_upper(inputfile,outputfile):
    f1 = open(inputfile, 'r')
    f2 = open(outputfile, 'w')
    while True:
        data = f1.readline()
        if data == '':
            break
        time.sleep(0.5)
        data = data.upper()
        f2.write(data)
    f1.close()
    f2.close()

start_time=time.time()
lst1=sys.argv[1:4]
lst2=sys.argv[4:]

if len(sys.argv[1:])!=6:
    print('Improper usage.')
    print('Correct usage :convert a.txt b.txt c.txt aa.txt bb.txt cc.txt ')

tharr=[]
for i in range(0,2):
    th=threading.Thread(target=copy_upper,args=(lst1[i],lst2[i]))
    time.sleep(0.5)
    th.start()
    tharr.append(th)
for t in tharr:
    t.join()
end_time=time.time()
print('Time required ',end_time-start_time,'sec')