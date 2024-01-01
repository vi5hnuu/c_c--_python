class fruit:
    count=0
    def __init__(self,name='',size=0,color=''):
        self.__name=name
        self.__size=size
        self.__color=color
        fruit.count+=1
    def display(self):
        print(self.__name,self.__size,self.__color,fruit.count)

f1=fruit('banana',5,'yellow')
f2=fruit('grapes',100,'green')
f1.display()
f2.display()
print(fruit.count)
