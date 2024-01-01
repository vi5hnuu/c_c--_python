class b1:
    def __init__(self):
        print('b1-ctor')

    def __del__(self):
        print('b1-dtor')
class b2:
    def __init__(self):
        print('b2-ctor')

    def __del__(self):
        print('b2-dtor')

class d(b1,b2):
    def __init__(self):
        b2.__init__(self)
        print('d-ctor')
    def __del__(self):
        b1.__del__(self)
        b2.__del__(self)
        print('d-dtor')

x=d()
x=None
xx=d()
xx=None
