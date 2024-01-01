def display():
    '''display a message'''
    print('hello')
    print(display.__doc__)
def show(msg1='',msg2=''):
    '''display message 2
    arguements:
    msg1
    msg2
    '''
    print(msg1.lower())
    print(msg2.upper())
    print(show.__doc__)

display()
show()
help(show)
help(display)