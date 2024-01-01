def display_bits(n):
    for i in range(7,-1,-1):
        andmask=1<<i
        k=n & andmask
        print('0',end='') if k==0 else print('1',end='')
    print()

num=int(input('Enter a number between 0 and 255 :'))
display_bits(num)
n1=num<<4
display_bits(n1)
n2=num>>4
display_bits(n2)
num=n1|n2
display_bits(num)