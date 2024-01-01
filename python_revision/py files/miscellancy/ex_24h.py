def display_bits(n):
    for i in range(7,-1,-1):
        andmask=1<<i
        k=n & andmask
        print('0',end='') if k==0 else print('1',end='')
    print()

num=int(input('Enter a number between 0 and 255 :'))
display_bits(num)
for i in range(7,-1,-1):
    if i%2!=0:
        ormask=1<<i
        num=num|ormask


display_bits(num)
