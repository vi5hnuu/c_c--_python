class Date:
    def __init__(self,d,m,y):
        self.__day=d
        self.__month=m
        self.__year=y
    def __eq__(self, other):
        if [self.__day,self.__month,self.__year]==[other.__day,other.__month,other.__year]:
            return True
        else:
            return  False
d1=Date(12,11,98)
d2=Date(12,11,98)
d3=Date(12,12,98)
print(id(d1))
print(id(d2))
# if isinstance(d1,Date):
#     print('yes')

# if not (d1 is d2):
#     print('yes')

# if d1==d2:
#     print('Equal')

if not d1==d3:
    print('not Equal')
