# # s=str([10,20,30])
# s=[10,20,30]
# s=[str(x) for x in s]
# print(s)
# # print(s)
# print(''.join(s))

class String:
    def __init__(self,s=''):
        self.__str=s

    def display(self):
        print(self.__str)

    def __int__(self):
        return int(self.__str)

s1=String('123')
s1.display()
print(int(s1)+3)