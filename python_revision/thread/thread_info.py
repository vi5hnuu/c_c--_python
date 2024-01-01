import threading
t=threading.current_thread()
print('current thread ',t)
print('current thread name ',t.name)
print('current thread identifier ',t.ident)
print('current thread alive ',t.is_alive())
t.name='kumar'
print('current thread name ',t.name)
