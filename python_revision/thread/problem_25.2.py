import time
import threading

def square(nos):
    print('Calculating squares :')
    for n in nos:
        time.sleep(0.5)
        print('n=',n,'square=',n*n)
def cube(nos):
    print('Calculating squares :')
    for n in nos:
        time.sleep(0.5)
        print('n=',n,'cube=',n*n*n)
arr=[1,3,5,7,9,11]
start_time=time.time()
square(arr)
cube(arr)
endtime=time.time()
print('Time required ',endtime-start_time,'sec')


