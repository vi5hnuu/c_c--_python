print('Aramstrong number between 1 and 500 are :')
for num in range(1,501):
    n=num;
    d3=n%10
    n=int(n/10)
    d2=n%10
    n=int(n/10)
    d1=n%10
    if d1**3+d2**3+d3**3==num:
        print(num)