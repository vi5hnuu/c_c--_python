def display_bits(n):
    for i in range(7,-1,-1):
        andmask=1<<i
        k=n & andmask
        print('0',end='') if k==0 else print('1',end='')
    print()

num=int(input('Enter a number between 0 and 255 :'))
display_bits(num)
j=num & 0x08
print(j)
print('*'*20)
j=num & 0x40
print(j)
print('*'*20)
j=num & 0x80
print(j)
print('*'*20)
