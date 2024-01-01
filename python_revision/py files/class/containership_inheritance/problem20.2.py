class base:
    def __method(self):
        print('In base method')
    def func(self):
        print('in base func')
        self.__method()
class derived(base):
    def __method(self):
        print('in derived method')
b=base()
b.func()
d=derived()
d.func()
