class product:
    def __init__(self):
        self.__title=input('Enter title :')
        self.__price=input('Enter price :')
    def display(self):
        print(self.__title,self.__price)
class sales:
    def __init__(self):
        self.__sales_figures=[int(x) for x in input('Enter sales figure :').split()]
    def display(self):
        print(self.__sales_figures)
class hardware(product,sales):
    def __init__(self):
        product.__init__(self)
        sales.__init__(self)
        self.__category=input('Enter category :')
        self.__oem=input('Enetr oem :')
    def display(self):
        product.display(self)
        sales.display(self)
        print(self.__category,self.__oem)

hw1=hardware()
hw1.display()
