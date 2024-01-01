class fruit:
    count=0 #class variable
    def __init__(self,name='',size=0,color=''):
        self.__name=name
        self.__size=size
        self.__color=color
        fruit.count+=1
    def display(self):
        print(fruit.count)
f1=fruit('banana',5,'yellow')
print(vars(fruit))
print(dir(fruit))
print(vars(f1))
print(dir(f1))