class number:
    def set_number(self,n):
        self.__num=n
    def get_number(self):
        return self.__num
    def print_number(self):
        print(self.__num)
    def isnegative(self):
        if self.__num<0:
            return True
        else:
            return False
    def isdivisibleby(self,n):
        if n==0:
            return False
        if self.__num%n==0:
            return True
        else:
            return False
    def absolute_value(self):
        if self.__num>=0:
            return self.__num
        else:
            return self.__num*-1
x=number()
x.set_number(-1234)
x.print_number()
if x.isdivisibleby(5):
    print('5 divides ',x.get_number())
else:
    print('5 not divide ',x.get_number())
print('absolute value of ',x.get_number(),' is ',x.absolute_value())