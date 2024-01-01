import time
import threading

def printMsg(msg,lck):
    lck.acquire()
    print('[',end='')
    print(msg,end='')
    time.sleep(0.5)
    print(']')
    lck.release()

lck=threading.Lock()
th1=threading.Thread(target=printMsg,args=('hey vishnu',lck))
th2=threading.Thread(target=printMsg,args=('hey vishnu how do you do',lck))
th1.start()
th2.start()
# th1.join()
# th2.join()