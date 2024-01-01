class base:
    def display(self):
        print('In base')
class derived1(base):
    def display(self):
        print('In derived1')
class derived2(base):
    def display(self):
        print('In derived2')
class der(derived1,derived2):
    def display(self):
        super().display()
        derived1.display(self)
        derived2.display(self)
        print(der.__mro__)#hierarchy

m=der()
m.display()