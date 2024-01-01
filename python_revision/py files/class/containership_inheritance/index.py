class index:
    def __init__(self):
        self._count=0
        print('base ctor')
    def display(self):
        print('count ',self._count)
    def incr_count(self):
        self._count+=1

class newindex(index):
    def __init__(self):
        print('der ctor')
        # super().__init__()
        super().__init__()
    def decr_count(self):
        self._count-=1

i=newindex()
i.incr_count()
i.incr_count()
i.incr_count()
i.decr_count()
i.display()