while True:
    try:
        num=int(input('Enter the number :'))
        break
    except ValueError:
        print('incorrect input')
print('Number entered is ',num)