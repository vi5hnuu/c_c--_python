def rsum(num):
    if num!=0:
        digit=num%10
        num=num//10
        sum=digit+rsum(num)
    else:
        return 0
    return sum
print(rsum(12345))