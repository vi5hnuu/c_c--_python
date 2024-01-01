import threading
def fun1():
    print('fun1')
def fun2():
    print('fun2')

th1=threading.Thread(name='for fun1',target=fun1) #ctor of class thread
th2=threading.Thread(name='for fun2',target=fun2)
# th1.start()
# th2.start()
th2.start()
th1.start()
