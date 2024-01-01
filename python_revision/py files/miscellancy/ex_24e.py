def display_bits(n):
    for i in range(7,-1,-1):
        andmask=1<<i
        k=n & andmask
        print('0',end='') if k==0 else print('1',end='')
    print()

def chkbits(x,p,n):
    #lsb to msb
    no=0
    for i in range(0,n):
        if((x>>(p-1) & 1))!=1:
            return 0
    p-=1
    return 1

num=int(input('Enter a number between 0 255 :'))
display_bits(num)
p=int(input('Enter position :'))
n=int(input('Enter no. of bits :'))
flag=chkbits(num,p,n)
if flag==1:
    print('on')
else:
    print('off')
