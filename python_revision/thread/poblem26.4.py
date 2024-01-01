import threading
def print_num(n):
    try:
        rick.acquire()
        if n==0:
            return
        else:
            t=threading.current_thread()
            print(t.name,':',n)
            n-=1
            print_num(n)
    finally:
        rick.release()

rick=threading.RLock()
th1=threading.Thread(target=print_num,args=(8,))
th1.start()
th2=threading.Thread(target=print_num,args=(5,))
th2.start()
th1.join()
th2.join()