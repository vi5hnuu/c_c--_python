# import time
# import threading
#
# def square(nos,lck):
#     lck.acquire()
#     print('Calculation square :')
#     for n in nos:
#         time.sleep(0.5)
#         print('n=',n,'square=',n*n)
#     lck.release()
# def cube(nos,lck):
#     lck.acquire()
#     print('Calculation square :')
#     for n in nos:
#         time.sleep(0.5)
#         print('n=',n,'cube=',n*n*n)
#     lck.release()
#
# arr=[x for x in range(1,12) if x%2!=0]
# start_time=time.time()
# lck=threading.Lock()
#
# th1=threading.Thread(target=square,args=(arr,lck))
# th2=threading.Thread(target=cube,args=(arr,lck))
# th1.start()
# th2.start()
# th1.join()
# th2.join()
#
# end_time=time.time()
# print('Time required=',end_time-start_time)

############################################
############################################
############################################
import threading,time

def square(nos,lck):

    print('Calculation square :')
    for n in nos:
        lck.acquire()
        time.sleep(0.5)
        print('n=',n,'square=',n*n)
        lck.release()
def cube(nos,lck):
    print('Calculation square :')
    for n in nos:
        lck.acquire()
        time.sleep(0.5)
        print('n=',n,'cube=',n*n*n)
        lck.release()

arr=[x for x in range(1,12) if x%2!=0]
start_time=time.time()
lck=threading.Lock()

th1=threading.Thread(target=square,args=(arr,lck))
th2=threading.Thread(target=cube,args=(arr,lck))
th1.start()
th2.start()
th1.join()
th2.join()

end_time=time.time()
print('Time required=',end_time-start_time)