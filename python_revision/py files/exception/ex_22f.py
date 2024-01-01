class NumberTooSmall(Exception):
    def __init__(self,num):
        self.num=num
    def get_details(self):
        return {'Number too small':self.num}

class NumberToBig(Exception):
    def __init__(self,num):
        self.num = num

    def get_details(self):
        return {'Number too big': self.num}

class Numbers:
    def __init__(self):
        self.__dct={}
    def append(self,num,cube):
        self.__dct[num]=cube
    def display(self):
        for k,v in self.__dct.items():
            print(k,v)
        print()

n=Numbers()
print('Enter number between 3 and 30')
try:
    for x in range(10):
        num=int(input('Enter the number :'))
        if num>30:
            raise NumberToBig(num)
        elif num<3:
            raise NumberTooSmall(num)
        else:
            cube=num**3
            n.append(num,cube)
except NumberToBig as ntb:
    print(ntb)
    print(ntb.args)
    print(ntb.get_details())
except NumberTooSmall as nts:
    print(nts)
    print(nts.args)
    print(nts.get_details())
finally:
    n.display()