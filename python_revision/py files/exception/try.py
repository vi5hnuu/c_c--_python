try:
    a=int(input('Enter the number :'))
    b=int(input('Enter the number :'))
    c=a/b
    print('c=',c)
except ZeroDivisionError as zde:
    print('Denominator is zero')
    print(zde.args)
    print(zde)
except ValueError:
    print('Unable to convert string to int')
except:
    print('Unknown error')