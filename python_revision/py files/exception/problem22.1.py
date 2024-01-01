try:
    while True:
        num=int(input('Enter the positive number :'))
        if num>=0:
            print(num**2)
        else:
            raise ValueError('negative number')
except ValueError as ve:
    print(ve)
    print(ve.args)