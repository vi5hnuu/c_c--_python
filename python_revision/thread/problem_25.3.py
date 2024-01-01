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
start_time=time.perf_counter()
th1=threading.Thread(target=square,args=(arr,))
th2=threading.Thread(target=cube,args=(arr,))
th1.start()
th2.start()
# th1.join()
# th2.join()
endtime=time.perf_counter()
print('Time required ',endtime-start_time,'sec')