import time,sys,threading

def readfile(inputfile):
    f = open(file, 'r')
    count = 0
    while True:
        data = f.readline()
        time.sleep(0.5)
        if data == '':
            break
        count += 1
    print('Total lines in file :', 'file', ' is ', count)
star_time=time.time()
lst=sys.argv
lst=lst[1:]

tharr=[]
for file in lst:
    th=threading.Thread(target=readfile,args=(file,))
    th.start()
    tharr.append(th)

for th in tharr:
    th.join()
end_time=time.time()
print('Time required=',end_time-star_time,'sec')


