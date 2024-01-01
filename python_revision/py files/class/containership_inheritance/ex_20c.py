class myString:
    def __init__(self,s=''):
        self.__s=s
    def display(self):
        print(self.__s)
    def tolower(self):
        self.__s=self.__s.lower()
    def toupper(self):
        self.__s=self.__s.upper()
    def __iadd__(self, other):
        self.__s=self.__s+other.__s
        return myString(self.__s)

s1=myString('hello')
s1.display()
s1.tolower()
s1.display()
s1.toupper()
s1.display()
s2=myString('vishnu')
s1+=s2
s1.display()