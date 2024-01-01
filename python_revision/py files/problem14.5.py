import sys

def dec_to_bin(n):
    r=n%2
    n=int(n/2)
    if n!=0:
        dec_to_bin(n)
    print(r,end=' ')

dec_to_bin(15)