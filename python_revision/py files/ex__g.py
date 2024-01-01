lower=1
upper=300
print('All prime number between 1 to 300')
for num in range(lower,upper+1,1):
    for n in range(2,num//2):
        if(num%n==0):
            break
        else:
            print(num)
            break