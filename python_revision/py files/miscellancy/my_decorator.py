# def my_decorator(func):
#     def wrapper():
#         print('*'*20)
#         func()
#         print('~'*20)
#     return wrapper
#
# def display():
#     print('i stand decorator')
# def show():
#     print('Nothing great mee too!')
# display=my_decorator(display)
# display()
# show=my_decorator(show)
# show()

#####################################
#####################################
#####################################

def my_decorator(func):
    def wrapper():
        print('*'*20)
        func()
        print('~'*20)
    return wrapper
@my_decorator
def display():
    print('i stand decorator')
@my_decorator
def show():
    print('Nothing great mee too!')
display()
show()