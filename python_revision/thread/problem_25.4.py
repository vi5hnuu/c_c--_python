import time,sys
start_time=time.time()
lst=sys.argv
lst=lst[1:]

for file in lst:
    f=open(file,'r')
    count=0
    while True:
        data=f.readline()
        time.sleep(0.5)
        if data=='':
            break
        count+=1
    print('Total lines in file :','file',' is ',count)
end_time=time.time()
print('Time required=',end_time-start_time,'sec')