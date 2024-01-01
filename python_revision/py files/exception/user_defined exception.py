class InsufficiedBalanceError(Exception):
    def __init__(self,accno,cb):
        self.__accno=accno
        self.__curbal=cb
    def get_details(self):
        return{'Acc no.':self.__accno,'current balance ':self.__curbal}

class customers:
    def __init__(self):
        self.__dct={}
    def append(self,accno,n,amt):
        self.__dct[accno]={'Name':n,'Balance':amt}
    def deposit(self,accno,amt):
        d=self.__dct[accno]
        d['Balance']=d['Balance']+amt
        self.__dct[accno]=d
    def display(self):
        for k,v in self.__dct.items():
            print(k,':',v)
        print()
    def withdraw(self,accno,amt):
        d=self.__dct[accno]
        curbal=d['Balance']
        if curbal-amt<5000:
            raise  InsufficiedBalanceError(accno,curbal)
        else:
            d['Balance']=d['Balance']-amt
            self.__dct[accno]=d
c=customers()
c.append(123,'vishnu',9000)
c.append(124,'parkash',10000)
c.display()
c.deposit(123,1000)
c.deposit(124,0)
c.display()

try:
    c.withdraw(123,5000)
    print('Amount withdrawn successfully')
    c.display()
    c.withdraw(123,5000)
    print('Amount withdrawn successfully')
    c.display()
except InsufficiedBalanceError as ibe:
    print('withdrawal denied')
    print(ibe.get_details())
    print(ibe)
    print(ibe.args)